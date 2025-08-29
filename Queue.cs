using System;
using System.Collections;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    class Program
    {
        static void Main(string[] args)
        {
            Queue que = new Queue();

            que.Enqueue(1);
            que.Enqueue(2);
            que.Enqueue(3);
            que.Enqueue(4);
            que.Enqueue(5);

            while (que.Count > 0)
                Console.Write("{0} ", que.Dequeue());   // 선입선출
        }
    }
}
