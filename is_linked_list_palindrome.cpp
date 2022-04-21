// om namah shivaya 
// om namo narayanaya
// om shri matre namaha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // program to check whether linked list is a palidrome or not 
// first divide the linked list into two halves using finding middle element technique 
// then reverse the second half 
    ListNode * fast=head ;
    ListNode* slow=head ;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
fast=slow->next;
slow-<next=NULL;
ListNode nwenode(0);
 ListNode* curr=fast;
 ListNode* next;
 while(curr)
 {
    next=curr->next;
    curr->next=newnode->next;
    newnode->next=curr;
    curr=next;
 }
 fast=newnode.next;
 // now we have reversed the second list now we have to compare each values of the first and the second list 
 while(fast)
 {
    if(fast->val!=head->val)return false;
    head=head->next;
    fast=fast->next;
 }
 return fast==NULL;
 // here we are also handling the edge case of  odd numbrs think how 

}
