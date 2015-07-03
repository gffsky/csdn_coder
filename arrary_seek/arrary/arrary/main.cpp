//#include<fstream>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{

	//freopen("test.txt","r",stdin);
	vector <int> a,b;
	int num,i,buff,resu;
	resu=0;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>buff;
		a.push_back(buff);
	}
	sort(a.begin(),a.end());
		
/*	for(i=0;i<num;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	*/
	for(i=1;i<num;i++)
	{
		resu+=a[i]-a[i-1];
	}
	cout<<resu<<endl;
	//while(1);


}