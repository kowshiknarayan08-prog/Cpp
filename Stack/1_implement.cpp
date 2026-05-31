#include<iostream>
using namespace std;
class Stack{
    public:
        int data[10];
        int top;
    Stack(){
        top = -1;
    }

    void push(int value){
        top += 1;
        data[top] = value;
        
    }

    int pop(){
        int temp = data[top];
        top -= 1;
        return temp;
        
    }

    bool isEmpty(){
        if (top == -1) return true;
        return false;
    }

    int peek(){
        return data[top];
    }
};
int main(){
    Stack st ;
    st.push(5);  
    st.push(7);
    st.push(9);
    //int data = st.pop();
    cout << st.pop() << endl << st.peek() << endl << st.isEmpty();
    
}