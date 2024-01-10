#include<bits/stdc++.h>
using namespace std;
vector <int> factors;
int main(){
    int n,k,i;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<"Enter the K_th index: "<<endl;
    cin>>k;
    int fc=0;
    for(i=1;i<=n;++i){
        if(n%i==0)
           factors.push_back(i); //all factors are injected.
        if(factors.size()==k) //factors are checked upto kth term only.
            break;
    }
    if(k<=factors.size()){
        return factors[k-1];
    }
    else
        return -1;
}