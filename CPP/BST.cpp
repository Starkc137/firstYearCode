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
        cout << endl;
    }
    void postOrderTraversal(TreeNode* subtree) const{
        if(subtree == NULL)
            return;
        postOrderTraversal(subtree->left);
        postOrderTraversal(subtree->right);
        cout <<subtree->value<<" ";
        cout << endl;

    }

    int min(TreeNode* subtree) const {
        if(subtree->left != nullptr){
        return min(subtree ->left);
        }else{
            return subtree->value;
        }
    }
    int max(TreeNode* subtree) const {
        TreeNode* tmp = subtree;
        while(tmp->right != nullptr){
            tmp= tmp->right;
        }
        return tmp->value;
    }
    bool contains(int value, TreeNode* subtree) const {
        if(subtree == nullptr) return false;

        if(subtree->value == value){
            return true;
        }else if(value <subtree->value){
            return contains(value, subtree->left);
        }else{
            return contains(value, subtree->right);
        }
    }
    void remove(int value, TreeNode* &subtree) {
        if(subtree == nullptr){
            return;
        }

        if(subtree->value == value){
            if(subtree->left ==nullptr&& subtree->right == nullptr){
                delete subtree;
                subtree = nullptr;
            }else if(subtree->left != nullptr && subtree ->right == nullptr){
                TreeNode* tmp = subtree->left;
                subtree->left = nullptr;
                delete subtree;
                subtree = tmp;
            }else if(subtree->left == nullptr && subtree ->right != nullptr){
            TreeNode* tmp = subtree->right;
            subtree->right = nullptr;
            delete subtree;
            subtree = tmp;
        }else{
                subtree->value = min(subtree->right);
                remove(subtree->value, subtree->right);
            }
        }else if(value <subtree->value){
            remove(value, subtree->left);
        }else{
            remove(value, subtree->right);
        }



    }


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

    while(cin >> value && value != -1){
       t.remove(value);
       t.preOrderTraversal();
       t.inOrderTraversal();
       t.postOrderTraversal();

    }
}
