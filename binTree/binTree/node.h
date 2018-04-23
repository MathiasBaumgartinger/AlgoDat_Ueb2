class treeNode
{
public:
	int data;
	treeNode *left;
	treeNode *right;
	//treeNode(int);
	//~treeNode();
private:
	/*int data;
	treeNode *left;
	treeNode *right;*/
};

class binTree
{
public:
	binTree();
	//~binTree();
	void insert(int newVal);
	void print(treeNode root);
	int min(treeNode *root);
	int max();
	float average(treeNode *root);
private:
	treeNode *root;
	void insert(int newVal, treeNode *current);
};

