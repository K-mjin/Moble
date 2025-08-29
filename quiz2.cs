using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0718
{
    internal class quiz2
    {
        static void Main(string[] args)
        {
            //Console.WriteLine(DateTime.Now.Hour.ToString());

            if (DateTime.Now.Hour < 11)
                Console.WriteLine("아침 먹을 시간입니다.");
            else if (DateTime.Now.Hour < 15)
                Console.WriteLine("점심 먹을 시간입니다.");
            else
                Console.WriteLine("저녁 먹을 시간입니다.");
            
        }
    }
}
