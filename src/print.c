#include "geo.h"
double pi = 3.14159265359;

void printCircle(
        double x1, double y1, double r1, bool flag, int k, int lkl, int n)
{
    double p1, s1;
    p1 = pi * r1 * r1;
    s1 = 2 * pi * r1;
    cout << n << endl;
    printf("Circle(%.1f %.1f , %.1f)\n", x1, y1, r1);
    printf("perimetr = %.3f\n", p1);
    printf("area = %.3f\n", s1);
    if (flag == true) {
        printf("intersects: \n   ");
        if (lkl == 1) {
            cout << k << ". Circle" << endl;

        } else if (lkl == 2) {
            cout << k << ". Triangle" << endl;

        } else if (lkl == 3) {
            cout << k << ". Poligon" << endl;
        }

    } else
        printf("intersects: \n   - \n");
}

void printTriangle(
        double x1,
        double y1,
        double x2,
        double y2,
        double x3,
        double y3,
        bool flag,
        int k,
        int lkl,
        int n)
{
    double s, p, determinant;
    p = sqrt((x2 - x1) * (x2 - x1)) + sqrt((x3 - x1) * (x3 - x1))
            + sqrt((x3 - x2) * (x3 - x2));
    determinant = (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3);

    determinant < 0 ? s = determinant / (-2) : s = determinant / 2;
    cout << n << endl;
    printf("Triangle(%.1f %.1f , %.1f %.1f , %.1f %.1f)\n",
           x1,
           y1,
           x2,
           y2,
           x3,
           y3);
    printf("perimetr = %.3f\n", p);
    printf("area = %.3f\n", s);
    if (flag == 1) {
        printf("intersects: \n   ");
        if (lkl == 1) {
            cout << k << ". Circle" << endl;

        } else if (lkl == 2) {
            cout << k << ". Triangle" << endl;

        } else if (lkl == 3) {
            cout << k << ". Poligon" << endl;
        }
    } else
        printf("intersects: \n   - \n");
}

void printPoligon(
        double x1,
        double y1,
        double x2,
        double y2,
        double x3,
        double y3,
        double x4,
        double y4,
        bool flag,
        int k,
        int lkl,
        int n)
{
    double p, s, determinant, s1, s2;
    p = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - x1))
            + sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2))
            + sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3))
            + sqrt((x1 - x3) * (x1 - x4) + (y1 - y3) * (y1 - y4));
    determinant = (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3);
    determinant < 0 ? s1 = determinant / (-2) : s1 = determinant / 2;
    determinant = (x4 - x3) * (y2 - y3) - (x2 - y3) * (y1 - y3);
    determinant < 0 ? s2 = determinant / (-2) : s2 = determinant / 2;
    s = s1 + s2;
    cout << n << endl;
    printf("Poligon(%.1f %.1f , %.1f %.1f , %.1f %.1f , %.1f %.1f)\n",
           x1,
           y1,
           x2,
           y2,
           x3,
           y3,
           x4,
           y4);
    printf("perimetr = %.3f\n", p);
    printf("area = %.3f\n", s);
    if (flag == 1) {
        printf("intersects: \n   ");
        if (lkl == 1) {
            cout << k << ". Circle" << endl;
        } else if (lkl == 2) {
            cout << k << ". Triangle" << endl;

        } else if (lkl == 3) {
            cout << k << ". Poligon" << endl;
        }
    } else
        printf("intersects: \n   - \n");
}
