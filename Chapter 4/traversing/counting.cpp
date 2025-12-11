#include<iostream>
using namespace std;
int main()
{int n;
    int LA[]={10,25,20,29,50,60,70,12};
    n=sizeof(LA)/sizeof(LA[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(LA[i]>=30)
        count++;
    }
cout<<"Number of element greater than or equal to 30 is: "<<count;
return 0;
}