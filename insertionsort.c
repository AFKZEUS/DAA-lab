#include<stdio.h>

int sort(int a[],int n){
    int i,j,temp=0;

    for(i=1;i<n;i++){
            j=i-1;
           temp=a[i];

            while(j>=0&&temp<a[j]){

                a[j+1]=a[j];
                j--;

            }
            a[j+1]=temp;
    }

    printf("\nSorted array is: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }



}

int main(){
    int n,t,i;
    printf("Enter the number of elemets in array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the value in array\n");

    for(i=0;i<n;i++){
        printf("Value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Array seems like:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    sort(a,n);

    return 0;
}
