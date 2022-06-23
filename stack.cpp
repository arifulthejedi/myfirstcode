#include <iostream>
using namespace std;

//stak on link list
//first in -> last out



struct node{
  struct node *next;
  int data;
};

//inserting
void push(struct node **start,struct node **rear,int data){
  struct node *s = *start;
  struct node *e = *rear;
  struct node *newNode = new struct node;
   if(s == NULL)
      {
         *start =newNode;
         *rear =newNode;
         newNode->data = data;
      }
    else{
    e->next = newNode;
    *rear = newNode;
    newNode->data = data;
    }
}

//deleting
void pop(struct node **start,struct node **rear){
  struct node *s = *start;
  struct node *e = *rear;
 if(*start == NULL)
   cout<<"The stack is Empty\n";
 else if(e == s){
    *start = NULL;
    *rear = NULL;
    free(e);
  cout<<"Deleted successfully\n";
 }
else{
while(s->next != e){
  s = s->next;
}
*rear = s;
free(s->next);
cout<<"Deleted Successfully\n";
}
}

//display
void display(struct node *start,struct node *rear){
  struct node *s = start;
  if(s == NULL)
    cout<<"The stack is empty\n";
  else{
    cout<<"->"<<s->data;
    while(s != rear){
      s = s->next;
      cout<<"->"<<s->data;
    }
  cout<<"\n";
  }
}

//returnning top
int top(int *arr){
  return arr[0];
}

int main() {
  struct node *start = NULL;
  struct node *rear = NULL;
push(&start,&rear,34);
push(&start,&rear,38);
push(&start,&rear,04);
push(&start,&rear,55);
push(&start,&rear,30);
display(start,rear);
pop(&start,&rear);
pop(&start,&rear);
display(start,rear);
} 
