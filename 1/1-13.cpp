#include<iostream>
using namespace std;
int main()
{
    //1-9
    int result =0;
    for(int i=50;i<=100;i++)
    {
        result+=i;
    }
    cout<<result<<endl;

    //1-10
    for(int i=10;i>=10;i--)
    {
        cout<<i<<endl;
    }

    //1-11
    int v1=0,v2=0;
    cin>>v1>>v2;
    for(int i=v1;i<=v2;i++)
    {
        cout<<i<<endl;
    }

    return 0;
}