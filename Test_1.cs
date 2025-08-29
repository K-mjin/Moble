using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{   /* 메소드 오버로딩을 이용하여 다음의 결과가 도출되도록 메소드를
     선언하고 코드를 완성하시오. */
    internal class Test_1
    {
        public static int Plus(int a, int b)
        {
            Console.WriteLine("Calling int Plus(int,int)");
            return a + b;
        }
        public static int Plus(int a, int b, int c)
        {
            Console.WriteLine("Calling int Plus(int,int,int)");
            return a + b + c;
        }
        public static double Plus(double a, double b) 
        {
            Console.WriteLine("Calling int Plus(double,double)");
            return a + b; 
        }
        public static double Plus(int a, double b)
        {
            Console.WriteLine("Calling int Plus(int,double)");
            return a + b;
        }
        static void Main(string[] args)
        {
            Console.WriteLine(Plus(1, 2));
            Console.WriteLine(Plus(1, 2, 3));

            Console.WriteLine(Plus(1.0, 2.4));
            Console.WriteLine(Plus(1, 2.4));
        }
    }
}
