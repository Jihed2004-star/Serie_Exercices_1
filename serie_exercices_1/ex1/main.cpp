#include <iostream>

using namespace std;

int main()
{
    cout << "1.Pour convertir Km vers Mile" << endl;
    cout << "2.Pour convertir Mile vers Km" << endl;
    int a;
    float val;
    cin>>a;
    if(a==1){
        cout << "enter votre valeur en Km" << endl;
        cin>>val;
        cout<<val/1.609<<endl;
    }
    else{
        cout << "enter votre valeur en Miles" << endl;
        cin>>val;
        cout<<val*1.609<<endl;
    }
    return 0;
}
