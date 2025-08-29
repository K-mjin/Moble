using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    class Parent
    {
        public Parent() { Console.WriteLine("부모 생성자"); }
        //protected string name = "부모";
    }
    class Child : Parent
    {
        public string name = "자식";
        public Child() : base()
        {
            Console.WriteLine("자식 생성자");
            //Console.WriteLine("base.name = {0}", base.name);
            //Console.WriteLine("this.name = {0}", this.name);
        }
    }
    internal class Ex9_1
    {
        static void Main(string[] args)
        {
            Child childobj = new Child();
        }
    }
}
