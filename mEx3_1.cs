using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx3_1
    {
        class MyMath
        {
            public static int Abs(int input)
            {
                if (input < 0)
                {
                    return -input;
                }
                else
                {
                    return input;
                }
            }
        }
        class Program
        {
            static void Main(string[] args)
            {
                Console.WriteLine(MyMath.Abs(52));
                Console.WriteLine(MyMath.Abs(-273));
            }
        }
    }
}
