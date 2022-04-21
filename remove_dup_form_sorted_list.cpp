// om namah shivaya
// om namo venkateshaya
// om shri matre namaha
#include<bits/stdc++.h>
using namespace std;
int main()
{
   #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
     // remove duplicates form sorted linked list 
    // here just writing the code , refer it once in the leetcode 
    // this is the standard method which checks whether next element is same or not  as only duplicates are possible 
     node* curr=head;
     while(curr)
     {
        while(curr->next && curr->val==curr->next->val)
            curr->next=curr->next->next;
        curr-curr->next;
     }
     return head;
    // another method will be to just collect only the valid nodes 
     // second approah is as follows 
     node* p=head;
     node* q=head-next;
     int pre=head->val
     while(q)
     {
        if(pre!=q->val)
        {
            p->next=q;
            pre=q->val
            p=p->next;
        }
        q=q->next;
     }
    t-next=NULL;
    return head ;
}
