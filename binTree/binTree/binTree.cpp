// binTree.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"

#include <fstream>
#include <string>
#include <iostream>
#include "node.h"

using namespace std;

int main()
{
	string fileDirectory;
	string stringData;

	cout << "Type in the filename you want to open: " << endl;
	cin >> fileDirectory;

	binTree tree;


	ifstream file(fileDirectory + ".txt"); //adding .txt because this is the format we expect
	if (!file.is_open())
	{
		cerr << "ERROR: File not opened" << endl;
	}
	else
	{
		while (stringData != "")
		{
			getline(file, stringData, '\n');
			//tree.insert(stoi(stringData));
			
		}
	}
	
	
	return 0;
}

void binTree::insert(int newVal)
{
	if (root != NULL)
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

int binTree::min()
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
