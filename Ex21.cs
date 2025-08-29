using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class Ex21
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Abs : " + Math.Abs(-52273)); // 절대값을 구함
            Console.WriteLine("Ceiling : " + Math.Ceiling(52.273)); // 지정된 숫자보다 크거나 같은 최소 정수 구함
            Console.WriteLine("Floor : " + Math.Floor(52.273)); // 지정된 숫자보다 작거나 같은 최대 정수 구함
            Console.WriteLine("Max : " + Math.Max(52, 273));    // 두 개의 매개변수 중에서 큰 값을 구함
            Console.WriteLine("Min : " + Math.Min(52, 273));    // 두 개의 매개변수 중에서 작은 값을 구함
            Console.WriteLine("Round : " + Math.Round(52.273));     // 반올림 함
        }
    }
}
