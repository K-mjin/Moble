using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    internal class Ex9
    {
        class Parent
        {
            public Parent() { Console.WriteLine("1_Parent()"); }
            public Parent(int param) { Console.WriteLine("{0}:{1}","2_Parent", param); }
            public Parent(string param) { Console.WriteLine("{0}:{1}","3_Parent", param); }
        }
        class Child : Parent
        {
            public Child() : base()
            {
                Console.WriteLine("1_Child() : base()");
            }
            public Child(int a) : base(a)
            {
                Console.WriteLine("{0}:{1}", "2_Child(int a)->base", a);
            }
            public Child(string input): base(input)
            {
                Console.WriteLine("{0}:{1}","3_Child(string input)->base",input);
            }
        }
        static void Main(string[] args)
        {
            Child childB = new Child();
            Child childC = new Child(10);
            Child childD = new Child("string");
        }
    }
}
