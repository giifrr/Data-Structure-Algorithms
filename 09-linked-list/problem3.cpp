/*
  reversed linked list
*/
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

Node *insertLinkedList()
{
  int data;
  cin >> data;

  Node *head = NULL;
  Node *tail = NULL;

  while (data != -1)
  {
    Node *node = new Node(data);

    if (head == NULL)
    {
      head = node;
      tail = node;
    }
    else
    {
      tail->next = node;
      tail = node;
    }
    cin >> data;
  }

  return head;
}

Node *reverse(Node *head)
{

  Node *curr = head;
  Node *prev = NULL;
  while (curr != NULL)
  {
    Node *temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }

  return prev;
}

void traverse(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }

  cout << "NULL\n";
}

int main()
{
  Node *node = insertLinkedList();
  Node *newNode = reverse(node);
  Node *newNode2 = node;
  traverse();
}
