#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	char msg[82];
	cin>>msg;
	int msg_len = strlen(msg);
	
	int R,C;
	float sq_root = sqrt(msg_len);
	R = floor(sq_root);
	C = ceil(sq_root);
	
	if(msg_len>R*C) R=C;
	//cout<<R<<","<<C<<endl;
	
	for(int j=0;j<C;j++)
	{
		for(int i=0;i<R;i++)
		{
			int index = i*C + j;
			if(index<msg_len) cout<<msg[index];
			  
		}
		cout<<" ";
	}
	
	return 0;
}
