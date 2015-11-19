#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char sentence[1000];
	cin.get(sentence,999);
	//cout<<strlen(sentence)<<endl;
	
	bool flag[26] = {false};
	
	int index=0;
	while(sentence[index]!='\0')
	{
		char current = sentence[index];
		if((current>='a')&&(current<='z'))
		{
			int i = current - 'a';
			if(!flag[i]) flag[i]=true;
		} 
		else if((current>='A')&&(current<='Z'))
		{
			int j = current - 'A';
			if(!flag[j]) flag[j]=true;
		}
		index++;
	}
	
	bool success = true;
	for(int i=0;i<26;i++) success = success&&flag[i];
	
	if(success) cout<<"pangram"<<endl;
	else cout<<"not pangram"<<endl;
	
	return 0;
}
