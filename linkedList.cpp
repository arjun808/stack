#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int n)
    {
        data = n;
        next = NULL;
    }
};
void push(int x, node *&head)
{
    node *m = new node(x);
    m->next = head;
    head = m;
}
void pop(node *&head)
{
    if (head == NULL)
    {
        cout << "underflow" << endl;
    }
    else
    {
        node *todelete = head;
        head = head->next;
        delete todelete;
    }
}
int top(node *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return head->data;
    }
}
int main()
{

    node *head = NULL;
    push(1, head);
    cout << top(head);
    pop(head);
    cout << top(head);
}
// know using stach class also;
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class Stack
{
public:
    Node *head = NULL;
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack got underflow" << endl;
        }
        else
        {
            Node *todelete = head;
            head = head->next;
            delete todelete;
        }
    }
    void Top()
    {
        if (head == NULL)
        {
            cout << "there is no element in an stack";
        }
        else
        {

            cout << head->data << endl;
        }
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.Top();
    st.pop();
    st.Top();
}