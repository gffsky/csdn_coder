#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector <int> v;
	vector <int> v_b;
	int i;
	int offset;
	int buff;
	freopen("test.txt","r",stdin);
	i=1;
	while(cin>>buff)
	{
		if(buff==i)
		{
			sort(v.begin(),v.end());
			//i++;
			//break;
			continue;
		}
		else
		{
			
			v.push_back(buff);
		}
		




	}
	for(i=0;i<v.size();i++)
	{
		//if(s[i]=='3')
		cout<<v[i]<<" ";
	}
	
	while(1);
	return 0;

}