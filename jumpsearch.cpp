#include<bits/stdc++.h>
#include<iostream>


using namespace std;

void jumpsearch(int a[],int n,int key){
    int m=3;
    int jump=0;
    int low=0,high=m;
   do{

        if(key>=a[low]&&key<a[high]){
            for(int i=low;i<=high;i++){
                if(key==a[i])
                    cout<<"key found at index"<<i<<endl;
            }
        }

        else if(high>(n-1)){
            for(int i=low;i<=n;i++){
                if(key==a[i])
                    cout<<"key found at index"<<i<<endl;
            }
        }

        if(key>a[low]&&key>a[high]){
            low=high;
            high=high+m;
        }

        jump++;
    }while(key>=a[low]&&key<=a[high]);
    if(jump==0)
        cout<<"Key not found in array";


}

int main(){
    int n,key,i,t;
    cout<<"Enter the number of test cases:";
    cin>>t;
    while(t){
        cout<<"Enter the number of elements in array: ";
        cin>>n;

        int a[n];

        cout<<"Enter the key :";
        cin>>key;

        cout<<"Enter the elements of array: ";

        for(i=0;i<n;i++){
            cout<<"Value of a["<<i<<"]:";
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<"Sorted array is:";
        for(i=0;i<n;i++){
            cout<<a[i];
        }
        jumpsearch(a,n,key);

        t--;
    }
    return 0;
}
