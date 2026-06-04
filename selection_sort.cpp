#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

void selection_sort(int n ,int arr[]){
    for(int i=0; i<=n-2;i++){
        int mini=i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini])  mini=j;
        }

        swap(arr[mini],arr[i]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(n, arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
