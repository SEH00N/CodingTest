#include <iostream>

#include <vector>
#include <unordered_map>
#include <algorithm>

struct Song {
public:
    Song(std::string genre, int plays, int id) : genre{ genre }, plays{ plays }, id {id} {}

public:
    std::string genre;
    int plays;
    int id;
};

bool cmp(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

bool songCmp(const Song& left, const Song& right) {
    return left.plays > right.plays;
}

std::vector<int> solution(std::vector<std::string> genres, std::vector<int> plays) {
    std::vector<int> answer;

    std::unordered_map<std::string, int> chart;
    std::unordered_map<std::string, std::vector<Song>> songs;

    for (int i = 0; i < genres.size(); ++i)
    {
        std::string genre = genres[i];
        int play = plays[i];

        if (chart.find(genre) == chart.end())
            chart.insert({ genre, 0 });
        chart[genre] += play;

        if (songs.find(genre) == songs.end())
            songs.insert({ genre, std::vector<Song>() });
        songs[genre].push_back(Song{ genre, play, i });
    }

    std::vector<std::pair<std::string, int>> chartVec(chart.begin(), chart.end());

    std::sort(chartVec.begin(), chartVec.end(), cmp);
    for (const auto& i : chartVec)
    {
        std::vector<Song>& list = songs[i.first];
        std::sort(list.begin(), list.end(), songCmp);

        for (int j = 0; j < 2; ++j)
            if(list.size() >= j + 1)
               answer.push_back(list[j].id);
    }

    return answer;
}

int main()
{
    auto a = solution({ "classic", "pop", "classic", "classic", "pop" }, { 500, 600, 150, 800, 2500 });
    for (int i = 0; i < a.size(); ++i)
        std::cout << a[i] << '\n';

    return 0;
}

//#include <vector>
//
//std::string solution(std::string my_string, std::string letter) {
//	while (true)
//	{
//		size_t i = my_string.find(letter);
//		if (i == std::string::npos)
//			break;
//
//		my_string.erase(i, 1);
//	}
//
//	return my_string;
//}

//#include <vector>
//#include <unordered_map>
//
//int solution(std::vector<std::vector<std::string>> clothes) {
//    int answer = 1;
//
//    std::unordered_map<std::string, int> closet;
//
//    for (int i = 0; i < clothes.size(); ++i)
//    {
//        std::string type = clothes[i][1];
//
//        if (closet.find(type) == closet.end())
//            closet.insert({ type, 1 });
//
//        closet[type]++;
//    }
//
//    for (auto i = closet.begin(); i != closet.end(); ++i)
//        answer *= i->second;
//
//    return answer - 1;
//}
//
//#include <unordered_set>
//
//int main()
//{
//	int count;
//	std::cin >> count;
//
//	std::unordered_set<std::string> inven;
//	std::string character;
//
//	for(int i = 0; i < count; ++i)
//	{
//		std::cin >> character;
//		inven.insert(character);
//	}
//
//	std::cin >> count;
//
//	for (int i = 0; i < count; ++i)
//	{
//		std::cin >> character;
//		if (inven.find(character) != inven.end())
//			inven.erase(character);
//	}
//
//	std::cout << inven.size() << '\n';
//	for (auto i = inven.begin(); i != inven.end(); ++i)
//		std::cout << *i << '\n';
//
//	return 0;
//}