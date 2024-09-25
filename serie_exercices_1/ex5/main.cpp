#include <iostream>
#include <cmath>

using namespace std;
double f(double x,bool &OK){
    double resultat=sqrt((x-1)*(2-x));
    if(resultat>=0){
        OK=true;
        return resultat;
    }
    else{
        OK=false;
        return 0;
    }
}
int main()
{
    double x=1.5;
    bool ok;
    double r=f(x,ok);
    if(ok==true){
        cout<<" x est definie avec resultat = "<<r;
    }
    else
        cout<<" x n est pas definie avec resultat = "<<x;

    return 0;
}
