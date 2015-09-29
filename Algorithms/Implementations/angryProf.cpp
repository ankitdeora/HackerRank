#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;

		int count=0;
		int* arr = new int[n]();
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]<=0) count++;
		}

		if(count<k) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	return 0;
}