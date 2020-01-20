#include<iostream>
int main()
{
    int v1=0;
    int v2=0; 
    std::cin>>v1>>v2;
    if(v1<v2)
    {
        while(v1<=v2)
        {
            std::cout<<v1++<<std::endl;
        }
    }
    else
    {
        while(v2<=v1)
        {
            std::cout<<v2++<<std::endl;
        }
    }
    
    return 0;
}