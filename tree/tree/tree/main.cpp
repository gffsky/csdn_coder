#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node * left;
	struct node * right;
	
}tnode,* ptnode;

ptnode create_tree(void)
{
	int buff;
	ptnode t;
	cin>>buff;
	if(buff==-1)
		return NULL;
	else
	{
		t=(ptnode)malloc(sizeof(tnode));
		t->data=buff;
		t->left=create_tree();
		t->right=create_tree();
	}
		return t;
}

bool init_tree(ptnode &rot)
{
	cout<<"please input data;middle seek"<<endl;
	rot=create_tree();
	if(rot==NULL)
		return false;
	else
		return true;
}

void display_node(ptnode nod)
{
	if(nod==NULL)
		;
	else
	{
		cout<<nod->data<<'\t';
		display_node(nod->left);
		display_node(nod->right);
	}
}
void seek_tree(ptnode rot)
{
	display_node(rot);
}

void const_tree(ptnode &ct)
{
	ptnode a1;
	ct=(ptnode)malloc(sizeof(tnode));
	if(ct==NULL)
		cout<<"malloc error"<<endl;
	ct->data=1;
	ct->left=NULL;
	ct->right=(ptnode)malloc(sizeof(tnode));
	a1=ct->right;
	a1->data=2;
	a1->right=NULL;
	a1->left=(ptnode)malloc(sizeof(tnode));
	a1=a1->left;
	a1->data=4;
	a1->left=NULL;
	a1->right=NULL;


}
int main()
{
	ptnode root=NULL;
	char t;
	cin>>t;
	cout<<"t= "<<t<<endl;
	if(!(init_tree(root)))
	{
		cout<<"creat error"<<endl;
		return -1;
	}

//	const_tree(root);
	if(root==NULL)
		cout<<"const_tree error"<<endl;
	seek_tree(root);
	while(1);
	return 0;
}