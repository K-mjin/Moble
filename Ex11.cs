using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0718
{
    internal class Ex11
    {
        class MyMath
        {
            public static double PI = 3.142592;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(MyMath.PI);   // 인스턴스 만드는 과정이 생략됨
        }                                   // 클래스 변수를 그대로 적어 출력할 수 있음
    }
}
