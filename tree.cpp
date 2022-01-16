#include <iostream>
using namespace std;
typedef struct bTree {
	int val;
	struct bTree* left;
	struct bTree* right;
}BTREE;

BTREE* root = NULL;

BTREE * readNote() {
	BTREE* newNode;
	newNode = (BTREE*)malloc(sizeof(BTREE));
	if (newNode == NULL) {
		cout << "Malloc Error"<<endl;
		return NULL;
	}
	cout << "Enter value of node: \n";cin >> (newNode->val);
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
void insert(BTREE* treeRoot, BTREE* newNode) {
	if (treeRoot == NULL) {
		root = newNode;
	}
	else {
		if (newNode->val < treeRoot->val) {
			if (treeRoot->left == NULL) {
				treeRoot->left = newNode;
			}
			else{
				insert(treeRoot->left, newNode);
			}
		}
		else {
			if (treeRoot->right == NULL) {
				treeRoot->right = newNode;
			}
			else{
				insert(treeRoot->right, newNode);
			}
		}
	}
}
int getMin(BTREE* treeRoot) {
	BTREE* temp = treeRoot;

	while (temp->left != NULL) {
		temp = temp->left;
	}
	return temp->val;
}
BTREE* deleteNode(BTREE* treeRoot, int item) {
	if (treeRoot == NULL) {
		return NULL;
	}
	if (treeRoot->val < item)
		treeRoot->right = deleteNode(treeRoot->right, item);
	else if (treeRoot->val > item)
		treeRoot->left = deleteNode(treeRoot->left, item);
	else {
		if (treeRoot->left == NULL && treeRoot->right == NULL) {
			free(treeRoot);
			return NULL;
		}
		else if (treeRoot->left == NULL) {
			BTREE* temp = treeRoot->right;
			free(treeRoot);
			return temp;
		}
		else if (treeRoot->right == NULL) {
			BTREE* temp = treeRoot->left;
			free(treeRoot);
			return temp;
		}
		else {
			int rightmin = getMin(treeRoot->right);
			treeRoot->val = rightmin;
			treeRoot->right = deleteNode(treeRoot->right, rightmin);
		}
	}
	return treeRoot;

}
void traverse(BTREE* treeRoot) {
	if (treeRoot != NULL) {
		cout << treeRoot->val << " " << treeRoot<<"\t";
		traverse(treeRoot->left);
		traverse(treeRoot->right);
	}
}
int main()
{
	int ch,i,count=0;
	BTREE* a;
	while (true) {
		cout<<" \n--------1.Insert a node\n 2.Delete a Node\n3.List nodes\n4.Search for a node\n5.Count the number of nodes\n6.Exit\nEnter your choice : "<<endl;
		cin >> ch;
		switch (ch){
		case 1:{
			a = readNote();
			insert(root, a);
			break;
		}
		case 2: {
			cout << "Enter node the deleted: ";cin >> i;
			a = deleteNode(root, i);
			if (a != NULL) {
				cout << "Deleted" << endl;
			}
			else {
				cout << "Item to be deleted is not found or list is empty.\n";
			}
			break;
		}
		case 3: {
			if (root != NULL) {
				traverse(root);
				break;

			}
		}

		default:
			break;
		}
	}

	return 0;
}


