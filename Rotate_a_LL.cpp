//LeetCode: 61. Rotate List
#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(length) + O(lenght) = O(2length) = O(length)
Space Complexity: O(1)
*/

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void print(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
}

Node* findNthNode(Node* head, int result)
{
    Node* temp = head;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        if(result == count)
        {
            break;
        }
        temp = temp->next;
    }

    return temp;
}

Node* Rotation(Node* head, int k)
{
    //Case:
    if(head == NULL || head->next == NULL || k == 0) return head;

    Node* tail = head;
    int len = 1;
    while(tail->next != NULL)
    {
        len++;
        tail = tail->next;
    }

    k = k % len;

    if(k == 0) return head;

    Node* newLastNode = findNthNode(head, len-k);

    tail->next = head;

    head = newLastNode->next;

    newLastNode->next = NULL;

    return head;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head = Rotation(head,2);

    print(head);    //4 5 1 2 3 

    return 0;
}