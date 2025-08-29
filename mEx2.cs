using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx2 // 메서드를 구성하여 표현, 아무것도 반환하지 않는 메서드를 사용할 경우 반환형의 위치에서 void를 적어주면 됨
    {
        static void Plus(int a, int b)
        {
            int result = a + b;
            Console.WriteLine($"input : {a}, {b}, result : {result}");
        }
        static void Main(string[] args)
        {
            Plus(3, 4);
            Plus(5, 6);
            Plus(7, 8);
        }
    }
}
