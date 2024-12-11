#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter number : ";
    cin>>a;
     for(b=1;b<a;b++)
        if(b%2==0)
        cout<<b<<"\t";
    return 0;
}
