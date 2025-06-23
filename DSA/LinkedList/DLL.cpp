#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *convertArrToDLL(vector<int>& arr){
    Node *head = new Node(arr[0]);
    Node *back = head;
    for(int i=1; i<arr.size(); i++){
        Node *temp = new Node(arr[i], nullptr, head);
        back->next = temp;
        back = temp;
    }
    return head;
}

void printLL(Node *head){
    Node *temp = head;
    cout << "Linked List: ";
    while (temp!= nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    vector<int> arr = {12, 9, 15, 7, 20};
    Node *head = convertArrToDLL(arr);
    printLL(head); 
    return 0;
}