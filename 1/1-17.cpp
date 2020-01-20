#include<iostream>
using namespace std;
int main()
{
    int currVal =0, val = 0;
    if(cin>>currVal)
    {
        int cnt = 1;
        while(std::cin>>val)
        {
            if(val == currVal)
            {
                ++cnt;
            }
            else
            {
                cout<<currVal<<"occurs"<<cnt<<"time"<<std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout<<currVal<<"occurs"<<cnt<<"times"<<std::endl;
    }
    return 0;
}