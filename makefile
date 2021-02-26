BST: mainBST.o binarySearchTree.o
	g++ -o BST mainBST.o binarySearchTree.o
mainBST.o: mainBST.cpp
	g++ -c mainBST.cpp
binarySearchTree.o: binarySearchTree.cpp
	g++ -c binarySearchTree.cpp
