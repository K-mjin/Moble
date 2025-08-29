using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class Class5
    {
        public static void DivideOut(int a, int b, out int c, out int d)
        {
            c = a / b;
            d = a % b;
        }
        static void Main(string[] args)
        {
            Console.WriteLine("두개의 정수 입력");
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c, d;
            DivideOut(a, b, out c, out d);
            Console.WriteLine($"몫 : {c}, 나머지 : {d}");
        }
    }
}
