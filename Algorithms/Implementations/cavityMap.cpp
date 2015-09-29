#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	char *arr = new char[n*n];//();
	//char ch;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			//cin>>ch;
			//*(arr+i*n+j) = ch-'0';
			cin>>*(arr+i*n+j);
		}

	bool up,down,left,right;

	for(int p=1;p<n-1;p++)
	{
		for(int q=1;q<n-1;q++)
		{
			up = (*(arr+p*n+q)>*(arr+(p-1)*n+q));
			down = (*(arr+p*n+q)>*(arr+(p+1)*n+q));
			left = (*(arr+p*n+q)>*(arr+p*n+q-1));
			right = (*(arr+p*n+q)>*(arr+p*n+q+1));

			if((up&&down)&&(left&&right)) 
			{
				*(arr+p*n+q) = 'X';
			}
		}
	}

	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			cout<<*(arr+x*n+y);
		}
		cout<<endl;
	}

		
	return 0;
}