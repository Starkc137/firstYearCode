#include <iostream>
#include <vector>
using namespace std;


class BinaryHeap{
public:
    vector<int> data;

    int parent(int idx){
        return (idx-1)/2;
    }

    int left_child(int idx){
        return (2*idx +1);
    }

    int right_child(int idx){
        return (2*idx +2);
    }
    void heapify_down(int idx)
      {
          // get left and right child of node at index `idx`
          int left = left_child(idx);
          int right = right_child(idx);

          int largest = idx;

          // compare `data[idx]` with its left and right child
          // and find the largest value
          if (left < size() && data[left] > data[idx]) {
              largest = left;
          }

          if (right < size() && data[right] > data[largest]) {
              largest = right;
          }

          // swap with data child having greater value and
          // call heapify-down on the child
          if (largest != idx)
          {
              swap(data[idx], data[largest]);
              heapify_down(largest);
          }
      }

      // Recursive heapify-up algorithm
      void heapify_up(int idx)
      {
          // check if the node at index `idx` and its parent violate the heap property
          if (idx && data[parent(idx)] < data[idx])
          {
              // swap the two if heap property is violated
              swap(data[idx], data[parent(idx)]);

              // call heapify-up on the parent
              heapify_up(parent(idx));
          }
      }

public:
    // return size of the heap
    unsigned int size() {
        return data.size();
    }

    // Function to check if the heap is empty or not
    bool empty() {
        return size() == 0;
    }

    // insert key into the heap
    void push(int key)
    {
        // insert data new element at the end of the vector
        data.push_back(key);

        // get element index and call heapify-up procedure
        int index = size() - 1;
        heapify_up(index);
    }

    // Function to remove an element with the highest priority (present at the root)
    void pop()
    {
        try {
            // if the heap has no elements, throw an exception
            if (size() == 0)
            {
                throw  "index is out of range(Heap underflow)";
            }

            // replace the root of the heap with the last element
            // of the vector
            data[0] = data.back();
            data.pop_back();

            // call heapify-down on the root node
            heapify_down(0);
        }
        // catch and print the exception
        catch (const out_of_range &oor) {
            cout << endl << oor.what();
        }
    }

    // Function to return an element with the highest priority (present at the root)
    int top()
    {
        try {
            // if the heap has no elements, throw an exception
            if (size() == 0)
            {
                throw out_of_range("Vector<X>::at() : "
                        "index is out of range(Heap underflow)");
            }

            // otherwise, return the top (first) element
            return data.at(0);        // or return data[0];
        }
        // catch and print the exception
        catch (const out_of_range &oor) {
            cout << endl << oor.what();
        }

    }
    void print(){
        for(auto &v : data){
            cout << v << " ";
        }
        cout << endl;
    }
};

//int main()
//{
//    BinaryHeap bh;
//    string line;
//    while(getline(cin, line) && line[0] != 'x'){
//        if(line[0] == 'p'){
//            bh.pop();
//        }else{
//            bh.push(stoi(line));
//        }
//        bh.print();
//    }
//    return 0;
//}

int main()
{
    vector<int> input;
    
    BinaryHeap bh;
    string line;

    int value;
    while(cin >> value != && line[0]  'x'){
        input.push_back(value);
    }
    bh.print();

    return 0;
}
