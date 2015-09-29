#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	string str;
	cin>>str;

	int m;
	cin>>m;

	int length = str.length();
	for(int i=0;i<length;i++)
	{
		bool flag1 = (int(str[i])<=int('z'))&&(int(str[i])>=int('a'));
		if(flag1)
		{
			str[i] = 'a' + (str[i]-'a'+m)%('z'-'a'+1);
		}

		bool flag2 = (int(str[i])<=int('Z'))&&(int(str[i])>=int('A'));
		if(flag2)
		{
			str[i] = 'A' + (str[i]-'A'+m)%('Z'-'A'+1);
		}
	}
	cout<<str<<endl;

	return 0;
}
