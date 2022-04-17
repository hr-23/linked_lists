// om namah shivaya
// om namo venkateshaya
// om shri amtre namaha 
#include<bits/stdc++.h>
using namespace std;
// detecting a loop in the linked list 
// to  check whether a linked list have a loop or not 
// loop is nothig but if there should no null pointer 
// the  end of the list will again point to any of the node present in the linked list 
// so one method will be to traverse through the linked lists and store all the addresses in the hash table ,if the address value encountered is null then return false else if the encountered address is already present in the hash then return true;

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
bool is_loop_present()
{
    unordered_set<node*>s;
    node* n=head;
    while(n!=NULL)
    {
        if(s.find(n)!=s.end())return true;
        s.insert(n);n=n->next;
    }
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
    if(is_loop_present())cout<<"present\n";
    else cout<<"NOT present\n";


}
