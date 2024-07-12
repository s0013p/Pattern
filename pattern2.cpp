/*      * * * *
        *     *
        *     *
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
            if(i==1 || j==1)
            {
                cout<<" * ";
            }
            else if(i==r || j==c)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }
    
    
 return 0;   
    
}