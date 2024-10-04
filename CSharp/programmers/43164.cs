using System.Collections.Generic;

namespace CSharp.Programmers;

class Solution43164
{
    // static void Main(string[] args)
    // {
    //     Solution43164 solution = new Solution43164();

    //     {
    //         string[] answer = solution.Solution(new string[,] {
    //             { "ICN", "JFK" }, 
    //             { "HND", "IAD" }, 
    //             { "JFK", "HND" }
    //         });

    //         foreach(string str in answer)
    //             Console.Write($"{str} ");
    //     }

    //     Console.WriteLine("");

    //     {
    //         string[] answer = solution.Solution(new string[,] {
    //             { "ICN", "SFO" }, 
    //             { "ICN", "ATL" }, 
    //             { "SFO", "ATL" }, 
    //             { "ATL", "ICN" }, 
    //             { "ATL", "SFO" }
    //         });

    //         foreach(string str in answer)
    //             Console.Write($"{str} ");
    //     }

    //     Console.WriteLine("");

    //     {
    //         // "만일 가능한 경로가 2개 이상일 경우 알파벳 순서가 앞서는 경로를 return 합니다." 해당 조건만을 보고 무작정 정렬 후 순서대로 티켓을 사용하게 된다면
    //         // 모든 티켓을 사용헤야 한다는 조건을 만족시키지 못한 채 종착지로 향하는 티켓을 사용하는 경우가 생길 수 있음.

    //         string[] answer = solution.Solution(new string[,] {
    //             { "ICN", "ABC" },
    //             { "ICN", "BCA" },
    //             { "BCA", "HDD" },
    //             { "HDD", "ICN" }
    //         });

    //         // 다음과 같은 테스트케이스의 경우 무조건 정렬 후 순서대로 방문한다면 ICN -> ABC 로 끝나게 됨
    //         // 하지만 모든 티켓을 사용해야 한다는 조건을 만족시켜 ICN -> BCA -> HDD -> ICN -> ABC 로 끝나게 해야함

    //         // 한 번의 검증 과정을 추가하여 조건을 검사하자

    //         foreach(string str in answer)
    //             Console.Write($"{str} ");
    //     }

    //     Console.WriteLine("");

    //     {
    //         string[] answer = solution.Solution(new string[,] {
    //             { "EZE", "TIA" }, { "EZE", "HBA" }, { "AXA", "TIA" }, { "ICN", "AXA" }, 
    //             { "ANU", "ICN" }, { "ADL", "ANU" }, { "TIA", "AUA" }, { "ANU", "AUA" }, 
    //             { "ADL", "EZE" }, { "ADL", "EZE" }, { "EZE", "ADL" }, { "AXA", "EZE" }, 
    //             { "AUA", "AXA" }, { "ICN", "AXA" }, { "AXA", "AUA" }, { "AUA", "ADL" }, 
    //             { "ANU", "EZE" }, { "TIA", "ADL" }, { "EZE", "ANU" }, { "AUA", "ANU" }
    //          });

    //         foreach(string str in answer)
    //             Console.Write($"{str} ");
    //     }

    //     Console.WriteLine("");
    // }

    class Destination
    {
        public string destination = "";
        public bool visited = false;

        public Destination(string destination)
        {
            this.destination = destination;
        }
    }

    public string[] Solution(string[,] tickets) 
    {
        Dictionary<string, List<Destination>> ticketMap = new Dictionary<string, List<Destination>>();

        int ticketCount = tickets.GetLength(0);
        for (int i = 0; i < ticketCount; ++i)
        {
            string from = tickets[i, 0];
            string to = tickets[i, 1];

            if(ticketMap.ContainsKey(from) == false)
                ticketMap.Add(from, new List<Destination>());

            ticketMap[from].Add(new Destination(to));
        }

        foreach(string key in ticketMap.Keys)
            ticketMap[key].Sort((x, y) => x.destination.CompareTo(y.destination));

        List<string> destinations = new List<string>();
        
        destinations.Add("ICN");
        Visit("ICN", ticketMap, destinations);

        return destinations.ToArray();
    }

    private bool Visit(string airport, Dictionary<string, List<Destination>> ticketMap, List<string> destinations)
    {
        // 더 이상 이동할 곳이 없는지 확인
        bool isStucked = ticketMap.ContainsKey(airport) == false;
        if(isStucked == false)
        {
            isStucked = true;
            foreach(Destination i in ticketMap[airport])
            {
                if(i.visited == false)
                {
                    isStucked = false;
                    break;
                }
            }
        }

        // 더 이상 이동할 수 있는 곳이 없는 경우 모든 티켓이 사용되었나 확인
        if(isStucked)
        {
            foreach(string key in ticketMap.Keys)
            {
                foreach(Destination i in ticketMap[key])
                {
                    if(i.visited == false)
                        return false;
                }
            }

            return true;
        }

        for(int i = 0; i < ticketMap[airport].Count; ++i)
        {
            Destination destination = ticketMap[airport][i];
            if(destination.visited)
                continue;

            destinations.Add(destination.destination);
            destination.visited = true;

            if(Visit(destination.destination, ticketMap, destinations))
                return true;

            // 더 이상 갈 곳이 없지만 모든 티켓이 사용되지 않았다면 잘못 된 길이라 판단.
            // 재귀를 되돌아가며 visited를 번복함

            int index = destinations.FindLastIndex(j => j == destination.destination);
            destinations.RemoveAt(index);
            destination.visited = false;

            continue;
        }

        // 모든 경우의 수를 판별해보았지만 이동하지 못한 경우 잘못된 길로 들어선 것이라 판단.
        // visited를 번복하기 위해 false 반환
        return false;
    }
}