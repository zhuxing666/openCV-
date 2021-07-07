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
    // ��ȡͼƬ��ʹ��ͼƬ�ľ���·�����ο��Լ���ͼ����Ŀ¼��
    Mat srcImg = imread("H:\\opencv.image\\xiaoke.jpeg");
    if (srcImg.empty()) {
        cout << "could not load image..." << endl;
        return -1;
    }

    imshow("�Ӿ�����", srcImg);
    // ��ʾ�Ҷ�ͼ
    Mat Gray;
    //����ȫͼ��С
   // namedWindow("���봰��", WINDOW_FREERATIO);
    cvtColor(srcImg, Gray, 10);
    imshow("Gray", Gray);
    // �ȴ����ⰴ�����£�����Ӵ����ͼƬ��һ������
    waitKey(0);

    cout << "Hello,world." << endl;
    destroyAllWindows();
    return 0;
}