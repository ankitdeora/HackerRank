#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void swap(char*,char*);
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		char* str = new char[101]();
		cin.clear();
		cin>>str;
		//cout<<str<<endl;
		
		int length = strlen(str);
		
		int i = length-1;
		while(str[i-1]>=str[i]) 
		{
			i--;
			if(i<=0) break;
		}

		if(i==0)
		{
			cout<<"no answer"<<endl;	
		} 
		else
		{
			char current = str[i-1];
			int j;
			sort(str+i-1, str+length);
			for (j = i-1; j < length; j++)
			{
				if(str[j]>current) break;
			}
			swap(&str[j],&str[i-1]);
			sort(str+i,str+j+1);
			cout<<str<<endl;
		}
		
	}
	return 0;
}

void swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}