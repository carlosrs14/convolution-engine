#pragma once

#include <vector>

struct Kernel {
    std::vector<std::vector<float>> matrix;
    int size;
};

class ConvolutionEngine {
public:
    ConvolutionEngine();
    ~ConvolutionEngine();

    void setKernel(const Kernel& kernel);
    void applyStep();
    bool isFinished() const;

private:
    Kernel currentKernel;
};

