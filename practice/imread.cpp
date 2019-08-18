#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char** argv)
{
	Mat srcImage = imread("1.jpg");
	namedWindow("", WINDOW_NORMAL);
	imshow("", srcImage);
	waitKey(0);
	return 0;
}
