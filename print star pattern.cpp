#include<iostream>
using namespace std;


void printLoop1(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0 ;j<=a ;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}




void printLoop2(int b)
{
    for(int i=0;i<b;i++)
    {
        for(int j=0 ;j<=i ;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int a;
    cin>>a;

      int b;
    cin>>b;
    printLoop1(a);

  
    printLoop2(b);

}
