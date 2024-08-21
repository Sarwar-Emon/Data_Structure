#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int get_size(Node* head) {
    Node* tmp = head;
    int cnt = 0;
    while (tmp != NULL) {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}

void print_normal(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int find_middle_node(Node* head) {
    if (head == NULL)
        return -1; // Return -1 if list is empty

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->val;
}

void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}

int main() {
    Node* head = NULL;
    int v;
    while (true) {
        cin >> v;
        if (v == -1) {
            break;
        }
        insert_at_tail(head, v);
    }

    int middle = find_middle_node(head);
    if (middle != -1) {
        cout << "Middle element is: " << middle << endl;
    } else {
        cout << "Middle not found." << endl;
    }

    return 0;
}
