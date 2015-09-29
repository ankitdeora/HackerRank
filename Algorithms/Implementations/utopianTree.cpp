#include <iostream>

using namespace std;


int lengthAfterNthYear(int);

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	for(int i=0;i<t;i++)
	{
		int cycles;
		cin>>cycles;

		int length = lengthAfterNthYear(cycles/2);

		if(cycles%2!=0) length = 2*length;
		cout<<length<<endl;  
	}
	return 0;
}

int lengthAfterNthYear(int n)
{
	if(n==0) return 1;
	else return (2*lengthAfterNthYear(n-1)+1);
}