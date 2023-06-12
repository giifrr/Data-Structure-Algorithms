#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;

  Node(int data)
  {
    this->data = data;
    next = nullptr;
    prev = nullptr;
  }
};

Node *insertPush()
{
  Node *head = nullptr;
  Node *temp = nullptr;
  Node *tail = nullptr;
  int data;
  cin >> data;

  while (data != -1)
  {
    Node *node = new Node(data);

    if (head == nullptr)
    {
      head = node;
      tail = node;
      tail->prev = temp;
    }
    else
    {
      tail->next = node;
      temp = tail;
      tail = node;
      tail->prev = temp;
    }
    cin >> data;
  }

  return head;
  // return tail;
}

Node *insert(Node *head, int data, int pos)
{
  // masih ada bug jika insert data terkahir
  if (pos == 1)
  {
    Node *node = new Node(data);
    node->next = head;
    head = node;
    head->prev = nullptr;
    return head;
  }

  int idx = 0;
  Node *temp = head;
  while (idx < pos - 2 && temp)
  {
    idx++;
    temp = temp->next;
  }

  if (temp->next)
  {
    Node *node = new Node(data);
    node->next = temp->next;
    temp->next->prev = node;
    temp->next = node;
    node->prev = temp;
  }

  return head;
}

void traverse(Node *head)
{
  Node *temp = head;
  while (temp)
  {
    cout << temp->data << "=>";
    temp = temp->next;
  }
  cout << "NULL\n";
}

int main()
{
  Node *node = insertPush();
  traverse(node);
  int data, pos;
  cin >> data >> pos;
  Node *node2 = insert(node, data, pos);
  traverse(node2);
}
