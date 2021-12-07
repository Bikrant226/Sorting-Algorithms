#include<iostream>
using namespace std;

int main(){
    int arr[]={20,12,3,81,92};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min,temp;


     cout<<"\nThe array before selection sort is:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int step=0;step<n-1;step++){
        min=step;
        for(int i=step+1;i<n;i++){
            if(arr[min]>arr[i]){
                min=i;
                temp=arr[i];
                arr[i]=arr[step];
                arr[step]=temp;
            }
        }
    }

    cout<<"\nThe array after selection sort is:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}