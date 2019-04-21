#include "geo.h"

double getMin(double x1, double x2)
{
return x1 < x2 ? x1 : x2;
}

double getMax(double x1, double x2) {
	return x1 > x2 ? x1 : x2;
}

double getSlope(double x1, double  y1, double x2, double y2) {
	return (y2 - y1) / (x2 - x1);
}


double getYIntercept(double x1, double  y1, double x2, double y2) {
	return (x2 * y1 - x1 * y2) / (x2 - x1);
}


double getCos(double x1, double  y1, double x2, double y2) {
	return (x1 * x2 + y1 * y2) / (sqrt(x1 * x1 + y1 * y1) + sqrt(x2 * x2 + y2 * y2));
}

