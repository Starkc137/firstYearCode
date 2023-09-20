#include <bits/stdc++.h> 
#define MAX_TREE_HT 256 
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <unordered_map>
#include <bitset>
using namespace std; 

map<char, string> codes; 

map<char, int> freq; 

void show(int a[], int array_size){
	for (int i=0;i< array_size;++i)
		cout<<a[i]<<" ";
}
// A Tree node
struct Node
{
	char ch;
	int freq;
	Node *left, *right;
};

// Function to allocate a new tree node
Node* getNode(char ch, int freq, Node* left, Node* right)
{
	Node* node = new Node();

	node->ch = ch;
	node->freq = freq;
	node->left = left;
	node->right = right;

	return node;
}

// Comparison object to be used to order the heap
struct comp
{
	bool operator()(Node* l, Node* r)
	{
		// highest priority item has lowest frequency
		return l->freq > r->freq;
	}
};

// traverse the Huffman Tree and store Huffman Codes
// in a unordered_map.

void buildHuffmanTree(string text)
{
	// count frequency of appearance of each character
	// and store it in a unordered_map
	unordered_map<char, int> freq;
	for (char ch: text) {
		freq[ch]++;
		
		
	}

	// Create a priority queue to store live nodes of
	// Huffman tree;
	priority_queue<Node*, vector<Node*>, comp> pq;

	// Create a leaf node for each character and add it
	// to the priority queue.
	for (auto pair: freq) {
		pq.push(getNode(pair.first, pair.second, nullptr, nullptr));
			
			cout << pair.first<<" ";
		
		 
	}
	cout<<endl;
	for (auto pair: freq) {
		pq.push(getNode(pair.first, pair.second, nullptr, nullptr));
		cout << pair.second<<" ";
	}


	//cout<<"Total Bits (Original):296"<<endl;
	//cout<<"Total Bits (Coded)"<<":" << count(str.begin(), str.end(), '1');
	
	

	// traverse the Huffman Tree again and this time
	// decode the encoded string
	
	
	
	
}

struct MinHeapNode 
{ 
    char data;          
    int freq;           
    MinHeapNode *left, *right; 
  
    MinHeapNode(char data, int freq) 
    { 
        left = right = NULL; 
        this->data = data; 
        this->freq = freq; 
    } 
}; 

struct compare 
{ 
    bool operator()(MinHeapNode* l, MinHeapNode* r) 
    { 
        return (l->freq > r->freq); 
    } 
}; 

void printCodes(struct MinHeapNode* root, string str) 
{ 
    if (!root) 
        return; 
    if (root->data != '$') 
        cout << root->data << ": " << str << "\n"; 
    printCodes(root->left, str + "0"); 
    printCodes(root->right, str + "1"); 
} 

void storeCodes(struct MinHeapNode* root, string str) 
{ 
    if (root==NULL) 
        return; 
    if (root->data != '$') 
        codes[root->data]=str; 
    storeCodes(root->left, str + "0"); 
    storeCodes(root->right, str + "1"); 
} 
  
priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap; 

void HuffmanCodes(int size) 
{ 
    struct MinHeapNode *left, *right, *top; 
    for (map<char, int>::iterator v=freq.begin(); v!=freq.end(); v++) 
        minHeap.push(new MinHeapNode(v->first, v->second)); 
    while (minHeap.size() != 1) 
    { 
        left = minHeap.top(); 
        minHeap.pop(); 
        right = minHeap.top(); 
        minHeap.pop(); 
        top = new MinHeapNode('$', left->freq + right->freq); 
        top->left = left; 
        top->right = right; 
        minHeap.push(top); 
    } 
    storeCodes(minHeap.top(), ""); 
} 

void calcFreq(string str, int n) 
{ 
    for (int i=0; i<str.size(); i++) 
        freq[str[i]]++; 
} 

string decode_file(struct MinHeapNode* root, string s) 
{ 
    string ans = ""; 
    struct MinHeapNode* curr = root; 
    for (int i=0;i<s.size();i++) 
    { 
        if (s[i] == '0') 
           curr = curr->left; 
        else
           curr = curr->right; 
  
        if (curr->left==NULL and curr->right==NULL) 
        { 
            ans += curr->data; 
            curr = root; 
        } 
    } 
    return ans+'\0'; 
} 
  
int main() 
{ 
   	string str;
    getline(cin, str);
    string encodedString, decodedString; 
    calcFreq(str, str.length()); 
    HuffmanCodes(str.length()); 
    
    for (auto i: str) 
       encodedString+=codes[i]; 
    
    buildHuffmanTree(str);

  
    //cout<<'\n'<< encodedString << endl; 
    //cout<<"Total Bits (Coded)"<<":" << encodedString.size();
    //cout<<"Total Bits (Original):296"<<endl;
	//cout<<"Total Bits (Coded):114";
  
    decodedString = decode_file(minHeap.top(), encodedString); 
    //cout << "\nDecoded Huffman Data:\n" << decodedString << endl; 
    //cout<<'\n'<<"Total Bits (Original):"<<decodedString.size();
    return 0; 
}
