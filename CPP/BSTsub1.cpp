#include <iostream>

using namespace std;



class TreeNode{
public:

    // Pointer to the left child
    TreeNode* left = nullptr;
    // Pointer to the right child
    TreeNode* right = nullptr;
    // Value in the node
    int value;

    // Constructor, sets the value
    TreeNode(int v) : value(v) {}
    // Destructor
    ~TreeNode() {}
};

class Tree{
private:
    TreeNode* root = nullptr;
    // These functions do the actual work
    void insert(int v, TreeNode* &subtree){
        if(subtree == nullptr){
           subtree = new TreeNode(v);
        }else if(v < subtree->value){
            insert(v, subtree->left);
        }else{
            insert(v, subtree->right);
        }
    }

    void preOrderTraversal(TreeNode* subtree){
        if(subtree == NULL)
            return;
        cout << subtree->value <<" ";

        preOrderTraversal(subtree->left);
        preOrderTraversal(subtree->right);
    }
    void inOrderTraversal(TreeNode* subtree) {
        if(subtree == NULL)
            return;
        inOrderTraversal(subtree->left);
        cout <<subtree->value<<" ";
        inOrderTraversal(subtree->right);
       
    }
    void postOrderTraversal(TreeNode* subtree) const{
        if(subtree == NULL)
            return;
        postOrderTraversal(subtree->left);
        postOrderTraversal(subtree->right);
        cout <<subtree->value<<" ";
        

    }

    int min(TreeNode* subtree) const {/* TODO */}
    int max(TreeNode* subtree) const {/* TODO */}
    bool contains(int value, TreeNode* subtree) const {/* TODO */}
    void remove(int value, TreeNode* &subtree) {/* TODO */}

public:
    // Public interface to the recursive functions above

    void insert(int value){
        insert(value, root);
    }

    // Submission 1
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
    // Submission 2
    int min(){
        return min(root);
    }
    int max(){
        return max(root);
    }


    // Submission 3
    bool contains(int value){
        return contains(value, root);
    }
    // Submission 4
    void remove(int value){
        remove(value, root);
    }
    ~Tree(){
        delete root;
        // Here you should recursively delete all the nodes in the tree
        // This is not tested by the Moodle marker, but see if you can
        //   figure out how to implement this.
    }
};

 int main(){
    Tree t;
    int value;
    while(cin >> value && value != -1){
        t.insert(value);
    }
	t.preOrderTraversal();
    t.inOrderTraversal();
    t.postOrderTraversal();

}
