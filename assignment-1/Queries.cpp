#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long val;
    Node *next;
    Node(long long val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, long long val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, long long val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void delete_at_any_pos(Node *&head, Node *&tail, long long idx)
{

    if (head == NULL)
        return;

    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
            tail = NULL;

        return;
    }

    Node *tmp = head;
    for (int i = 1; i < idx && tmp->next != NULL; i++)
    {
        tmp = tmp->next;
    }

    if (tmp->next == NULL)
        return;

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    if (deleteNode == tail)
        tail = tmp;

    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    int q;
    cin >> q;

    // Node *head = new Node(NULL);
    // Node *tail = new Node(NULL);
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < q; i++)
    {
        int x;
        long long v;

        cin >> x >> v;

        if (x == 0)
            insert_at_head(head, tail, v);
        else if (x == 1)
            insert_at_tail(head, tail, v);
        else if (x == 2)
            delete_at_any_pos(head, tail, v);

        print_linked_list(head);
    }

    return 0;
}