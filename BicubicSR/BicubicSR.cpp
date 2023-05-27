// BicubicSR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    // Load the low-resolution image
    cv::Mat lowResImage = cv::imread("C:/Users/drume/OneDrive/Pictures/konijn_test.jpg");

    if (lowResImage.empty()) {
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }

    // Create a high-resolution image by scaling the low-resolution image
    cv::Mat highResImage;
    cv::resize(lowResImage, highResImage, cv::Size(), 2.0, 2.0, cv::INTER_CUBIC);

    // Display the low-resolution and high-resolution images
    cv::namedWindow("Low Resolution Image", cv::WINDOW_NORMAL);
    cv::imshow("Low Resolution Image", lowResImage);

    cv::namedWindow("High Resolution Image", cv::WINDOW_NORMAL);
    cv::imshow("High Resolution Image", highResImage);

    cv::waitKey(0);

    return 0;
}



