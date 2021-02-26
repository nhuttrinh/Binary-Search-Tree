#ifndef _binarySearchTree_h_
#define _binarySearchTree_h_
using namespace std;

#include <string>
#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
        struct Node* left;
        struct Node* right;
        int value;
} Node_t;

class binarySearchTree {
        private:
                Node_t *root;
        public:
                binarySearchTree();
                Node_t* treeInsert(Node_t* root, int value);
                void inorderTreeWalk(Node_t* root);
                void print();
                void insert(int x);
};
#endif
