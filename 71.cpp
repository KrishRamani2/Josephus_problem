#include <iostream>
using namespace std;
int Jos(int n,int k)
{
    if(n==1)
    return 0;
    else
    return (Jos(n-1,k)+k)%n;
}
int main()
{
    int n = 3;
    int k= 2;
    cout<<Jos(n,k);
    return 0;
}