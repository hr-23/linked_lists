// om namah shivaya
// om namo venkateshaya
// om shri amtre namaha 
#include<bits/stdc++.h>
using namespace std;
// linked list functions 

// decleration of linked list using class
class node{
public:
    int data;
    node* next;
};
node* head; // initailizing global head with null 

void print() // function to print the elements of the linked list 
{
    node* n=head;
    while(n!=NULL)
    {
        cout<<n->data<<" ";n=n->next;
    }cout<<"\n";
}
// function to insert the elements at the beginnig of the linked list 
void insert_front(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
// function to insert data at a particular position of the linked list 
void inseet_at_position(int n,int data)
{
     node* temp1=new node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1)
    {
        insert_front(data);
        return;
    }
    node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
// function to delete a element at the front of the linked list 
void delete_at_front()
{
    node* temp=head;
    head=temp->next;
}
//  delete at end 
void delete_at_end()
{
    node* temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;
    temp->next=NULL;
}
// insert at end 
void inseert_at_end(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;
    node* n=head;
    while(n->next!=NULL)
        n=n->next;
    n->next=temp;
}
// delete at a particular point
void delete_from_pos(int n)
{
    if(n==1)
    {
        delete_at_front();return;
    }
    node* temp1=head;
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->next;
    }
    node* temp2=temp1->next;
    temp1->next=temp2->next;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;cin>>n;
    while(n--)
    {
      int x;cin>>x;
      insert_front(x);
    }
    inseet_at_position(1,-1);
    print();
    delete_at_front();
    print();
    delete_at_end();print();
    inseert_at_end(0);
    print();
    delete_from_pos(3);print();
}
