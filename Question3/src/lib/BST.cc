#include "BST.h"

BST::BST(){
  root_ = nullptr;
}

// Inserts elements of initial_values
// one by one into the Tree
BST::BST(vector<int> initial_values){
  root_ = nullptr;
  for (auto it: initial_values){
    BST::push(it);
  }
}

// **GT** Inserts a key inside Tree
void BST::push(int key){
  BST::push_helper(root_, key);
} 

void BST::push_helper (TreeNode *&root, int key){
  if(root == nullptr){
    root = new TreeNode(key);
    return;
  }
  if(key < root -> val){
    push_helper(root -> left, key);
  }
  else{
    push_helper(root -> right, key);
  }
}

bool BST::find(int key)
{
  if(root_ == nullptr){
    return false;
  }
  TreeNode *t = find_helper(root_,key);
  if(t==nullptr){
    return false;
  }
  else{
    return true;
  }
}

TreeNode *BST::find_helper(TreeNode *&root, int key){
  if (root == nullptr){
    return root;
  }
  if (root->val == key){
    return root;
  }
  if (key < root -> val){
    return find_helper(root->left, key);
  }
  else{
    return find_helper(root->right, key);
  }
}

bool BST::erase(int key){
  if (root_ == nullptr){
    return false;
  }
  else{
    if(!find(key)){
    return false;
    }
    root_ = erase_helper(root_, key);
    return true;
  }  
} // **GT** Removes the key from the tree. If not successful, returns false.

TreeNode *BST::erase_helper(TreeNode *&root, int key){
  if (root == nullptr){
    return root;
  }
  else if(root -> val > key){
    root -> left = erase_helper(root -> left, key);
  }
  else if(root -> val < key){
    root -> right = erase_helper(root -> right, key);
  }
  else if(root -> val == key) {
    if(root -> left == nullptr && root -> right == nullptr){
      delete root;
      root = nullptr;
    }else if(root -> left == nullptr){  
      TreeNode* temp = temp -> right;
      delete temp;
      temp = nullptr;
    }else if(root -> right == nullptr){  
      TreeNode* temp = temp -> left;
      delete temp;
      temp = nullptr;      
    }else{                             
      TreeNode *temp = findMinNode(root -> right);
      root -> val = temp -> val;
      root -> right = erase_helper(root -> right, temp -> val);
    }
  }
  return root;
}

TreeNode *BST::findMinNode(TreeNode *root){
  while(root->left!=nullptr){
    root = root ->left;
  }
  return root;
}

void BST::inorder(){
  BST::inorder_helper(root_);
  cout<<endl;
}

void BST::inorder_helper(TreeNode *&root){
  if(root == nullptr){
    return;
  }
  inorder_helper(root->left);
  cout<< root->val<<" ";
  inorder_helper(root->right);
}