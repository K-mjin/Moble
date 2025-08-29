using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0718
{
    class Global
    {
        public static int Count = 0;
    }

    class ClassA
    {
        public ClassA()
        {
            Global.Count++;
        }
    }

    class ClassB
    {
        public ClassB()
        {
            Global.Count++;
        }
    }

    internal class Ex12
    {
        static void Main(string[] args)
        {
            Console.WriteLine($"Global.Count : {Global.Count}");

            new ClassA();
            new ClassA();
            new ClassB();
            new ClassB();
            Console.WriteLine($"Global.Count : {Global.Count}");
        }
    }
}
