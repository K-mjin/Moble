using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp_0724
{
    internal class Program
    {
        class ThreadParam
        {
            public int value1;
            public int value2;
        }
        static void Main(string[] args)
        {
            ThreadParam param = new ThreadParam();
            param.value1 = 10;
            param.value2 = 20;

            Thread t = new Thread(WriteY);
            t.Start(param);
            t.Join();
            Console.WriteLine("메인 스레드 종료");
        }
        private static void WriteY(object obj)
        {
            ThreadParam param2 = (ThreadParam)obj;
            Console.WriteLine("{0}, {1}", param2.value1, param2.value2 );
            Thread.Sleep(100);
        }
    }
}
