#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // create Node
  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

// insert data dengan mengupdate tail dari sebuah node sehingga apabila user telah melakukan insert tail nerada dipaling akhir dari data yang telah diinput dan bernilai NULL
Node *insertNodeByTail()
{
  int data;
  cin >> data;

  Node *head = NULL;
  Node *tail = NULL;

  while (data != -1)
  {
    Node *node = new Node(data);

    if (head == NULL) // kondisi node jika merupakan elemen pertama
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

// kebalikan dari function diatas, function ini mengupdate head node sehinnga atau dengan kata lain menjadi reversed linked list
Node *insertNodeByHead()
{
  int data;
  cin >> data;

  Node *head = NULL;
  Node *tail = NULL;

  while (data != -1)
  {
    Node *node = new Node(data);

    // kondisi node jika merupakan elemen pertama
    if (head == NULL)
    {
      head = node;
      tail = node;
    }
    else // head akan diupdate ke data yang baru diinput oleh user lalu mereferencekan node dengan node sebelumnya
    {
      node->next = head;
      head = node;
    }
    cin >> data;
  }

  return head;
}

int length(Node *head)
{
  Node *temp = head;
  int res = 0;

  while (temp != NULL)
  {
    res++;
    temp = temp->next;
  }
  return res;
}

// cari node ke-i lalu print nilainya
void printIthLL(Node *head, int idx)
{
  if (idx == -1)
  {
    cout << "Idx must be greater than 0\n";
    return;
  }

  Node *temp = head;
  int tmpIdx = 0;
  while (temp != NULL)
  {
    if (idx == tmpIdx)
    {
      cout << temp->data << "\n";
      temp = NULL;
      continue;
    }
    temp = temp->next;
    tmpIdx++;
  }

  if (temp == NULL)
    cout << "Node i'th not found" << endl;
}

Node *insertNodeIth(Node *head, int pos, int data)
{
  // kasus ketika pos negativ
  if (pos < 0)
    return head;

  // buat node baru
  Node *node = new Node(data);

  // Buat copy head agar head awal tidak berubah
  Node *copyHead = head;

  // kasus ketika insert pada posisi index 0
  if (pos == 0)
  {
    node->next = head;
    head = node;
    return head;
  }

  int idx = 0;

  // cari node sampai pos yang diinginkan
  while (idx < pos - 1 && head != NULL)
  {
    head = head->next;
    idx++;
  }

  // insert node yang baru
  if (head)
  {
    node->next = head->next;
    head->next = node;
    return copyHead;
  }

  return copyHead;
}

Node *deleteIthNode(Node *head, int pos)
{
  Node *temp = head;

  // jika posisi tidak valid
  if (pos < 0)
  {
    return temp;
  }

  // jika posisi berada pad index 0
  if (pos == 0)
  {
    Node *newNode = head->next;
    head->next = NULL;
    delete head;
    return newNode;
  }

  int idx = 0;
  while (idx < pos - 1 && temp)
  {
    temp = temp->next;
    idx++;
  }

  cout << temp->data << "\n";
  if (temp)
  {
    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    deletedNode->next = NULL;
    delete deletedNode;
    return head;
  }

  return head;
}

// melakukan print linked list dengan time complexity O(n)
void printList(Node *head)
{
  // membuat variable temp agar nilai head tidak diupdate
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
  int pos, data;
  Node *n1 = insertNodeByTail();
  printList(n1);
  cin >> pos >> data;
  n1 = insertNodeIth(n1, pos, data);
  printList(n1);
}
