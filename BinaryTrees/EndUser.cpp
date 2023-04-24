//hello
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;


int main()
{
	IntBinaryTree tree;
	cout << "Inserting the numbers 5 8 3 12 9.\n\n";
	tree.insert(5);
	tree.insert(8);
	tree.insert(3);
	tree.insert(12);
	tree.insert(9);

	cout << "Inorder traversal:  ";
	tree.showInOrder();

	cout << "\n\nPreorder traversal:  ";
	tree.showPreOrder();

	cout << "\n\nPostorder traversal:  ";
	tree.showPostOrder();

	//cout << "\n\nPostorder traversal:  ";
	tree.isBalanced();


	cout << "\n\nSearching the tree for 3: ";
	if (tree.search(3))
		cout << "3 is found in the tree.\n";
	else
		cout << "3 was not found in the tree.\n";
	cout << "\nDeleting 8...\n";
	tree.remove(8);

	cout << "Deleting 12...\n";
	tree.remove(12);

	cout << "Now, here are the nodes:\n";
	tree.showInOrder();
	cout << endl;
	return 0;

}
