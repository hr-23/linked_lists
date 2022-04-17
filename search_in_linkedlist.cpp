// om namah shivaya
// om namo venkateshaya
// om shri amtre namaha 
#include<bits/stdc++.h>
using namespace std;
// searching an element in a linked list using recursive and iterative way
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
void insert_front(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
bool is_present(int x)// iterative way 
{
    node* n=head;
    while(n!=NULL)
    {
        if(n->data==x)return true;n=n->next;
    }
    return false;
}
bool is_present_rec(int x,node* n) // recursive way 
{
    if(n->data==x)return true;
     is_present_rec(x,n->next);
     return false;
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

  if(is_present(0))cout<<"present\n";
  else cout<<"not present\n";
  if(is_present_rec(5,head))cout<<"is present by rec\n";
  else cout<<"not present by rec\n";

}
