#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		long long unsigned int nB,nW;
		cin>>nB>>nW;

		long long unsigned int b_cost,w_cost,conv_cost;
		cin>>b_cost>>w_cost>>conv_cost;

		if((b_cost+conv_cost)<w_cost) w_cost = b_cost+conv_cost;
		if((w_cost+conv_cost)<b_cost) b_cost = w_cost+conv_cost;

		long long unsigned int result = nB*b_cost+nW*w_cost; 
		cout<<result<<endl;
	}
	return 0;
}