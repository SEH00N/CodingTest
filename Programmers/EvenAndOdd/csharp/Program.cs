using System;

namespace csharp
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            for(int i = 0; i < 10; i ++)
                Console.WriteLine("Input Number : " + i + " | " + solution(i));
        }

        public static string solution(int num)
        {
            string answer = "";

            answer = num % 2 == 0 ? "Even" : "Odd";

            return answer;
        }
    }
}
