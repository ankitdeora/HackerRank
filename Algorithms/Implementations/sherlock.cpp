#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int x,y;

		if(n<3) cout<<"-1"<<endl;
		else
		{
			y = n/3;
			int temp = n - 3*y;
			
			while(temp%5!=0)
			{
				y--;
				if(y<0) break;
				temp = n - 3*y;	
			}

			x=0;
			if(temp%5==0) x = temp/5;
			
			if(y<0) cout<<"-1";
			else
			{
				//cout<<x<<","<<y;
				
				int threeCount=5*x;
				int fiveCount=3*y;
				while(fiveCount--) cout<<"5";
				while(threeCount--) cout<<"3";
				
			}
			cout<<endl;
		}

	}
	return 0;
}