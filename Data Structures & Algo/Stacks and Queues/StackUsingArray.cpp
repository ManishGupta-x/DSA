#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class StackUsingArray
{
private:
    T *data;
    int nextIndex;
    int capacity;
public:

    StackUsingArray(int totalsize){
        data = new T[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex == 0;
    }

    void push(T element){

        // if(nextIndex == capacity){
        //     cout << "Stack full" << endl;
        //     return;
        // }
        // data[nextIndex] = element;
        // nextIndex++;

                //OR

        if(nextIndex == capacity){
            T *newData = new T[2*capacity];
            for(int i=0; i<capacity; i++){
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return data[nextIndex - 1];
    }
    
};

