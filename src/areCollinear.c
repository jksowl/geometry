#include "geo.h"
bool areCollinear(double x1, double y1, double x2, double y2)
{
    return x1 / x2 == y1 / y2 ? true : false;
}
