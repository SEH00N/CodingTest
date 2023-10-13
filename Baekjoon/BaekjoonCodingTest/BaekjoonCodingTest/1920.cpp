#include <iostream>
#include <algorithm>

//bool BinaryFind(int* list, int left, int right, int target)
//{
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//
//		if (*(list + middle) == target)
//			return true;
//		else if (*(list + middle) < target)
//			left = middle + 1;
//		else if (*(list + middle) > target)
//			right = middle - 1;
//	}
//
//	return false;
//}

bool BinaryFind(int* list, int left, int right, int target)
{
	if (left > right)
		return false;

	int middle = (left + right) / 2;

	if (*(list + middle) == target)
		return true;
	else if(*(list + middle) < target)
		return BinaryFind(list, middle + 1, right, target);
	else if (*(list + middle) > target)
		return BinaryFind(list, left, middle - 1, target);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int listCnt;
	std::cin >> listCnt;

	int* list = new int[listCnt];

	for (int i = 0; i < listCnt; ++i)
		std::cin >> *(list + i);

	std::sort(list, list + listCnt);

	int queueCnt;
	std::cin >> queueCnt;

	for (int i = 0; i < queueCnt; ++i)
	{
		int target;
		std::cin >> target;
		std::cout << BinaryFind(list, 0, listCnt - 1, target) << '\n';
	}

	return 0;
}