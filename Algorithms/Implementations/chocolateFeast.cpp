#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,c,m;
		cin>>n>>c>>m;

		n = n/c;
		int w=0;
		int count = n;

		while(!(n==0))
		{
			int sum = n+w;
			n = sum/m;
			w = sum%m;
			count+=n;
			
		}
		cout<<count<<endl;
	}
	return 0;
}