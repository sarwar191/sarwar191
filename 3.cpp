
//cse-19-37
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int create()
{
	int n,i;
	cout<<"Enter the number of nodes:";
	cin>>n;
	cout<<endl;
	node *temp,*tail;
	for(i=0;i<n;i++)
	{
		temp=new node();
		cout<<"enter data"<<i+1<<":";
		cin>>temp->data;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;	
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	
	}
	temp->next=NULL;
}
void display(struct node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
	
}
void oddno(struct node *p)
{
	cout<<"\n Odd numbers in the list are :";
	while(p!=NULL)
	{
		if(p->data%2==1)
		{
			cout<<p->data<<" ";
		
		}
		p=p->next;
	}
}
int main()
{
	create();
	cout<<"\n Original list:";
	display(head);
	oddno(head);
	cout<<endl;
	return 0;
}
