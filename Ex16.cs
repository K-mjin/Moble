using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class Ex15 // 원하는 범위의 실수 난수 생성 : 소수점 자리 이동하기
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            for (int i = 0; i < 5; i++)
            {
                double r1 = Math.Round(random.NextDouble(),1);
                Console.WriteLine(r1);
            }
        }
    }
}