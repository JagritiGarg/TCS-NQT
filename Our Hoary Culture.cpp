/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    int y=0;
    int dis=10;
    char c= 'R';
    
    while(n>0)
    {
        switch(c)
        {
            case 'R':
            x= x+dis;
            c= 'U';
            dis = dis+10;
            break;
            
            case'U':
            y= y+ dis;
            c='L';
            dis= dis+10;
            break;
            
            case 'L':
            x= x-dis;
            c='D';
            dis= dis+10;
            break;
            
            case 'D':
            y= y-dis;
            c= 'R';
            dis= dis+10;
            break;
        }
        n--;
    }
    cout<<x<<" "<<y<<endl;
}
