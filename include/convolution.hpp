#pragma once

#include <opencv2/opencv.hpp>

class ConvolutionEngine {

private:
    cv::Mat kernel;
    cv::Mat img;
    cv::Mat out;
    size_t current_i = 0;
    size_t current_j = 0;
    size_t current_c = 0;

public:
    ConvolutionEngine();
    ~ConvolutionEngine();

    void setKernel(const cv::Mat& kernel);
    void setImg(const cv::Mat& img);
    void applyStep();
    bool isFinished() const;
    cv::Mat getOutput() const { return out; }
    cv::Mat getInput() const { return img; }
    cv::Mat getKernel() const { return kernel; }
};

