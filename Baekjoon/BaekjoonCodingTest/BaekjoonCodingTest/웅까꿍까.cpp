#include <vector>
#include <algorithm>

struct TreeNode
{
public:
	TreeNode(int value) : left{ nullptr }, right{ nullptr }, value{ value } {}

public:
	TreeNode* left;
	TreeNode* right;
	int value;
};

TreeNode* CreateTree(std::vector<std::vector<int>>& nodeinfo, int begin, int end)
{
	if (begin > end)
		return nullptr;

	int current = begin;
	int maxHeight = nodeinfo[current][1];

	for (int i = begin; i < end; ++i)
	{
		if (nodeinfo[i][1] > maxHeight)
		{
			maxHeight = nodeinfo[i][1];
			current = i;
		}
	}

	TreeNode* node = new TreeNode(nodeinfo[current][2]);
	node->left = CreateTree(nodeinfo, begin, current - 1);
	node->right = CreateTree(nodeinfo, current + 1, end);
}

void PreOrder(std::vector<std::vector<int>>& answer, TreeNode* node)
{
	if (node == nullptr)
		return;

	answer[0].push_back(node->value);
	PreOrder(answer, node->left);
	PreOrder(answer, node->right);
}

void PostOrder(std::vector<std::vector<int>>& answer, TreeNode* node)
{
	if (node == nullptr)
		return;

	PostOrder(answer, node->left);
	PostOrder(answer, node->right);
	answer[1].push_back(node->value);
}

std::vector<std::vector<int>> solution(std::vector<std::vector<int>> nodeinfo) {
    std::vector<std::vector<int>> answer;
	
	for (int i = 0; i < nodeinfo.size(); ++i)
		nodeinfo[i][2] = i + 1;

	std::sort(nodeinfo.begin(), nodeinfo.end());

    TreeNode* treeRoot = CreateTree(nodeinfo, 0, nodeinfo.size() - 1);

	answer.resize(2, std::vector<int>());

	PreOrder(answer, treeRoot);
	PostOrder(answer, treeRoot);

    return answer;
}
