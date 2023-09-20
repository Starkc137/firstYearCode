#include <iostream>

using namespace std;

class TreeNode{
public:
    // Pointer to the left child
    TreeNode* left = NULL;
    // Pointer to the right child
    TreeNode* right = NULL;
    // Value in the node
    int value;

    // Constructor, sets the value
    TreeNode(int v) : value(v) {}
    // Destructor
    ~TreeNode() {}

};

class Tree{
private:
    TreeNode* root = NULL;
    // These functions do the actual work
    void insert(int v, TreeNode* &subtree){
        if(subtree == NULL){
           subtree = new TreeNode(v);
        }else if(v < subtree->value){
            insert(v, subtree->left);
        }else{
            insert(v, subtree->right);
        }
    }

void preOrderTraversal(TreeNode* subtree) const {/* TODO */
   
// Stop printing if no node found
   if (subtree == NULL)
       return;
 
    /* first print data of node */
   cout << subtree->value << " ";  
 
    /* then recur on left subtree */
   preOrderTraversal(subtree->left);  
 
    /* now recur on right subtree */
   preOrderTraversal(subtree->right);
}

    void inOrderTraversal(TreeNode* subtree) const {/* TODO */

if (subtree == NULL){
return;
}
inOrderTraversal(subtree->left);

cout << subtree->value << " ";

inOrderTraversal(subtree->right);
}

    void postOrderTraversal(TreeNode* subtree) const {/* TODO */

if(subtree == NULL){
return;
}

postOrderTraversal(subtree->left);

postOrderTraversal(subtree->right);

cout << subtree->value << " ";

}

int min(TreeNode* subtree) const {/* TODO */

if(subtree == NULL){
   return -1;
}
   else if(subtree->left == NULL){
       return subtree->value;
}
   else{
       return min(subtree->left);
}  
}

int max(TreeNode* subtree) const {/* TODO */

if(subtree == NULL){
return -1;
}
else if(subtree->right == NULL){
return subtree->value;
}
else{
return max(subtree->right);
}
}
   
    bool contains(int value, TreeNode* subtree) const {/* TODO */
   
// The given value is not found in tree
   if (subtree == NULL)
       return false;
       
   // The given value is found
   else if(subtree->value == value)
       return true;
       
   // The given is greater than current value
   else if(subtree->value < value){
       return contains(value, subtree->right);
       }
       
   // The given is smaller than current value
   else{
    return contains(value, subtree->left );
}
}
   
    void remove(int value, TreeNode* &subtree) {/* TODO */
   
   if(subtree == NULL){
    return;
}

if (subtree->value == value){
    if(subtree->left == NULL && subtree->right == NULL){
        delete subtree;
        subtree = NULL;
}else if(subtree->left != NULL && subtree->right == NULL){
        TreeNode* temp = subtree->left;
        subtree->left = NULL;
        delete subtree;
        subtree= temp;
}else if(subtree->left == NULL && subtree->right != NULL){
        TreeNode* temp = subtree->right;
        subtree->right = NULL;
        delete subtree;
        subtree = temp;
}else{
        subtree->value = min(subtree->right);
        remove(subtree->value, subtree->right);
}
}else if(value < subtree->value){
    remove(value, subtree->left);
}
else{
    remove(value, subtree->right);
}
}
   
public:    


    // Public interface to the recursive functions above
    void insert(int value){
        insert(value, root);
    }
   
    // Submission 4
   
void preOrderTraversal(){
        preOrderTraversal(root);
        cout << endl;
    }
   
    void inOrderTraversal(){
        inOrderTraversal(root);
        cout << endl;
    }
   
    void postOrderTraversal(){
        postOrderTraversal(root);
        cout << endl;
    }
   
    int min(){
        return min(root);
    }
   
    int max(){
        return max(root);
    }
   
    bool contains(int value){
        return contains(value, root);
    }
   
    void remove(int value){
        remove(value, root);
    }
    ~Tree(){
        // Here you should recursively delete all the nodes in the tree
        // This is not tested by the Moodle marker, but see if you can
        //   figure out how to implement this.
    delete root;
    }
};

int main(){

    Tree t;
    int value;
    // Sample code to read and construct the tree.
    while(cin >> value && value != -1){
        t.insert(value);
    }
   
    // Do some stuff...
   
    while(cin >> value && value != -1){
    t.remove(value);cout<< endl;
	t.preOrderTraversal();
    t.inOrderTraversal();
    t.postOrderTraversal();
}
}
