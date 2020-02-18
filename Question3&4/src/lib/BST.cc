#include "BST.h"

BST::BST(){
  root_ = nullptr;
}

// Inserts elements of initial_values
// one by one into the Tree
//O(n)
BST::BST(vector<int> initial_values){
  root_ = nullptr;
  for (auto it: initial_values){
    BST::push(it);
  }
}

//O(n)
BST::~BST(){
  while(root_ != nullptr){
    erase(root_ -> val);
  }
}

//Question 3
// **GT** Inserts a key inside Tree
//O(1)
void BST::push(int key){
  BST::push_helper(root_, key);
} 

//O(log(n))
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

//O(1)
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

//O(logn)
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

//O(1)
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

//O(logn)
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

//O(n)
TreeNode *BST::findMinNode(TreeNode *root){
  while(root->left!=nullptr){
    root = root ->left;
  }
  return root;
}

//O(1)
void BST::inorder(){
  BST::inorder_helper(root_);
  cout<<endl;
}

//O(logn)
void BST::inorder_helper(TreeNode *&root){
  if(root == nullptr){
    return;
  }
  inorder_helper(root->left);
  cout<< root->val<<" ";
  inorder_helper(root->right);
}

//Question 4
//O(1)
vector<int> BST::level_traverse(){
  return level_traverse_helper(root_);
}

//O(n)
vector<int> BST::level_traverse_helper (TreeNode *root){
  vector<int> res;

  if (root==nullptr){
    return res;
  }
  queue<TreeNode*> q;
  q.push(root);
  //res.push_back(root -> val);

  while(!q.empty()){
    TreeNode *temp = q.front();
    q.pop();
    res.push_back(temp->val);
    if (temp->left != nullptr) q.push(temp->left);
    if (temp->right != nullptr) q.push(temp->right);
  }

  for (int i=0;i<res.size();i++){
    cout<< res[i]<<" ";
  }
  return res;
}
