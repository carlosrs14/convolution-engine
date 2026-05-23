#include <opencv2/opencv.hpp>

#include "image-handler.hpp"

ImageHandler::ImageHandler() {}
ImageHandler::~ImageHandler() {}

cv::Mat ImageHandler::loadImage(const std::string& path) {
    cv::Mat img = cv::imread(path);
    return img;
}

bool ImageHandler::saveImage(const cv::Mat& img, const std::string& path) {
    return cv::imwrite(path, img);
}
