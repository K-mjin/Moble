using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class Class2   // 참조에 의한 매개변수 전달 키워드 : ref
    {
        static void swap(ref int input)
        {
            input = 20;
        }
        static void Main(string[] args)
        {
            int a = 10;
            Console.WriteLine($"Swap이 일어나기 전 = {a}");
            swap(ref a);
            Console.WriteLine($"Swap이 일어난 후 = {a}");
        }
    }
}
