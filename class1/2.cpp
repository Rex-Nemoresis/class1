#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main() {
	cv::Mat srcMat = imread("D:\\1.jpg", 0);
	//int h = srcMat.rows;
	//int w = srcMat.cols;
	//for (int j = 0;j < h;j++)
	{
		//for (int i = 0;i < w;i++)
		{
			//uchar average = (srcMat.at<Vec3b>(j, i)[0] + srcMat.at<Vec3b>(j, i)[1] + srcMat.at<Vec3b>(j, i)[2]) / 3;
			//srcMat.at<Vec3b>(j, i)[0] = average;
			//srcMat.at<Vec3b>(j, i)[1] = average;
			//srcMat.at<Vec3b>(j, i)[2] = average;
		}
	}
	imshow("src", srcMat);
	waitKey(0);
}