#include <opencv4/opencv2/opencv.hpp>

int main() {
    cv::VideoCapture cap(0); // 0 represents the default camera index

    if (!cap.isOpened()) {
        std::cout << "Failed to open the camera." << std::endl;
        return -1;
    }

    cv::Mat frame;
    while (true) {
        cap.read(frame); // Read a frame from the camera

        if (frame.empty()) {
            std::cout << "Failed to capture frame." << std::endl;
            break;
        }

        cv::imshow("Camera", frame); // Display the frame

        // Press 'q' to exit the loop
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    cap.release(); // Release the camera
    cv::destroyAllWindows(); // Close all windows

    return 0;
}