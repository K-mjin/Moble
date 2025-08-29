using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    internal class Ch9_16
    {
        class Mammal
        {
            public void Nurse()
            {
                Console.WriteLine("Nurse()");
            }
        }
        class Dog : Mammal
        {
            public void Bark()
            {
                Console.WriteLine("Bark()");
            }
        }
        class Cat : Mammal
        {
            public void Meow()
            {
                Console.WriteLine("Meow()");
            }
        }
        class Program
        {
            static void Main(string[] args)
            {
                Mammal mammal = new Dog();
                Mammal mammal2 = new Cat();

                Dog dog;
                if (mammal is Dog)
                {
                    dog = (Dog)mammal;
                    dog.Bark();
                }

                Cat cat = mammal2 as Cat;
                if (cat != null)
                    cat.Meow();

                Cat cat2 = mammal as Cat;
                if (cat2 != null)
                    cat2.Meow();
                else
                    Console.WriteLine("cat2 is null");
            }
        }
    }
}
