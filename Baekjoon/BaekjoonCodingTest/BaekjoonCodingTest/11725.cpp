#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

class TreeNode
{
public:
	TreeNode() { TreeNode(0); }
	TreeNode(int value) : value{ value }, nodes{ std::vector<TreeNode*>() } {}

public:
	int value;

public:
	std::vector<TreeNode*> nodes;

public:
	void Insert(TreeNode* node) { nodes.push_back(node); }
};

void BFS(int* visited, TreeNode* root)
{
	for (int i = 0; i < root->nodes.size(); ++i)
	{
		TreeNode* next = root->nodes[i];
		
		if (visited[next->value - 1] != -1)
			continue;

		visited[next->value - 1] = root->value;
		BFS(visited, next);
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::unordered_map<int, TreeNode*> nodes;

	TreeNode* root = new TreeNode(1);
	nodes.insert({ 1, root });

	int nodeCount;
	std::cin >> nodeCount;

	for (int i = 0; i < nodeCount - 1; ++i)
	{
		int left, right;
		std::cin >> left >> right;

		TreeNode *leftNode, *rightNode;

		if (nodes.find(left) == nodes.end())
		{
			leftNode = new TreeNode(left);
			nodes.insert({ left, leftNode });
		}
		else
			leftNode = nodes[left];
		
		if (nodes.find(right) == nodes.end())
		{
			rightNode = new TreeNode(right);
			nodes.insert({ right, rightNode });
		}
		else
			rightNode = nodes[right];

		leftNode->Insert(rightNode);
		rightNode->Insert(leftNode);
	}

	int* visited = new int[nodeCount];
	std::fill(visited, visited + nodeCount, -1);

	BFS(visited, root);

	for (int i = 1; i < nodeCount; ++i)
		std::cout << visited[i] << '\n';

	return 0;
}