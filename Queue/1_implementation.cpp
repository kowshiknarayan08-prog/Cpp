#include<iostream>
using namespace std;
class Queue{
    public:
        int start;
        int end;
        int curr_size;
        int q[10];

    Queue(){
        start = 0;
        end = -1;
        curr_size = 0;
    }

    void enqueue(int x){
        if(curr_size == 10){
            cout << "Queue Overflow" << endl;
            return ;
        }
        end = (end + 1) % 10;
        q[end] = x;
        curr_size += 1;
    }

    int dequeue(){
        if(curr_size == 0){
            cout << "Queue underflow";
            return -1;
        }

        int temp = q[start];
        start = (start+1) % 10;
        curr_size -= 1;
        return temp;
    }

    int top(){
        if(curr_size == 0){
            cout << "Queue underflow";
            return -1;
        }

        return q[start];
    }

    bool isEmpty(){
        return curr_size == 0;
    }

    int size(){
        return curr_size;
    }
};


int main(){
    Queue q;
     q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    q.enqueue(60);
    q.enqueue(70);

    while(!q.isEmpty()){
        q.dequeue();
    }
}