#include <opencv2/ccalib/randpattern.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{   
    int width = 1080;
    int height = 720;
    cv::randpattern::RandomPatternGenerator generator(width, height);
    generator.generatePattern();
    cv::Mat pattern = generator.getPattern();
    string path;
    getline(cin,path);
    cv::imwrite(path,pattern);
    return 0;
}
