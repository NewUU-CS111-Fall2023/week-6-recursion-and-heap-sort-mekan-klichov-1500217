/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <vector>

class Heap {
private:
    std::vector<int> array;

    void maxHeapify(int index, int heapSize);
    void buildMaxHeap();

public:
    Heap(std::vector<int>& inputArray);

    void displayHeap();

    void heapSort();
};

Heap::Heap(std::vector<int>& inputArray) : array(inputArray) {
    buildMaxHeap();
}

void Heap::maxHeapify(int index, int heapSize) {
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < heapSize && array[leftChild] > array[largest]) {
        largest = leftChild;
    }

    if (rightChild < heapSize && array[rightChild] > array[largest]) {
        largest = rightChild;
    }

    if (largest != index) {
        std::swap(array[index], array[largest]);
        maxHeapify(largest, heapSize);
    }
}

void Heap::buildMaxHeap() {
    int heapSize = array.size();

    for (int i = heapSize / 2 - 1; i >= 0; --i) {
        maxHeapify(i, heapSize);
    }
}

void Heap::heapSort() {
    int heapSize = array.size();

    for (int i = heapSize - 1; i > 0; --i) {
        std::swap(array[0], array[i]);
        maxHeapify(0, i);
    }
}

void Heap::displayHeap() {
    for (int i = 0; i < array.size(); ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}