using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx13    // 선택적 매개변수
    {
        static void PrintProfile(string name, string phone = "")
        {
            Console.WriteLine("Name:{0}, Phone:{1}", name, phone);
        }
        static void Main(string[] args)
        {
            PrintProfile("태연");
            PrintProfile("윤아", "010-123-1234");
            PrintProfile(name: "유리");
            PrintProfile(name: "서현", phone: "010-789-7890");
        }
    }
}
