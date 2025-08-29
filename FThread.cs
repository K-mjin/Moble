using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;

namespace ConsoleApp_0724
{
    internal class Program
    {
        static bool myFlag = false;
        static void Main(string[] args) 
        {
            Thread t = new Thread(Func);
            t.Start();

            for (int i = 0; i < 3; i++) 
            {
                Console.WriteLine(i + 1);
                Thread.Sleep(100);
            }
            myFlag = true;
            Console.WriteLine("메인스레드 종료");
        }
        private static void Func()
        {
            while (true)
            {
                if (myFlag)
                {
                    Console.WriteLine("폴링 성공");
                }
                Thread.Sleep(100);
            }
        }
    }
}
