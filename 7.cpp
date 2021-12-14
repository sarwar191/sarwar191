//cse-19-37
#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
void createnode(node** head,int value){
	node* newnode=new node;
	newnode->data=value;
	newnode->next=(*head);
	(*head)=newnode;
}
void deletion(node** head,int a){
	node* temp=*head,*prev;
	while(temp!=NULL && temp->data==a){
		*head=temp->next;
		free(temp);
		temp=*head;
		
	}
	while(temp!=NULL){
		while(temp!=NULL && temp->data!=a){
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL){
			return;
		}
		prev->next=temp->next;
		free(temp);
		temp=prev->next;
	}
}
void display(node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
	
}
int main(){
	node* head=NULL;
	createnode(&head,67);
	createnode(&head,12);
	createnode(&head,12);
	createnode(&head,11);
	cout<<"Linked list before deletion:";
	display(head);
	cout<<endl;
	deletion(&head,12);
	cout<<"Linked list after deletion:";
	display(head);
	
	return 0;
	
	
}
