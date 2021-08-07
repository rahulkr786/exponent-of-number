#include<iostream>
using namespace std;
double pow(double m,double n)
{
    if(n==0)
    return 1;
    return pow(m,n-1)*m;
}
int main()
{
    double x,y;
    cout<<"enter base:";
    cin>>x;
    cout<<"enter power:";
    cin>>y;
    
    cout<<x<<"^"<<y<<"="<<pow(x,y);
    return 0;
}