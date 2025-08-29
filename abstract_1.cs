using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    public abstract class Animal
    {
        public abstract void Sound();
    }
    public class Dog : Animal
    {
        public override void Sound()
        {
            Console.WriteLine("왈왛ㄹ");
        }
    }
    public class Cat: Animal
    {
        public override void Sound()
        {
            Console.WriteLine("야옹");
        }
    }
    internal class Class8
    {
        static void Main(string[] args)
        {
            Animal dog = new Dog();
            //Animal dog = new Animal(); 추상클래스는 인스턴스 생성 불가능
            dog.Sound();
            Animal Cat = new Cat();
            Cat.Sound();
        }
    }
}
