// om namah shivaya
// om namo venkateshaya
// om shri amtre namaha 
#include<bits/stdc++.h>
using namespace std;
// finding the size of the linked list using recursive and iterative approach 
// iterative way is same as printing the linked list ,just add a variable and increment it 
// below is the implementation for recursive way 
class node{
public:
    int data;
    node* next;
};
node* head; // initailizing global head with null 

// recursive  way 
int find_size(node* n)
{
    if(n==NULL)return 0;
    return 1+find_size(n->next);
}
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
  cout<<find_size(head)<<"\n";

}
