#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main() {
	cv::Mat srcMat = imread("D:\\1.jpg", 0);
	int h = srcMat.rows;
	int w = srcMat.cols;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
		if (srcMat.at<uchar>(i, j) > 100)
			srcMat.at<uchar>(i, j) = 255;
		else srcMat.at<uchar>(i, j) = 0;

	imshow("src", srcMat);
	waitKey(0);
}