#include <bits/stdc++.h>
using namespace std;

double findNumber(int* a,int index,double result)
{
	if(index<0) return result;
	else
	{
		double temp = a[index] + (1/result);
		return findNumber(a,index-1,temp);
	}
	
}

list<int> findQuotients(double result, list<int> PQ)
{
	int clippedResult = floor(result);
	double fraction = result - clippedResult; 
	if(fraction>0.99999)
	{
		fraction = 0;
		clippedResult++;
	}
	PQ.push_back(clippedResult);	
	cout<<clippedResult<<" ";
	//cout<<"f:"<<fraction<<endl;
	if(fraction<0.0000001) 
	{
		cout<<endl;
		return PQ;
	}
	else return findQuotients(1/fraction,PQ);

}

int main(int argc, char const *argv[])
{
	int i=1;
	string str;

	while(getline(cin,str))
	{

		stringstream iss(str);
		string str1,str2;
		iss >> str1 >> str2;
		int n1 =  atoi(str1.c_str());
		int n2 = atoi(str2.c_str());

		int* arr1 = new int[n1];
		int* arr2 = new int[n2];

		for(int ii=0;ii<n1;ii++) cin>>arr1[ii];
		for(int j=0;j<n2;j++) cin>>arr2[j];

		cout<<"Case "<<i<<":"<<endl;
		i++;

		double r1,r2;
		r1 = findNumber(arr1,n1-2,arr1[n1-1]);
		r2 = findNumber(arr2,n2-2,arr2[n2-1]);
		//cout<<r1<<endl;
		//cout<<r2<<endl;
		double sumRes,diffRes,mulRes,divRes;
		sumRes = r1+r2;
		diffRes = r1-r2;
		mulRes = r1*r2;
		divRes = r1/r2;

		list<int> Q1,Q2,Q3,Q4;
		Q1 = findQuotients(sumRes,Q1);
		Q2 = findQuotients(diffRes,Q2);
		Q3 = findQuotients(mulRes,Q3);
		Q4 = findQuotients(divRes,Q4);
		//break;

	}
	 /*while (getline(cin,sent))   //The test condition is TRUE
     {                                           //Works nicely as an end of file check.
          cout<<sent<<endl;
     }*/
	/*
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int len = n;
	cout<<findNumber(arr,len-2,arr[len-1])<<endl;
	*/
	/*
	double num;
	cin>>num;
	list<int> Quotients,PQ;
	Quotients = findQuotients(num,PQ);
	*/
	return 0;
}