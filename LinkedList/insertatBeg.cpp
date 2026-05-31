#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }

    Node(int data ){
        this->data = data;
        this->next = nullptr;
    }
};

Node* Insert_at_beg(int data , Node* head){

        Node *temp = new Node(data);
        temp->next = head;
        return temp;
}

void Delete_tail(Node * head){
    Node* first = head->next;
    Node* second = head;
    while(first->next != nullptr){
        first = first->next;
        second = second->next;
    }

    second->next = nullptr;
}

int len_of_ll(Node *head){
    int count = 0;
    while(head != nullptr){
        head = head->next;
        count += 1;
    }

    return count;
}

bool search_ll(int target , Node* head){
    while(head != nullptr){
        if (head->data == target){
            return true ;
        }
        head = head->next;
    }

    return false ; 
}

int main(){
    vector<int> arr = {1,2,3};

    Node *head = new Node(arr[0]);
    head = Insert_at_beg(arr[1] , head);
    head = Insert_at_beg(arr[2] , head);
    Node *temp = head;
    Delete_tail(head);
    for(;temp->next != nullptr ; temp = temp->next){
        cout << temp->data ;
        cout << "->";
    }

    cout << temp->data <<endl;
    cout << "Len of Linked list : " << len_of_ll(head) << endl;
    cout << "Searching for 3 in LL : " << search_ll(4 , head);

}

//Nice workk!