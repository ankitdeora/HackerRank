#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;

	int* arr = new int[n]();
	for(int i=0;i<n;i++)
		cin>>arr[i];

	while(t--)
	{
		int i,j;
		cin>>i>>j;

		int min = arr[i];
		for(int p=i;p<=j;p++)
			if(arr[p]<min) min = arr[p];
		
		if(min>3) cout<<"3"<<endl;
		else cout<<min<<endl;
	}

	return 0;
}