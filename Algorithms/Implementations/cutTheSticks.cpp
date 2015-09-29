#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	vector<int> v(n,0);

	for(int i=0;i<n;i++)
		cin>>v[i];

	sort(v.begin(),v.end());

	int i = 0;
	int cdf = n;
	cout<<cdf<<endl;

	while(i<n)
	{
		while(v[i]==v[i+1])
		{
			i++;
			if(i>=(n-1)) break;
		}
		i++;
		cdf = n-i;
		if(cdf) cout<<cdf<<endl; 
	}
	

	return 0;
}