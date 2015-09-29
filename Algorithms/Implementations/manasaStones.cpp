#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,a,b;
		cin>>n;
		cin>>a;
		cin>>b;

		int a_count = n-1;
		int b_count = 0;

		bool *flags =  new bool[1000000]();

		list<int> ResultArr;

		for(int i=0;i<n;i++)
		{
			int result = a*a_count+b*b_count;
			if(!flags[result])
			{
				flags[result] = true;
				ResultArr.push_back(result);
			}
			a_count--;
			b_count++;
		}

		ResultArr.sort();
		int length = ResultArr.size();
		for(int i=0;i<length;i++)
		{
			cout<<ResultArr.front()<<" ";
			ResultArr.pop_front();
		}
		cout<<endl;
	}
	return 0;
}