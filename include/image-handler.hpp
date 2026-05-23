#pragma once

#include <string>
#include <opencv2/opencv.hpp>

class ImageHandler {
public:
    ImageHandler();
    ~ImageHandler();

    cv::Mat loadImage(const std::string& path);
    bool saveImage(const cv::Mat& img, const std::string& path = "result.png");
};

