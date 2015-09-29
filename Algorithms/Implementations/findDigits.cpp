#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n;
		m=n;
		int arr[11] = {0};

		int i=0;
		while(n!=0)
		{
			int Rem = n%10;
			arr[i] = Rem;
			n=n/10;
			i++;
			//cout<<Rem<<",";
		}
		//cout<<endl<<i<<endl;

		int size = i;
		int count = 0;
		for(int j=0;j<size;j++)
		{
			
			if(arr[j]==0) continue;
			if(m%arr[j]==0) count++;
		}
		
		cout<<count<<endl;
	}
	return 0;
}