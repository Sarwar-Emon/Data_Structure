#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_tail(Node*& head, Node*& tail, int v)
{
    Node* newNode= new Node(v);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node* tail)
{
    Node* tmp= tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head= NULL;
    Node* tail= NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_tail(head,tail,v);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
} 

    