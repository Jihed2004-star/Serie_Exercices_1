#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int N=5;
    string mots[N];
    for (int i=0;i<N;i=i+1){
        cout<<"Donner le mot num "<<i+1<<endl;
        cin>>mots[i];
    }
    string maxx=mots[0];
    for (int i=0;i<N;i=i+1){
        if(maxx.size()<mots[i].size()){
            maxx=mots[i];
        }
    }
    cout<<maxx;
    return 0;
}
