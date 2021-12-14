//cse-19-37
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
}*head,*tail;
void createnode(node** head,int data){
	node* newnode = new node; 
    newnode->data = data; 
    newnode->next = (*head); 
    (*head) = newnode;
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
int  checkprime(int n) 
{  
  if ((n == 2) || (n == 3)){
  	return n;  
  }  
  if(n==1 || n%2==0 || n%3==0){
  	return -1;
  }
  for(int i=5;i*i<=n;i=i+6){
  	if(n%i==0 || n%(i+2)==0){
  		return -1;
	  }
  }
  return n; 
}
void printprime(node** head) 
{ 
  node* ptr = *head; 
  while(ptr!= NULL) {
  	  int p=checkprime(ptr->data);
      if (p!=-1) { 
        cout << p<< " ";
      }
      ptr = ptr->next; 
  }
} 
int main() {
	node* head=NULL;
	createnode(&head,17);
	createnode(&head,135);
	createnode(&head,11);
	createnode(&head,177);
	createnode(&head,31);
	cout<<"Linked list: ";
	display(head);
	cout<<"Prime nodes in the linked list:";
	printprime(&head);
	return 0;
	
	
}
