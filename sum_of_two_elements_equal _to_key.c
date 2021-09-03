//Ques2.
#include <bits/stdc++.h>
#include <bits/stdc++.h>
#iclude<iostream>
using namespace std;

int main(){
    int i,j,k,n,t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;

    while(t){
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if((a[i]+a[j])==a[k])
                    cout<<"Respective values of i j k are"<<i <" "<<j<<" "<<k<<endl;

            }
        }
    }
    t--;

    }
}
