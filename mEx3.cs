using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx3
    {
        class Test
        {
            public int Power(int x)
            {
                return x * x;
            }
        }

        static void Main(string[] args)
        {
            Test test = new Test();
            Console.WriteLine("정수 한개 입력하시오");
            int x = int.Parse(Console.ReadLine());
            Console.WriteLine("결과 : " + test.Power(x));
        }
    }
}
