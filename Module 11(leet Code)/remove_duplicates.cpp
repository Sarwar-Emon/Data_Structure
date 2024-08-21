#include<iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl<< endl;
}
int get_size(Node* head)
{
  int size=0;
  Node* tmp= head;
  while(tmp!=NULL)
  {
    tmp=tmp->next;
    size++;
  } 
  return size; 
}
int has_duplicates(Node* head)
{
    Node* tmp= head;
    while(tmp->next !=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            tmp->next= tmp->next->next;
        }
        if(tmp->next==NULL) break;
        else if(tmp->val != tmp->next->val)
        {
            tmp= tmp->next;
        }

    }
    return true;
    
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);

    if(has_duplicates(head))
    {
        cout<<"Duplicate Found"<<endl;
    }
    else 
    {
        cout<<"Duplicate Not Found"<<endl;
    }
    return 0;
}
