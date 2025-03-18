#include<iostream>
using namespace std;

bool isComposite(int num){
    if(num<=3) return false;
    if(num%2==0||num%3==0) return true;
    for(int i=5;i*i<=num;i+=6){
        if(num%i==0||num%(i+2)==0) return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    for(int i=4;i<=n/2;++i){
        if(isComposite(i)&&isComposite(n-i)){
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
    return 0;
}
