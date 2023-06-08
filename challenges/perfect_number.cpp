#include <iostream>

using namespace std;

//creating node
struct node{
  struct node *link;
  int data;
};



//finding perfect number
int perfect_number(int num){
 int i,sum = 0; 
     for(i = 1; i <= num / 2; i++)
    {
        /* If i is a divisor of num */
        if(num%i == 0)
        {
            sum += i;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == num && num > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//inserting data to list
void insert_node(struct node **tail,int data){
  struct node *t = *tail;
  struct node *newNode = new struct node;
//for first node;
  if(t == NULL){
     newNode->link = newNode;
     *tail = newNode;
     newNode->data = data;
  }
  else{
     newNode->link = t->link;
     t->link = newNode;
    *tail = newNode;
    newNode->data = data;
  }
}

//deleting perfect number on list
void delete_perfect_number(struct node **tail){
    struct node *t = *tail;
  struct node *m,*pre;
  if(t == NULL)
     cout<<"List is empty!!";
  else if(perfect_number(t->data)){
    free(t);
    *tail = NULL;
    cout<<"Deleted successfully!";
  }
  else{
  do{
    t = t->link;
     if(perfect_number(t->link->data))
        {
          if(t->link == *tail)
             {
                  *tail = NULL;
                   free(t->link);
                   cout<<"The perfect number has deleted";
                   return;
             }
          t->link = m;
          t->link = t->link->link;
          free(m);
          cout<<"The perfect number has deleted";
          return;
        }
  }while(t->link != m);
  }
}


//display node
void display(struct node *tail){
  struct node *t = tail;
  int i = 0;
  if(tail == NULL)
    cout<<"The list is empty\n";
  else{
  do{
     t = t->link;
     cout<<"->"<<t->data;
     i++;
}while(t != tail);

}
}

int main()
{
struct node *tail = NULL;
  insert_node(&tail,4);
  insert_node(&tail,6);
  insert_node(&tail,2);
  insert_node(&tail,9);
  insert_node(&tail,8);

  delete_perfect_number(&tail);

  display(tail);

    
    return 0;
}