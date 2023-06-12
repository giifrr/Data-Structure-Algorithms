/*
  Delete k'th node from end of the linked list
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

int length(Node *head)
{
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

Node *insertNode()
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

Node *deleteNode(Node *head, int k)
{
  int len = length(head);
  int pos = len - k;
  int curr = 0;
  Node *temp = head;

  if(pos == 0) {
    head = temp->next;
    return head;
  }

  while(curr < pos-1 && temp!=NULL) {
    temp = temp->next;
    curr++;
  }

  if(temp) {
    temp->next = temp->next->next;
  }
  return head;
}

void traverse(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "=>";
    temp = temp->next;
  }

  cout << "NULL\n";
}

int main()
{
  Node *node = insertNode();
  traverse(node);
  int k;
  cin >> k;
  Node *newNode = deleteNode(node, k);
  traverse(newNode);
}
