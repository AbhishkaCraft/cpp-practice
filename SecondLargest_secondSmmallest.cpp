#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int slargest(vector<int> &a, int n){
    int largest=a[0];
    int slargest= -1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
             slargest=largest;
            largest=a[i];
           
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest= a[i];
        }
    }
    return slargest;
}

int ssmallest(vector<int> &a, int n){
    int smallest=a[0];
    int ssmallest= INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
          
            ssmallest=smallest;
             smallest=a[i];
        }
        else if(a[i]>smallest && a[i]<ssmallest){
           ssmallest= a[i];
        }
    }
    return ssmallest;
}

int main()
{
    int n;
    cin>>n;

    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }


    cout << "Second Largest: " << slargest(a,n) << endl;
    cout << "Second Smallest: " << ssmallest(a,n);
   
}
