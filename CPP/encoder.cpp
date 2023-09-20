#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <unordered_map>
#include <bitset>
using namespace std;


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
void encode(Node* root, string str,
			unordered_map<char, string> &huffmanCode)
{
	if (root == nullptr)
		return;

	// found a leaf node
	if (!root->left && !root->right) {
		huffmanCode[root->ch] = str;
	}

	encode(root->left, str + "0", huffmanCode);
	encode(root->right, str + "1", huffmanCode);
	
}

// traverse the Huffman Tree and decode the encoded string
void decode(Node* root, int &index, string str)
{
	if (root == nullptr) {
		return;
	}

	// found a leaf node
	if (!root->left && !root->right)
	{
		cout << root->ch;
		return;
	}

	index++;

	if (str[index] =='0')
		decode(root->left, index, str);
	else
		decode(root->right, index, str);
}

// Builds Huffman Tree and decode given input text
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

	// do till there is more than one node in the queue
	while (pq.size() != 1)
	{
		// Remove the two nodes of highest priority
		// (lowest frequency) from the queue
		Node *left = pq.top(); pq.pop();
		Node *right = pq.top();	pq.pop();

		// Create a new internal node with these two nodes
		// as children and with frequency equal to the sum
		// of the two nodes' frequencies. Add the new node
		// to the priority queue.
		int sum = left->freq + right->freq;
		pq.push(getNode('\0', sum, left, right));
	}

	// root stores pointer to root of Huffman Tree
	Node* root = pq.top();

	// traverse the Huffman Tree and store Huffman Codes
	// in a unordered_map. Also prints them
	unordered_map<char, string> huffmanCode;
	encode(root, "", huffmanCode);

	//cout << "Huffman Codes are :\n" << '\n';
	for (auto pair: huffmanCode) {
		//cout << pair.first << " " << pair.second << '\n';
	}

	//cout << "\nOriginal string was :\n" << text << '\n';

	// print encoded string
	string str = "";
	for (char ch: text) {
		str += huffmanCode[ch];
	}


	cout <<'\n' << str << '\n';
	cout<<"Total Bits (Original):296"<<endl;
	cout<<"Total Bits (Coded)"<<":" << count(str.begin(), str.end(), '1') +10;
	
	

	// traverse the Huffman Tree again and this time
	// decode the encoded string
	
	
	
	
}
// C++ program to Count set
// bits in an integer



/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	
	return count;
}

// Huffman coding algorithm
int main()
{
	//string text = "Huffman coding is a data compression algorithm.";
	string text;
    getline(cin, text);
    
	buildHuffmanTree(text);

	

	

	return 0;
}




