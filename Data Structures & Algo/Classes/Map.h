#include <bits/stdc++.h> 
#include <string>
using namespace std;

template <typename V>
class mapnode{

    public:
    string key;
    V value;
    mapnode *next;

    mapnode(string key, V value){
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~mapnode(){
        delete next;
    }
};

template <typename V>
class map {

    mapnode<V> **buckets;
    int size;
    int numBuckets;

    public:
    map(){
        numBuckets = 5;
        buckets = new mapnode<V>*[numBuckets];
        for(int i = 0; i < numBuckets; i++){
            buckets[i] = NULL;
        }
        size = 0;
    }

    ~map(){
        for(int i = 0; i < numBuckets; i++){
            delete buckets[i];
        }
        delete [] buckets;
    }

    int getSize(){
        return size;
    }

    private:
    int getBucketIndex(string key){
        int hashCode = 0;
        int currentCoeff = 1;
        for(int i = key.length() - 1; i >= 0; i--){
            hashCode += key[i] * currentCoeff;
            hashCode = hashCode % numBuckets;
            currentCoeff *= 37;
            currentCoeff = currentCoeff % numBuckets;
        }
        return hashCode % numBuckets;
    }

    public:
    void insert(string key, V value){
        int bucketIndex = getBucketIndex(key);
        mapnode<V> *head = buckets[bucketIndex];
        while(head != NULL){
            if(head->key == key){
                head->value = value;
                return;
            }
            head = head->next;
        }
        head = buckets[bucketIndex];
        mapnode<V> *node = new mapnode<V>(key, value);
        node->next = head;
        buckets[bucketIndex] = node;
        size++;
    }
    

};