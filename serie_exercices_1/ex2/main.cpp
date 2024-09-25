#include <iostream>

using namespace std;

int main()
{
    const int n=10;
    int tab[n];
    for(int i=1;i<=n;i=i+1){
        cout << "enter la valeur n" <<i<< endl;
        cin>>tab[i];
    }
    int nmin=tab[1];
    for(int i=2;i<=n;i=i+1){
        if(nmin>tab[i]){
            nmin=tab[i];
        }
    }
    cout<<nmin;
    return 0;
}
