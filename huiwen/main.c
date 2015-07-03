#include<iostream>
#include<vector>
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
	//cout<<"length"<<bit.size()<<endl;
	for(f=0,b=bit.size()-1;f<=b;f++,b--)
	{
		if(bit[b]!=bit[f])
		{
			vector<int>(bit).swap(bit);
			return false;
		}
	}
	vector<int>(bit).swap(bit);
	return true;
}

int main()
{
	int left,right,i,sum;
	cin>>left>>right;
	sum =0;
	for(i=left;i<=right;i++)
	{
		if(check(i))
			sum++;
	}
	cout<<sum<<endl;
	
		

}