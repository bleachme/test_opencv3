#include <string>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main()
{
	//VideoCapture cap(0);	
    //if(!cap.isOpened())		
    //    return -1;	
    Mat edges; 	
    //for(;;)	
    //{		
        Mat frame= cv::imread("in.jpg");
        if (frame.data == NULL)
        {
            cout<<"read img data is null"<<endl;
            return -1;
        }
        //cap>>frame;		
        cv::cvtColor(frame,edges, CV_BGR2GRAY);		
        cv::GaussianBlur(edges, edges,Size(7,7),1.5,1.5);		
        cv::Canny(edges, edges,0,90,3);		
        //cv::imshow("qq",edges);
        cv::imwrite("out.jpg", edges);
 /**/       
    //} 
}