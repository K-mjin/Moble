using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    partial class MyClass
    {
        public void Method1()
        {
            Console.WriteLine("Method1");
        }
        public void Method2()
        {
            Console.WriteLine("Method2");
        }
    }
    partial class MyClass
    {
        public void Method3()
        {
            Console.WriteLine("Method3");
        }
        public void Method4()
        {
            Console.WriteLine("Method4");
        }
    }
    internal class mEx18
    {
        static void Main(string[] args)
        {
            MyClass myClass = new MyClass();
            myClass.Method1();
            myClass.Method2();
            myClass.Method3();
            myClass.Method4();
        }
    }
}
