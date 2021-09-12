// A binary search tree node
using namespace std;


class node {
public:
		string data;
		node* left;
		node* right;
	};

class tree{
public:

	// Initialize a global pointer for root
	node* root;
	tree();

	// This function do inorder traversal of the binary search tree
	void inOrder(node* curr) ;

	// This function do preorder traversal of the binary search tree
	void preOrder(node* curr) ;

	// This function do postorder traversal of the binary search tree
	void postOrder(node* curr) ;

	// This function searches if the given data in the binary search tree
	bool search(node* curr, string data) ;

	// This function inserts a new node with given key in the binary search tree
	node* insert_node(node* curr, string new_data) ;

	// This function returns the node with minimum value found in the given tree
	node* min_node(node* curr) ;

	// This function returns the node with maximum value found in the given tree
	node* max_node(node* curr) ;

	// This function deletes the given data in the binary search tree if exists
	node* delete_node(node* curr, string data) ;

	// This function traverses the binary search tree in postorder to delete all nodes
	void delete_tree(node* curr) ;
};



// A binary search tree node
//template<class T >


	tree::tree(){                             //:: scope operator
	   // Initialize a global pointer for root
	   root=NULL;
	}

	// This function do inorder traversal of the binary search tree
	void tree::inOrder(node* curr) {
		// base case we reach a null node
		if (curr == NULL)
			return;
		// repeat the same definition of inorder traversal
		inOrder(curr->left);
		cout << curr->data << ' ';
		inOrder(curr->right);
	}

	// This function do preorder traversal of the binary search tree
	void tree::preOrder(node* curr) {
		// base case we reach a null node
		if (curr == NULL)
			return;
		// repeat the same definition of preOrder traversal
		cout << curr->data << ' ';
		preOrder(curr->left);
		preOrder(curr->right);
	}

	// This function do postorder traversal of the binary search tree
	void tree::postOrder(node* curr) {
		// base case we reach a null node
		if (curr == NULL)
			return;
		// repeat the same definition of postorder traversal
		postOrder(curr->left);
		postOrder(curr->right);
		cout << curr->data << ' ';
	}

	// This function searches if the given data in the binary search tree
	bool tree::search(node* curr, string data) {
		// base case we reach a null node
		if (curr == NULL)
			return false;
		// check if we find the data at the curr node
		if (curr->data == data)
			return true;
		// repeat the same definition of search at left or right subtrees
		if (data < curr->data)
			return search(curr->left, data);
		else
			return search(curr->right, data);
	}

	// This function inserts a new node with given key in the binary search tree
	node* tree::insert_node(node* curr, string new_data) {
		// base case we reach a null node
		if (curr == NULL) {
			curr = new node();
			curr->data = new_data;
			return curr;
		}
		// repeat the same definition of insert at left or right subtrees
		if (new_data < curr->data)
			curr->left = insert_node(curr->left, new_data);
		else if (new_data > curr->data)
			curr->right = insert_node(curr->right, new_data);
		// return the unchanged node pointer
		return curr;
	}

	// This function returns the node with minimum value found in the given tree
	node* tree::min_node(node* curr) {
		node* res = curr;
		// loop down to find the leftmost leaf
		while (res->left != NULL)
			res = res->left;
		// return the nearest data node of curr data node
		return res;
	}

	// This function returns the node with maximum value found in the given tree
	node* tree::max_node(node* curr) {
		node* res = curr;
		// loop down to find the rightmost leaf
		while (res->right != NULL)
			res = res->right;
		// return the nearest data node of curr data node
		return res;
	}

	// This function deletes the given data in the binary search tree if exists
	node* tree::delete_node(node* curr, string data) {
		// base case we reach a null node
		if (curr == NULL)
			return curr;
		// repeat the same definition of insert at left or right subtrees
		if (data < curr->data)
			curr->left = delete_node(curr->left, data);
		else if (data > curr->data)
			curr->right = delete_node(curr->right, data);
		// if the given data is same as curr's data, then we will delete this node
		else {
			// node with no child
			if (curr->left == NULL && curr->right == NULL) {
				delete(curr);
				return NULL;
			}
			// node with only one child
			else if (curr->left == NULL) {
				node* temp = curr->right;
				delete(curr);
				return temp;
			}
			// node with only one child
			else if (curr->right == NULL) {
				node* temp = curr->left;
				delete(curr);
				return temp;
			}
			// node with two children
			else {
				// get the inorder successor (smallest in the right subtree)
				node* temp = min_node(curr->right);
				// copy the inorder successor's content to this node
				curr->data = temp->data;
				// delete the inorder successor
				curr->right = delete_node(curr->right, temp->data);
			}
		}
		// return the unchanged node pointer
		return curr;
	}

	// This function traverses the binary search tree in postorder to delete all nodes
	void tree::delete_tree(node* curr) {
		// base case we reach a null node
		if (curr == NULL)
			return;
		// repeat the same definition of postorder traversal
		delete_tree(curr->left);
		delete_tree(curr->right);
		delete(curr);
	}

