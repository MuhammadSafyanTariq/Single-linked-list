#include<iostream>
using namespace std;


struct Node{
int data;
struct Node *next;
};


//Traverse


void traverse(struct Node *ptr) {

while(ptr!=NULL) {
cout<<ptr->data<<endl;
ptr=ptr->next;
}
cout<<"finish"<<endl;
}



//insertion


struct Node* insertAtBegin(struct Node* head, int data) {
struct Node * ptr;
ptr=(struct Node*) malloc(sizeof(struct Node)) ;
ptr->next=head;
ptr->data=data;

return ptr;
}


struct Node* insertAtIndex(struct Node* head, int data, int index) {

struct Node * ptr;
ptr=(struct Node*) malloc(sizeof(struct Node)) ;
struct Node * p=head;
int i=0;
while(i!=index- 1){
p=p->next;
i++;

}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return head;
}


void insertAtLast(struct Node* head, int data) {
struct Node * p=head;
struct Node * ptr;
ptr=(struct Node*) malloc(sizeof(struct Node)) ;
while(p->next != NULL) {
p=p->next;
}
p->next=ptr;
ptr->next=NULL;
ptr->data=data;


}


void insertAtAdd(struct Node * head, struct Node * adr,int data) {
struct Node * p=head;
struct Node * ptr;
ptr=(struct Node*) malloc(sizeof(struct Node*)) ;
ptr->next=adr->next;
adr->next=ptr;
ptr->data=data;
}






//deletion


struct Node * deleteAtFirst(struct Node * head) {

struct Node * ptr=head;

head=head->next;

free(ptr) ;

return head;

}



void deleteAtIndex(struct Node * head, int index) {
struct Node * p=head;
struct Node * q=head->next;
int i=0;
while(i<index-1) {
p=p->next;
q=q->next;
i++;
}
p->next=q->next;
free(q) ;
}

void deleteAtLast(struct Node * head) {
struct Node * p=head;
struct Node * q=head->next;
while(q->next != NULL) {
p=p->next;
q=q->next;
}
p->next=NULL;

free(q) ;
}





int main ()
{


struct Node * head;
struct Node * second;
struct Node * third;
struct Node * ptr;

//creating Nodes
head=(struct Node*) malloc(sizeof(struct Node)) ;
second=(struct Node*) malloc(sizeof(struct Node)) ;
third=(struct Node*) malloc(sizeof(struct Node)) ;

//linking nodes

head->data=7;
head->next=second;
second->data=11;
second->next=third;
third->data=777;
third->next=NULL;
  traverse(head) ;

//here you can call all the functions


return 0;
} 