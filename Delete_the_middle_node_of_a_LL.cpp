//LeetCode: 2095. Delete the Middle Node of a Linked List
#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(n/2) = O(n)
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

Node* convert(vector<int>&arr)
{
    Node* head = new Node(arr[0]);

    Node* mover = head;

    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);

        mover->next = temp;

        mover = temp;
    }

    return head;
}

void print(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
}

Node* deleteMiddle(Node* head)
{
    if(head == NULL) return head;

    Node* temp = head;

    int count = -1;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    int middle = ceil(double(count)/2);

    if(middle == 0)
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    temp = head;
    count = 0;
    while(temp != NULL)
    {
        if(middle-1 == count)
        {
            Node* deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
            return head;
        }
        count++;
        temp = temp->next;
    }

    return head;
}

int main()
{
    vector<int>arr = {1,3,4,7,1,2,6};

    Node* head = convert(arr);

    head = deleteMiddle(head);

    print(head);       //1,3,4,1,2,6

    return 0;
}