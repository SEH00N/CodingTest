#include <iostream>

class TreeNode
{
public:
	TreeNode() { TreeNode(0); }
	TreeNode(int value) : value{ value }, left{ nullptr }, right{ nullptr } {}

public:
	int value;

public:
	TreeNode* left;
	TreeNode* right;

public:
	void PreOrder()
	{
		std::cout << value << '\n';

		if (left != nullptr)
			left->PreOrder();

		if (right != nullptr)
			right->PreOrder();
	}

	void PostOrder()
	{
		if (left != nullptr)
			left->PostOrder();

		if (right != nullptr)
			right->PostOrder();

		std::cout << value << '\n';
	}

	void InOrder()
	{
		if (left != nullptr)
			left->InOrder();

		std::cout << value << '\n';

		if (right != nullptr)
			right->InOrder();
	}
};

class BinarySearchTree
{
private:
	TreeNode* root = nullptr;

public:
	void PreOrder() { root->PreOrder(); }
	void InOrder() { root->InOrder(); }
	void PostOrder() { root->PostOrder(); }

public:
	void Insert(const int value)
	{
		TreeNode* node = new TreeNode(value);
		if (root == nullptr)
			root = node;
		else
			Insert(root, node);
	}

private:
	void Insert(TreeNode* parent, TreeNode* child)
	{
		if (parent->value > child->value) // ¿À¸¥ÂÊ
		{
			if (parent->left == nullptr)
				parent->left = child;
			else
				Insert(parent->left, child);
		}
		else // ¿ÞÂÊ
		{
			if (parent->right == nullptr)
				parent->right = child;
			else
				Insert(parent->right, child);
		}
	}
};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	BinarySearchTree tree;

	int value;
	while (std::cin >> value)
	{
		if (value == -1)
			break;

		tree.Insert(value);
	}

	tree.PostOrder();

	return 0;
}