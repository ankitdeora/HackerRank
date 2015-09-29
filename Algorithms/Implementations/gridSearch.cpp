#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t;
	cin>>t;

	
	while(t--)
	{
		int grid_numRows,grid_numCols;
		cin>>grid_numRows>>grid_numCols;
		char** grid = new char*[grid_numRows];		
		for(int i=0;i<grid_numRows;i++)
				grid[i] = new char[grid_numCols+1];

		for(int p=0;p<grid_numRows;p++)
			for(int q=0;q<grid_numCols;q++)
				cin>>grid[p][q];

		int pattern_numRows,pattern_numCols;
		cin>>pattern_numRows>>pattern_numCols;
		char** pattern = new char*[pattern_numRows];
		for(int i=0;i<pattern_numRows;i++)
				pattern[i] = new char[pattern_numCols+1];

		for(int p=0;p<pattern_numRows;p++)
			for(int q=0;q<pattern_numCols;q++)
				cin>>pattern[p][q];

		int matching_R=-1;
		int matching_C=-1;
		bool flag = false;

		for(int i=0;i<grid_numRows;i++)
		{
			char* ret = strstr(grid[i],pattern[0]);
			if(ret!=NULL)
			{
				matching_R = i;
				matching_C = (ret - grid[i])/sizeof(char);
				//cout<<"R,C:"<<matching_R<<" "<<matching_C<<endl;
				if(matching_R<=(grid_numRows-pattern_numRows)) 
				{
					int r=1;
					while(r<pattern_numRows)
					{
						matching_R++;
						char* retptr = strstr(grid[matching_R],pattern[r]);
						if(retptr!=NULL)
						{
							int new_matching_C = (retptr - grid[matching_R])/sizeof(char);
							if(new_matching_C!=matching_C) break;	
						}
						else break;
						r++;
					}
					if(r==pattern_numRows)
					{
						flag = true;
						cout<<"YES"<<endl;
						break;	
					}
				}
				//else cout<<"out of range"<<endl;
			}
			
		}
		if(!flag) cout<<"NO"<<endl;	
	}
	
   return 0;
}