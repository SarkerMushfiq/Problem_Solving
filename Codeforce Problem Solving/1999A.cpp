#include<iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int a=n%10;
        int b=n/10;
        int sum=a+b;
        cout<<sum<<endl;
     }
     return 0;
 }
