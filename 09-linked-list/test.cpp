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

Node *insert()
{
  int data;
  cin >> data;

  Node *head = NULL;
  Node *tail = NULL;

  while (data != -1)
  {
    Node *newNode = new Node(data);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = tail->next;
    }
    cin >> data;
  }

  return head;
}


void traverse(Node *head) {
  Node *temp = head;
  while(temp) {
    cout << temp->data << "->";
    temp = temp->next;
  }

  cout << "NULL\n";
}

Node *deleteNode(Node *head, int pos) {
  Node *temp = head;
  int idx = 0;

  while(idx < pos && temp) {
    temp = temp->next;
    idx++;
  }

  if(temp) {
    Node *nextNode = temp->next;
    temp->data = nextNode->data;
    temp->next = nextNode->next;
  }

  return head;
}

int main(int argc, char const *argv[])
{
  /* code */
  Node *newNode = insert();
  traverse(newNode);
  Node *updatedNode = deleteNode(newNode, 2);
  traverse(updatedNode);
  return 0;
}
