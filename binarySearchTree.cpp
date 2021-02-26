#include "binarySearchTree.h"
#include <iostream>

/*Constructor*/
binarySearchTree::binarySearchTree(){
	root = NULL;
}
/*Insert a value to BST*/
Node_t* binarySearchTree::treeInsert(Node_t* root, int key) {
	if(root == NULL){
		root = new Node_t;
		root->value = key;
		root->left = root->right = NULL;}
	else if(key < root->value){
		root->left = treeInsert(root->left, key);
		}
	else if(key > root->value){
		root->right = treeInsert(root->right, key);
	}
	return root;
}

/*Inorder Tree Walk*/
void binarySearchTree::inorderTreeWalk(Node_t* root){
	if(root == NULL){ return;}
	inorderTreeWalk(root->left);
	cout << root->value << " ";
	inorderTreeWalk(root->right);
}

/*Print the result of inorderTreeWalk*/
void binarySearchTree::print() {
	inorderTreeWalk(root);
	cout << endl;

}

/*Insert methhod using Tree Insert*/
void binarySearchTree::insert(int x){
	root = treeInsert(root,x);
}


