using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Transactions;

namespace ConsoleApp_0722
{
    internal class Test_3
    {
        static void Swap(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        static void Main(string[] args)
        {
            Console.WriteLine("정수 2개 입력");
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());

            Console.WriteLine($"Swap이 일어나기 전 a = {a}, b = {b}");
            Swap(ref a, ref b);
            Console.WriteLine($"Swap이 일어난 후 a = {a}, b = {b}");

        }
    }
}
