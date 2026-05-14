#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a 3 digit number";
    cin>>num;
    int x=num;
    int sum=0;
    while(num!=0)
    {
        int ld=num%10;
        sum = sum + (ld*ld*ld);
        num= num/10;
    }

    if (sum==x)
    {
        cout<<"Yes, its an armstrong number";
    }
    else cout<<"No, it is not an armstrong number";
}
