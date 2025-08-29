using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class Ex15 // Random 클래스를 사용해서 10과 100 사이의 임의의 정수 생성
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine(random.Next(10,100));
            }
        }
    }
}
