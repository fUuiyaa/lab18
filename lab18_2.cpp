#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double xstart = max(R1->x,R2->x);
	double xend = min(R1->x+R1->w,R2->x+R2->w);
	double ystart = min(R1->y,R2->y);
	double yend = max(R1->y-R1->h,R2->y-R2->h);
	double w = xend-xstart;
	double h = ystart-yend;

	if(w>0&&h>0){
		return w*h;
	} else return 0;
}
