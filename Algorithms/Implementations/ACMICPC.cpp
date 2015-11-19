#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N,M;
	cin>>N>>M;

	char** arr = new char*[N];
	for(int i=0;i<N;i++)
		arr[i] = new char[M+1];

	for(int p=0;p<N;p++)
		for(int q=0;q<M;q++)
			cin>>arr[p][q];

	int* arrCount = new int[M+1]();

	int maxNonZeroIndex = 0;
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			int oneCount = 0;
			for(int k=0;k<M;k++)
			{
				int a = arr[i][k] - '0';
				int b = arr[j][k] - '0';
				if((a|b)==1) oneCount++;
			}
			arrCount[oneCount]++;
			if(oneCount>maxNonZeroIndex) maxNonZeroIndex = oneCount;
		}
	}

	cout<<maxNonZeroIndex<<endl;
	cout<<arrCount[maxNonZeroIndex]<<endl;
	return 0;
}