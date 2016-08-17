#ifndef GROW_H
#define GROW_H

#include <cstdlib>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>

using namespace std;
using namespace cv;
class grow
{
	public :
		grow(int threshold);
		void start_grow(Mat input, Mat edgeMap, int sX, int sY, int colorflag);
		void setThreshold(int threshold);
		~grow();

	private :
		int threshold;
};

#endif