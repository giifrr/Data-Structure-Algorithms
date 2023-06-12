/*
  Problem:
  Carilah sebuah nilai tengah dari sebuah linked list, jika panjang linked list genap maka return nilai tengah yang kedua!

  ex1: linked list = 1->2->3->4->5->6->7->8->NULL karna panjang linked list genap maka mid dari sebuah linked list adalah 4 dan 5 karna yang diminta nilai mid yang kedua maka nilai 5 yang akan keluat

  ex2: linked list = 1->2->3->4->5->6->7->NULL maka nilai midnya adalah 4
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

/*
terdapat 2 solusi untuk mensolve problem ini pertama cari panjang linked list lalu cari mid nya ini membutuhkan 2 kali mentraverse sebuah linked list
Better approach adalah menggunakan fast and slow method. Slow akan melangkah ke node berikutnya sebanyak satu kali (node->next) sedangkan fast sebanyak dua kali (node->next->next) sehingga bisa dilihat bahwa fast akan menuju tail 2x lebih cepat daripada slow
*/

int findMid(Node *head)
{
  Node *slow = head;
  Node *fast = head->next;

  while (fast && fast->next)
  {
    fast = fast->next->next;
    slow = slow->next;
  }

  if (fast == NULL)
    return slow->data;
  if (fast->next == NULL)
    return slow->next->data;
}

int main()
{
  Node *n1 = new Node(1);
  Node *n2 = new Node(2);
  Node *n3 = new Node(3);
  n1->next = n2;
  n2->next = n3;
  cout << findMid(n1);
}
