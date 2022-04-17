// om namah shivaya
// om namo venkateshaya
// om shri amtre namaha 
#include<bits/stdc++.h>
using namespace std;
// printing the middle of the linked list 
// this  problem have three methods of solving 
// the first one is the standard method in which we will traverse through the linkedksit and then find the size of the llinked list and then traverse again and print the middle value after finding the size 
// the second method  would be to have tow pointers one fast one and one slow pointer such that the slow pointer will move as usual by one and the fast pointer will move by two values 
// third method is to have pointer mid pointing to the had and counter c initialized to 0, as you traverse keep incerasing the counter and id the counter is odd them move the mid , so this way the linked list will travel only to the half and thus its the middle of the linked list  
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
int find_size()
{
    int c=0;
    node* n=head;
    while(n!=NULL)
    {
        c++;n=n->next;
    }
    return c;
}
void middle_element_standard(int n)
{
  node* x=head;
  for(int i=0;i<n;i++)
  {
    x=x->next;
  }
  cout<<x->data<<"\n";
}
void middle_element_pointer()
{
    node* slow=head;
    node* fast=head;
    if(head!=NULL)
    {
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
      cout<<slow->data<<"\n";
    }
}
void middle_element_pointer_counter()
{
    node* n=head;
    int c=0;
    node* mid=head;
    while(n!=NULL)
    {
        n=n->next;
        c++;
        if(c%2==0)
            mid=mid->next;
    }
    cout<<mid->data<<"\n";
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

  int k=find_size();
  if(k%2==0)k=(k/2)+1;
  else k=k/2;

  middle_element_standard(k);
  middle_element_pointer();
  middle_element_pointer_counter();

}
