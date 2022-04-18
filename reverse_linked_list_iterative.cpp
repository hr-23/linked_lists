// om namah shivaya
// om namo narayanaya
// om shri matre namaha
#include<bits/stdc++.h>
using namespace std;
class node{
public:
     int data;
     node* next;
};
node* head;
void insert(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print()
{
    node* n=head;
    while(n!=NULL)
    {
        cout<<n->data<<" ";n=n->next;
    }cout<<"\n";
}
void reverse_linked_List(node* head)
{
    // iniitialize three pointers curr,prev and next 
    node* curr=head;
    node* prev=NULL;
    node* next=NULL;
    while(curr!=NULL)
    {
        // store next;
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   ios::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
  // reversing a linked list using iterative and recursive approach 
   // here we will be looking at the iterative approach 
   // traversing the each node of the linked list we will have to traverse each node and adjust the links such that they are pointintg to the previous node 

    int n;cin>>n;
    while(n--)
    {
        int x;cin>>x;insert(x);
    }
    print();
    reverse_linked_List(head);
    print();
}
