using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    class Cat
    {
        public string Name;
        public string Color;

        public void Meow()
        {
            Console.WriteLine("{0} : 야옹", Name);
            Console.WriteLine("{0} : {1}", Name, Color);
        }
    }
    internal class Ex1
    {
        static void Main(string[] args)
        {
            Cat cat1 = new Cat();
            cat1.Name = "키티";
            cat1.Color = "하얀색";
            cat1.Meow();
           // Console.WriteLine("{0} : 하얀색", cat1.Name);

            Cat cat2 = new Cat();
            cat2.Name = "네로";
            cat2.Color = "검은색";
            cat2.Meow();
           // Console.WriteLine("{0} : 검은색", cat2.Name);
        }
    }
}
