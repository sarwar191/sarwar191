//cse-19-37
#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
void create(node** head,int value){
	node* newnode=new node();
	newnode->data=value;
	newnode->next=(*head);
	(*head)=newnode;
}
int counter(struct node* start,int item){
	node* curr=start;
	int count=0;
	while(curr!=NULL){
		if(curr->data==item){
			count++;
		}
		curr=curr->next;
	}
	return count;
} 
int main(){
	node* start=NULL;
	create(&start,34);
	create(&start,34);
	create(&start,68);
	create(&start,68);
	cout<<"Frequency of 34 is:"<<counter(start,34);
	cout<<endl;
	cout<<"Frequency of 68 is:"<<counter(start,68);
	counter(start,68);
	return 0;
	
}
