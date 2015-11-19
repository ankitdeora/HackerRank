#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	char str[100001] = {'\0'};
	while(t--)
	{
		cin>>str;
		int length = strlen(str);
		int i=0;
		char current;
		char previous=' ';
		int numDeletions = 0;
		
		while(str[i]!='\0')
		{
			current = str[i];
			if(current==previous) numDeletions++;
			previous = current;
			i++;
		}
		cout<<numDeletions<<endl;
		
	}
	return 0;
}
