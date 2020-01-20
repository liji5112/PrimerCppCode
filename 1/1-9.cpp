#include<iostream>
int main()
{
    int v=50;
    int result=0;
    while(v<=100)
    {
        result+=v++;
    }
    std::cout<<result<<std::endl;
    return 0;
}