using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    internal class Throw
    {
        static void DoSomething()
        {
            Random random = new Random();
            int num = random.Next(0,100);

            if (num < 80)
                Console.WriteLine($"현재 온도는 {num}입니다.");
            else
                throw new Exception($"위험! 온도가 높습니다. : {num}");
        }
        static void Main(string[] args)
        {
            try
            {
                while (true)
                {
                    DoSomething();
                    System.Threading.Thread.Sleep(1000);    // 1초 지연
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
            finally
            {
                Console.WriteLine("시스템을 종료합니다.");
            }
        }
    }
}
