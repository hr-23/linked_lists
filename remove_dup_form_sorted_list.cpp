
// om namah shivaya 
// om shri matre naamha
// om namo marayanaya
#include<bits/stdc++.h>
class node{
public:
    int data;
    node* next;
};
node* head;
void insert_at_front(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
  int n;cin>>n;
   while(n--)
   {
      int x;cin>>x;
      insert_at_front(x);
   }
 node* curr=head;
 while(curr)
 {
    while(curr->next && curr->data==curr->next->data)
        curr->next=curr->next->next;
    curr=curr->next;
 }
 node* x=head;
while(x)
{
    cout<<x->data<<" ";x=x->next;
}
}
