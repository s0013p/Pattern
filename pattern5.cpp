/*
                1  2  3  4  5  6  7  8
                1  2  3  4  5  6  7
                1  2  3  4  5  6
                1  2  3  4  5
                1  2  3  4
                1  2  3
                1  2
                1

*/
#include <iostream>
using namespace std;

int main() 
{
    int n,i,j;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}