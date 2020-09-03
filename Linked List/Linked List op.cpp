#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
struct LinkedList{
    Node* head;
    LinkedList()
    {
        head = NULL;
    }
    Node *reverse(Node *head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        Node *rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }
   
    void print()
    {
        Node *temp = head;
        while(temp!=NULL)
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
    void duplicate(Node *head)
    {
        unordered_set<int> seen;
        Node *curr = head;
        Node *prev = NULL;
        while(curr != NULL)
        {
            if(seen.find(curr->data) != seen.end())
            {
                prev->next = curr->next;
                delete(curr);
            }
            else
            {
                seen.insert(curr->data);
                prev = curr;
            }
            curr = prev->next;
        }
    }

    void getIntersection(Node *head1, Node *head2)
    {
        unordered_set<int> set;
        Node *l1_ele = head1, *l2_ele = head2;

        LinkedList result;

        while(l1_ele != NULL)
        {
            set.insert(l1_ele->data);
            l1_ele = l1_ele->next;
        }

        while(l2_ele != NULL)
        {
            if(set.find(l2_ele->data) != set.end())
                result.push(l2_ele->data);
            l2_ele = l2_ele->next;
        }
        result.print();
        cout << endl;
        return;
    }
    void getUnion(Node *head1, Node *head2)
    {
        unordered_set<int> set;
        Node *l1_ele = head1, *l2_ele = head2;
        LinkedList result;
        while (l1_ele != NULL)
        {
            if (set.find(l1_ele->data) == set.end())
                result.push(l1_ele->data);
            l1_ele = l1_ele->next;
        }
        while (l2_ele != NULL)
        {
            if (set.find(l2_ele->data) == set.end())
                result.push(l2_ele->data);
            l2_ele = l2_ele->next;
        }
        result.duplicate(result.head);
        result.print();
        return;
    }

};
int main()
{
    #ifndef ONLINE_JUDGE
        //for getting input from input.txt
        freopen("input.txt", "r", stdin);
        //for writting output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    LinkedList l1, l2;
    int n, m, ele;
    cin >> n >> m;
    for(int i= 0; i<n; i++)
    {
        cin >> ele;
        l1.push(ele);
    }
    for(int j = 0; j < m; j++)
    {
        cin >> ele;
        l2.push(ele);
    }
    l1.getIntersection(l1.head, l2.head);
    l1.getUnion(l1.head, l2.head);
    return 0;
}