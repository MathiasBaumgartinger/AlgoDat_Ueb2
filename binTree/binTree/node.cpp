
#include <fstream>
#include <string>
#include <iostream>
#include "node.h"

using namespace std;

/*binTree::binTree()
{
	root = NULL;
}*/

void binTree::insert(int newVal)
{
    if(root != NULL)
    {
        binTree::insert(newVal, root);
    }
    else
    {
        root->data = newVal;
    }

}

void binTree::insert(int newVal, treeNode *current)
{

	if (newVal > current->data) // GO RIGHT
	{
		if (current->right != NULL)
		{
			insert(newVal, current->right);
		}
		else // NO HIGHER VALUE, SET NEW NODE
		{
			current->right = new treeNode;
			current->right->data = newVal;
			current->right->left = NULL;
			current->right->right = NULL;
		}
	}
	else if (newVal < current->data) // GO LEFT
	{
		if (current->left != NULL)
		{
			insert(newVal, current->left);
		}
		else // NO LOWER VALUE, SET NEW NODE
		{
			current->left = new treeNode;
			current->left->data = newVal;
			current->left->left = NULL;
			current->left->right = NULL;
		}
	}
	else  // Same data => No new entry
	{
		return;
	}
}

int binTree::min(treeNode *root)
{
	treeNode temp = root;
	while (temp->left != nullptr)
	{
		temp = temp->left;
	}
	int min = temp->data;

	return min;
}

int binTree::max()
{
	treeNode temp = root;
	while (temp->right != nullptr)
	{
		temp = temp->right;
	}
	int max = temp->data;

	return max;
}

float binTree::average(treeNode *root)
{
	treeNode temp = root;
	float average;
	int counter;

	while (temp->left != nullptr)
	{
		temp = temp->left;
	}

}