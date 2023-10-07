#include <iostream>
#include <list>
#include <unordered_map>

struct TreeNode
{
public:
	TreeNode(char value) : left{ nullptr }, right{nullptr}, value { value }
	{
		
	}

public:
	TreeNode* left;
	TreeNode* right;
	char value;
};

void PreOrder(TreeNode* treeRoot)
{
	if (treeRoot == nullptr)
		return;

	std::cout << treeRoot->value;
	PreOrder(treeRoot->left);
	PreOrder(treeRoot->right);
}
void InOrder(TreeNode* treeRoot)
{
	if (treeRoot == nullptr)
		return;

	InOrder(treeRoot->left);
	std::cout << treeRoot->value;
	InOrder(treeRoot->right);
}
void PostOrder(TreeNode* treeRoot)
{
	if (treeRoot == nullptr)
		return;

	PostOrder(treeRoot->left);
	PostOrder(treeRoot->right);
	std::cout << treeRoot->value;
}

int main()
{
	TreeNode* treeRoot = nullptr;
	std::unordered_map<char, TreeNode*> nodes;

	int cnt;
	std::cin >> cnt;

	for (int i = 0; i < cnt; ++i)
	{
		char root, left, right;
		std::cin >> root >> left >> right;

		if (treeRoot == nullptr)
		{
			nodes[root] = new TreeNode(root);
			treeRoot = nodes[root];
		}		
		if (left != '.')
		{
			nodes[left] = new TreeNode(left);
			nodes[root]->left = nodes[left];
		}
		if (right != '.')
		{
			nodes[right] = new TreeNode(right);
			nodes[root]->right = nodes[right];
		}
	}

	PreOrder(treeRoot);
	std::cout << '\n';
	InOrder(treeRoot);
	std::cout << '\n';
	PostOrder(treeRoot);

	return 0;
}