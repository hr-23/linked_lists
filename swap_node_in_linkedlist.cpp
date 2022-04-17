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
void newnode(int x)
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
// swapping two nodes in a linked list  ( swapping kth node from the first and kth node from the last)
int main() 
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;cin>>n;
    while(n--)
    {
        int x;cin>>x;
        newnode(x);
    }
   // print();
      // initialize three pointers left,right and curr to head pointers and c to 1 
    // once try to recall the algorithm 
    int k;cin>>k;
     int c=1;
     node* left=head;
     node* right=head;
     node* curr=head;
     while(curr!=NULL)
     {
         if(c<k)left=left->next;
         if(c>k)right=right->next;
         curr=curr->next;
         c++;
     }
     // now after traversing now swap the values 
     int temp=left->data;
     left->data=right->data;
     right->data=temp;
     print();
   
}
