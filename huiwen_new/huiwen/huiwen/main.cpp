#include<iostream>
#include<vector>
//#include<fstream>
using namespace std;


bool check(int data)
{
	vector <int> bit;
	int f,b;
	while(data>0)
	{
		bit.push_back(data%10);
		data=data/10;
	}
	for(f=0,b=bit.size()-1;f<=b;f++,b--)
	{
		if(bit[b]!=bit[f])
			return false;
	}
	return true;
}

int main()
{
	//freopen("test.txt","r",stdin);


	int left,right,i,num;
	num=0;
	while(cin>>left)
	{
		cin>>right;
		for(i=left;i<=right;i++)
		{
			if(check(i))
				num++;

		}
		cout<<num<<endl;
		num=0;
	}

//	if(check(left))
//		cout<<"yes"<<endl;
//	else	
//		cout<<"no"<<endl;

}