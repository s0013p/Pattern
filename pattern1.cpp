/*      * * * *
        * * * *
        * * * *
        * * * *
 */


#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;
    cout<<"Enter the no. of rows :";
    cin>>r;
    cout<<"Enter the no. of columns :";
    cin>>c;

    int A[r][c];

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
    
 return 0;   
    
}