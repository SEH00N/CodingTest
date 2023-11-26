#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

std::vector<int> solution(std::vector<std::string> id_list, std::vector<std::string> report, int k)
{
	std::unordered_map <std::string, std::unordered_set<std::string>> userMap;
	std::unordered_map <std::string, int> mailMap;

	std::stringstream ss;
	std::string reporter, other;
	for (auto i : report)
	{
		ss.clear();
		ss << i;
		ss >> reporter >> other;
		userMap[other].insert(reporter);
	}

	for (auto i : id_list)
		if (userMap[i].size() >= k)
			for (auto j : userMap[i])
				mailMap[j]++;

	std::vector<int> answer(id_list.size());
	for (int i = 0; i < id_list.size(); i++)
		answer[i] = mailMap[id_list[i]];

	return answer;
}