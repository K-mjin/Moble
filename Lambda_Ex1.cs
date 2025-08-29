using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0724
{
    internal class Lambda_Ex1
    {
        static void Main(string[] args)
        {
            List<int> numbers = new List<int> { 1, 2, 3, 4, 5, 6 };

            var evenNumbers = numbers.Where(n => n % 2 == 0);
            Console.WriteLine("짝수 목록: ");

            foreach (var number in evenNumbers)
            {
                Console.WriteLine(number);
            }
        }
    }
}
