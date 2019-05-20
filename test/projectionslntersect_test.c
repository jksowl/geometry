#include "ctest.h"
#include "geo.h"
extern double getMax(double x1, double x2);
extern double getMin(double x1, double x2);

bool projectionsIntersect(double x1, double x2, double x3, double x4)
{
    return ((getMin(x1, x2) <= getMin(x3, x4)
             && getMin(x3, x4) <= getMax(x1, x2))
            || ((getMin(x3, x4) <= getMin(x1, x2)
                 && getMin(x1, x2) <= getMax(x3, x4))));
}

TEST_CASE("", "[]")
{
    REQUIRE(projectionsIntersect(1, 2, 3, 4) == false);
    REQUIRE(projectionsIntersect(1, 1, 1, 1) == true);
    cout << "Test projections intersect" << endl;
}
