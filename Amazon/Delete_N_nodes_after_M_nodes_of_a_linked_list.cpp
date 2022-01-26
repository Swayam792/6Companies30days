// Question

// Given a linked list, delete N nodes after skipping M nodes of a linked list until the last of the linked list.

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node *curr=head,*prev;
        while(curr!=NULL){
            for(int i=0;i<M && curr!=NULL ;i++){
                prev=curr;
                curr=curr->next;
            }
            for(int i=0;i<N and curr!=NULL;i++){
                curr=curr->next;
            }
            prev->next=curr;
        }
    }
};