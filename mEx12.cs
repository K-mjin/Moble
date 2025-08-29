using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx12
    {
        static void PrintProfile(string name, string phone)
        {
            Console.WriteLine("Name:{0}, phone:{1}", name, phone);
        }
        static void Main(string[] args)
        {
            PrintProfile(name: "박찬호", phone: "010-123-4567");
            PrintProfile(phone: "010-123-4567", name: "박지성");   // 순서를 바꿔도 제대로 출력
            PrintProfile("손흥민", "010-123-1234");
            PrintProfile("류현진", phone: "010-123-4567");
        }
    }
}
