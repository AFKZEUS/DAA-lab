
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int key){
    int low=0,high=n-1;
    int mid,b=0;
    do{
        mid=(low+high)/2;
        if(a[mid]==key)
            b=mid;
        else if(key<a[mid]){
            high=mid-1;
        }
        else if(key>a[mid]){
            low=mid+1;
        }
    }while(a[mid]!=key&&low<=high);
    if(b>=0)
        return b;
    else
        return -1;
}




int main()
{
    int n,t,key;

    cout<<"Enter the number of cases"<<endl;
    cin>>t;


    while(t){
        cout<<"Enter the number of elements"<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter the elements of array"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]:";
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<"Sorted array is "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\nEnter the key: ";
        cin>>key;
        int b=binarysearch(a,n,key);

        if(b>=0)
        cout<<"Key is present at index:"<< b <<endl;
        else if(b<0)
        cout<<"Key is not present"<<endl;
        t--;
    }
}



