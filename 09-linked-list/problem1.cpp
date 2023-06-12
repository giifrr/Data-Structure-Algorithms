/*
  terdapat sebuah data array lalu tentukan apakah element array tersebut berada di linkedList
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

bool isNodePresent(Node *head, int data)
{
  Node *temp = head;
  while (temp != NULL)
  {
    int val = temp->data;
    temp = temp->next;
    if (val == data)
      return true;
  }
  return false;
}

vector<bool>
isPresent(Node *node, vector<int> &data)
{
  vector<bool> result;
  for (auto &&v : data)
  {
    bool temp = isNodePresent(node, v);
    result.push_back(temp);
  }

  return result;
}

int main()
{
  Node *ll = insertLinkedList();
  vector<bool> res;
  cout << "hello world";

  int value, n;
  cout << "Enter size of array: \n";
  cin >> n;
  cout << "Enter Array: \n";
  vector<int> data;
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    data.push_back(value);
  }
  res = isPresent(ll, data);
  for (auto &&i : res)
  {
    cout << i << " ";
  }
}
