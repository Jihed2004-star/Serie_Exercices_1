#include <iostream>

using namespace std;
void swapv(int a , int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout << "a="<< a << endl << "b=" << b;
}//0.058
void swapv(int *a , int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout << "a="<< *a << endl << "b=" << *b;
}//0.056s
int main()
{
    int a=5;
    int b=7;
    swapv(a,b);
    return 0;
}
