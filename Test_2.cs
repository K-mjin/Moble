using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    class Four
    {
        public static int Quadrant4(int a, int b)
        {
            int num = 0;

            if (a > 0 && b > 0)
                num = 1;
            else if (a < 0 && b > 0)
                Console.WriteLine("2사분면입니다.");
            else if (a < 0 && b < 0)
                Console.WriteLine("3사분면입니다.");
            else if (a > 0 && b < 0)
                Console.WriteLine("4사분면입니다.");
            else
                Console.WriteLine("0사분면입니다.");
            return num;
        }
    }
    internal class Test_2
    {
        static void Main(string[] args)
        {
            Console.WriteLine("x축을 입력하세요");
            int x = int.Parse(Console.ReadLine());
            Console.WriteLine("y축을 입력하세요");
            int y = int.Parse(Console.ReadLine());

            Four.Quadrant4(x, y);
            Console.WriteLine("{0}사분면입니다.", Four.Quadrant4(x, y));
        }
    }
}
