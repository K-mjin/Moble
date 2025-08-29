using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx8 // 호출한 곳으로 돌아가는 예제
    {
        static void printGugudan(int dan)
        {
            if(!(2<=dan && dan <= 9))
            {
                return;
            }
            for (int i = 1; i <= 9; i++)
            {
                Console.WriteLine($"{dan} * {i} = {dan * i}");
            }
            return; // 반환 타입이 void. 생략 가능
        }
        static void Main(string[] args)
        {
            printGugudan(9);
        }
    }
}
