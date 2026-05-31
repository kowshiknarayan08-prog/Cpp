#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;
    int nextIndex;

    int parent(int index) {
        return index / 2;
    }

public:
    MaxHeap(int capacity) {
        heap.resize(capacity + 1);
        nextIndex = 1;
    }

    bool isFull() {
        return nextIndex == heap.size();
    }

    bool isEmpty() {
        return nextIndex == 1;
    }

    int size() {
        return nextIndex - 1;
    }

    void insert(int value) {
        if (isFull()) {
            cout << "Heap is full\n";
            return;
        }

        heap[nextIndex] = value;
        int current = nextIndex;
        nextIndex++;

        while (current > 1 && heap[parent(current)] < heap[current]) {
            swap(heap[parent(current)], heap[current]);
            current = parent(current);
        }
    }

    void print() {
        for (int index = 1; index < nextIndex; index++) {
            cout << heap[index] << " ";
        }
        cout << '\n';
    }
};

int main() {
    MaxHeap heap(10);

    heap.insert(50);
    heap.insert(55);
    heap.insert(53);
    heap.insert(52);
    heap.insert(54);

    heap.print();

    return 0;
}
