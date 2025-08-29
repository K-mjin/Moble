using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx11
    {
        static int Sum(params int[] args)   // params  키워드 때문에 가변길이 매개변수를 자유롭게 바꾸며 사용 가능
        {
            Console.Write("Summing...");
            int sum = 0;

            for (int i = 0; i < args.Length; i++)
            {
                if (i > 0)
                    Console.Write(", ");
                Console.Write(args[i]);
                sum += args[i];
            }
            Console.WriteLine();
            return sum;
        }
        static void Main(string[] args)
        {
            int sum = Sum( 8, 9, 10, 11, 12, 13);
            Console.WriteLine($"Sum : {sum}");
        }
    }
}
