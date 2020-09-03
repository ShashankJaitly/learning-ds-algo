#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
struct LinkedList
{
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    Node *reverse(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        Node *rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    bool detectloop(Node *head)
    {
        Node *slow_ptr = head, *fast_ptr = head;
        while (slow_ptr && fast_ptr && fast_ptr->next)
        {
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
            if (slow_ptr == fast_ptr)
                return true;
        }
        return false;
    }
};
int main()
{
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    ll.head->next->next->next->next = ll.head;
    bool res = ll.detectloop(ll.head);
    cout << boolalpha << res;

    return 0;
}