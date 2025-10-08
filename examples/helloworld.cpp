
#include <stdio.h>
#include <opencv2/opencv.hpp>
 
using namespace cv;
 
int main(int argc, char** argv )
{
    try 
    {
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    std::cout << argv[1] << "\n";
    Mat image;
    image = imread( argv[1], IMREAD_COLOR );
 
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
 
    waitKey(0);
    }
    catch ( cv::Exception& e )
    {
        std::cout << currentUIFramework() << "\n";
        std::cout << e.what() << "\n";
    }
    return 0;
}