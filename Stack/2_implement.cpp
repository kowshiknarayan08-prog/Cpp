#include<iostream>
using namespace std;

class List{
public:
    int data;
    List *next;

    List(int data){
        this->data = data;
    }

    List(int data , List* next){
        this->data = data;
        this->next = next;
    }
};

class Stack{
    public:
        List *top;
        int size;
    Stack(){
        top = nullptr;
        size = 0;
    }

    void push(int x ){
        List *temp = new List(x , top);
        top = temp;
        size += 1;
    }

    int pop(){
        if(top == nullptr){
            cout << "Stack empty";
            return -1;
        }

        int value = top->data;

        List *temp = top;
        top = top->next;
        delete temp;
        size -= 1;
        return value;
    
    }

    int peek(){
        if(top == nullptr){
            cout << "Stack Empty";
            return -1;
        }

        return top->data;
    }

    int stack_size(){
        return size;
    }
};

int main(){
    Stack st;
    st.push(5);
    st.push(10);
      st.push(15);

    cout << st.pop() << endl;
    cout << st.peek() << endl;
    cout << st.stack_size();
}