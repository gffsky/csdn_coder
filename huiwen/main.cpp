#include<iostream>
#include<vector>
using namespace std;


bool check(int data)
{
	vector <int> bit;
	int f,b;
	if(data>0)
	{
		bit.push_back(data%10);
		data=data/10;
	}
	for(f=0,b=bit.size()-1;f<=b;f++,b--)
	{
		if(bit[b]!=bit[f])
			return false;
	}
	return ture;
}

int main()
{
	int left,right;
	cin>>left;
	if(check(left))
		cout<<"yes"<<endl;
	else	
		cout<<"no"<<endl;

}