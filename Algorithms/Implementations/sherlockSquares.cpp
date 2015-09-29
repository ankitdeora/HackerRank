#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int a,b;
		cin>>a>>b;
		
		float c = sqrt(a);
		float d = sqrt(b);

		int count = floor(d) - ceil(c) + 1;
		cout<<count<<endl;
		//cout<<c<<" "<<d<<endl;
	}
	return 0;
}
