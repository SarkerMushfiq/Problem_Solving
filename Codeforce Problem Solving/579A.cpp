#include<iostream>
using namespace std;
int main(){
    int x,i=0;
    cin>>x;
    for(i=0;i<=x;){
        i=i*2;
    }
    if(i==x)
        i=1;
    else
        i=(x-i)+1;
     cout<<i<<endl;

    return 0;
}
