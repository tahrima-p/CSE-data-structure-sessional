#include<iostream>
using namespace std;
int main()
{
    int n;
    //automobiles sold each year from 1932 to 1938
    int Auto[]={567,456,321,578,4332,678,564};
    n=sizeof(Auto)/sizeof(Auto[0]);
    int offset=1932;
    for(int i=0;i<n;i++)
    {
        cout<<"Automobile sold in year "<<offset+i<<" is : "<<Auto[i]<<endl;

    }
    return 0;
}