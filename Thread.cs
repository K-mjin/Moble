using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;

namespace ConsoleApp_0724
{
    internal class Program
    {
        static void Main (string[] args)
        {
            Thread t = new Thread(WriteY);

            t.Start(10);    // 스레드 호출시 매개변수 전달 방식
            //t.Join();

            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine("메인 스레드 : " + (i + 1));
                Thread.Sleep(100);
            }
            Console.WriteLine("메인 스레드 종료");
        }
        private static void WriteY(object obj)
        {
            int num = (int)obj; // object로 받아서 형변환하여 사용
            for (int i = 0; i < num; i++)
            {
                Console.WriteLine("스레드 : " + (i + 1));
                Thread.Sleep(100);
            }
        }
    }
}
