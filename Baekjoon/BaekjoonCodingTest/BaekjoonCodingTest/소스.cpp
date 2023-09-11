#include <string>
#include <vector>
#include <queue>
#include <unordered_map>

bool condition(std::string from, std::string to) {
    int difference = 0;

    for (int i = 0; i < from.length(); ++i)
        if (from[i] != to[i])
            difference++;

    return (difference == 1);
}

int solution(std::string begin, std::string target, std::vector<std::string> words) {
	std::queue<std::string> reservation;
	std::unordered_map<std::string, int> visited;
    
    reservation.push(begin);
    visited[begin] = 0;

    while (reservation.empty() == false)
    {
        std::string now = reservation.front();
        reservation.pop();

        for (int i = 0; i < words.size(); ++i)
        {
            std::string next = words[i];

            if (visited.find(next) != visited.end())
                continue;

            if (condition(now, next) == false)
                continue;

            reservation.push(next);
            visited[next] = visited[now] + 1;

            if (next == target)
                return visited[next];
        }
    }

    return 0;
}
