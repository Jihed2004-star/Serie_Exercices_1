#include <iostream>
#include <math.h>
using namespace std;

double distance(double xa,double xb,double ya,double yb){
    double result;
    result = sqrt(pow((xb-xa),2)+pow((yb-ya),2));
    return result;
    }
int main()
{
    cout << distance(4,5,-5,-2);
    return 0;
}
