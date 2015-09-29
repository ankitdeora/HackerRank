#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	for(int i=0;i<t;i++)
	{
		string X;
		string U;
		
		cin>>X;
		cin>>U;

		int D,I,R;
		cin>>D>>I>>R;

		int X_arr[26]={0};
		int U_arr[26]={0};

		for(int j=0;j<X.length();j++)
		{
			int index = X[j]-'a';
			X_arr[index]++;
		}

		for(int k=0;k<U.length();k++)
		{
			int index = U[k]-'a';
			U_arr[index]++;
		}

		int diff_arr[26]={0};
		int SumPos = 0;
		int SumNeg = 0;
		for(int p=0;p<26;p++)
		{
			diff_arr[p] = X_arr[p] - U_arr[p];

			if(diff_arr[p]<0) SumNeg+=diff_arr[p];
			else SumPos+=diff_arr[p];
		}

		int R_count = min(abs(SumNeg),abs(SumPos));
		int I_count = 0;
		int D_count = 0;
		if(SumPos+SumNeg>0) D_count = abs(SumNeg+SumPos);
		else I_count = abs(SumPos+SumNeg);

		if(D+I<R) R=D+I;

		int total_cost = R_count*R + D_count*D + I_count*I;
		cout<<total_cost<<endl;

	}
	return 0;
}