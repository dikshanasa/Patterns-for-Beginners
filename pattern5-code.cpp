#include<iostream>
using namespace std;
    
int main()
{
	for(int i=5;i>=0;i--)
	{
	    for(int j=0;j<5;j++)
	    {
		    if(i+j>5-1)
		        cout<<"* ";
		    else
		        cout<<"  ";
	    }
	        
	    cout<<endl;
	}
	    
	return 0;
}
