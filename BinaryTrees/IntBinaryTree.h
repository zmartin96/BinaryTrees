#include <iostream>
using namespace std;

class IntBinaryTree
{
private:
   // The TreeNode struct is used to build the tree.
   struct TreeNode
   {     
      int value;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int value1, 
              TreeNode *left1 = nullptr,
              TreeNode *right1 = nullptr)
      {
         value = value1;
         left = left1;
         right = right1;
      }
   };

   TreeNode *root;     // Pointer to the root of the tree

   // Various helper member functions.
   void insert(TreeNode *&, int);
   void destroySubtree(TreeNode *);
   void remove(TreeNode *&, int);
   void makeDeletion(TreeNode *&);
   int findLevel(TreeNode*&,int);
   void displayInOrder(TreeNode *) const;
   void displayPreOrder(TreeNode *) const;
   void displayPostOrder(TreeNode *) const;

public:
   // These member functions are the public interface.
   IntBinaryTree()		// Constructor
   {
      root = nullptr;
   }
   ~IntBinaryTree()		// Destructor
   {
      destroySubtree(root);
   }
   void insert(int num)
   {
      insert(root, num);
   }
   bool search(int) const;
   void remove(int num)
   {
      remove(root, num);
   }
   void showInOrder(void) const
   {
      displayInOrder(root);
   }
   void showPreOrder() const
   {
      displayPreOrder(root);
   }
   void showPostOrder() const
   {
      displayPostOrder(root);
   }
   void isBalanced()
   {
       int levelL = 0,
           levelR=0;
       if (root) 
       {
           levelL = findLevel(root->left, 0);
               //findLevel(root->left);
           levelR = findLevel(root->right,0);
       }
       cout << "\n\nThe left level is " << levelL <<
           "\nThe right level is " << levelR << endl;

           
   }
};

