//#include<opencv2/opencv.hpp>
//
//#include<iostream>
//
//using namespace cv;
//
//int main(int argc, char** argv) {
//	Mat image = imread("H:\\opencv.image\\xiaoke.jpeg");
//
//	if (image.empty()) {
//		printf("could not load image...\n");
//
//		return -1;
//
//	}
//
//	namedWindow("test_opencv_setup", 0);
//
//	imshow("test_opencv_srtup", image);
//
//	waitKey(0);
//
//	return 0;
//
//}
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
    // 读取图片（使用图片的绝对路径，参考自己的图所在目录）
    Mat srcImg = imread("H:\\opencv.image\\xiaoke.jpeg");
    if (srcImg.empty()) {
        cout << "could not load image..." << endl;
        return -1;
    }

    imshow("视觉测试", srcImg);
    // 显示灰度图
    Mat Gray;
    //调整全图大小
   // namedWindow("输入窗口", WINDOW_FREERATIO);
    cvtColor(srcImg, Gray, 10);
    imshow("Gray", Gray);
    // 等待任意按键按下，不添加此语句图片会一闪而过
    waitKey(0);

    cout << "Hello,world." << endl;
    destroyAllWindows();
    return 0;
}