#include <opencv2/opencv.hpp>
#include <iostream>


using namespace std;
// using namespace cv;

int main(int argc, char** argv)
{
    
    cv::Mat  img = cv::imread("../pics/kun.png");
    
    cv::resize(img, img, cv::Size(500, 500));

    vector<cv::Mat> channels;

    cv::split(img, channels);

    
    
    cv::imshow("Original Image", img);
    // cv::imshow("B", channels[0]);
    // cv::imshow("G", channels[1]);
    // cv::imshow("R", channels[2]);
    cv::waitKey(0);


    return 0;
}
