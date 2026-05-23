#pragma once
#include <string>
#include <vector>

class ImageHandler {
public:
    ImageHandler();
    ~ImageHandler();

    cv::Mat loadImage(const std::string& path);
    bool saveImage(const cv::Mat& img);

private:
};

