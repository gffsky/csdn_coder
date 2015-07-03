#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i;
	string p[3];
	//char * p[3];
	for(i=0;i<3;i++)
	{
		cin>>p[i];
	}
	for(i=0;i<3;i++)
	{
		cout<<p[i]<<endl;
		printf("%p\n",&p[i]);
	}

}