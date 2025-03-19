#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>prog,math,pe;
    for(int i=0;i<n;++i){
        int k;
        cin>>k;
        if(k==1)
            prog.push_back(i+1);
        else if(k==2)
            math.push_back(i+1);
        else if(k==3)
            pe.push_back(i+1);
    }
    int team=min(prog.size(),math.size(),pe.size());
    cout<<team<<endl;

    for(int i=0;i<team;++i){
        cout<<prog[i]<<" "<<math[i]<<" "<<pe[i]<<endl;
    }
    return 0;
}
