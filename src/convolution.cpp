#include "convolution.hpp"

ConvolutionEngine::ConvolutionEngine() {
    this->current_i = 0;
    this->current_j = 0;
    this->current_c = 0;
}
ConvolutionEngine::~ConvolutionEngine() {}

void ConvolutionEngine::setKernel(const cv::Mat& kernel) {
    this->kernel = kernel;
}

void ConvolutionEngine::setImg(const cv::Mat &img) {
    if (img.channels() == 3) {
        cv::cvtColor(img, this->img, cv::COLOR_BGR2GRAY);
    } else {
        this->img = img;
    }
    this->out = cv::Mat::zeros(this->img.size(), CV_8U);
    this->current_i = 0;
    this->current_j = 0;
    this->current_c = 0;
}

void ConvolutionEngine::applyStep() {
    if (this->isFinished()) {
        return;
    }

    int kRows = kernel.rows;
    int kCols = kernel.cols;
    int kCenterX = kCols / 2;
    int kCenterY = kRows / 2;

    float sum = 0.0;
    for (int m = 0; m < kRows; m++) {
        for (int n = 0; n < kCols; n++) {
            int n_i = current_i + (m - kCenterY);
            int n_j = current_j + (n - kCenterX);

            if (n_i >= 0 && n_i < img.rows && n_j >= 0 && n_j < img.cols) {
                sum += img.at<uchar>(n_i, n_j) * kernel.at<float>(m, n);
            }
        }
    }

    out.at<uchar>(current_i, current_j) = cv::saturate_cast<uchar>(sum);

    current_j++;
    if (current_j >= img.cols) {
        current_j = 0;
        current_i++;
    }
}

bool ConvolutionEngine::isFinished() const {
    if (img.empty()) return true;
    return current_i >= img.rows;
}
