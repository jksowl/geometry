#include "geo.h"

double getMin(double x1, double x2)
{
    return x1 < x2 ? x1 : x2;
}

double getMax(double x1, double x2)
{
    return x1 > x2 ? x1 : x2;
}

double getSlope(double x1, double y1, double x2, double y2)
{
    return (y2 - y1) / (x2 - x1);
}

double getYIntercept(double x1, double y1, double x2, double y2)
{
    return (x2 * y1 - x1 * y2) / (x2 - x1);
}

double getCos(double x1, double y1, double x2, double y2)
{
    return (x1 * x2 + y1 * y2)
            / (sqrt(x1 * x1 + y1 * y1) + sqrt(x2 * x2 + y2 * y2));
}

TEST_CASE("GET_COS", "[COS]")
{
    REQUIRE(getCos(0, 0, 2, 2) == 0);
    REQUIRE(getCos(4, 3, -4, -3) == -2.5);
    cout << "Test getCos" << endl;
}
TEST_CASE("GETMAX", "[MAX]")
{
    REQUIRE(getMax(1, 3) == 3);
    REQUIRE(getMax(5, 10) == 10);
    REQUIRE(getMax(-100, 100) == 100);
    REQUIRE(getMax(-36.6, 0) == 0);
    cout << "Test getMax" << endl;
}
TEST_CASE("GETMIN", "[MIN]")
{
    REQUIRE(getMin(1, 2) == 1);
    REQUIRE(getMin(3, 5) == 3);
    REQUIRE(getMin(-1000, 50) == -1000);
    REQUIRE(getMin(-10.5, 0) == -10.5);
    cout << "Test getMin" << endl;
}
TEST_CASE("GETSLOPE", "[SLOPE]")
{
    REQUIRE(getSlope(0, 0, 2, 2) == 1);
    REQUIRE(getSlope(10, 2, 12, 4) == 1);
    cout << "Test getSlope" << endl;
}
TEST_CASE("GETYINTERCEPT", "[INTERSEPT]")
{
    REQUIRE(getYIntercept(2, 3, 1, 1) == -1);
    REQUIRE(getYIntercept(5, 8, 20, 5) == 9);
    cout << "Test getSlope" << endl;
}
