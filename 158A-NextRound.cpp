#include<iostream>
using namespace std;
int main(){
    int n,k,p=0;
    cin>>n>>k;
    int a[100];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++){
        if(a[i]>=a[k-1] && a[i]!=0)
        p++;

    }
    cout<<p;

}