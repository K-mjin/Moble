using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    class Dog
    {
        public virtual void Bark()
        {
            Console.WriteLine("멍멍");
        }
    }
    class Pudle : Dog
    {
        public override void Bark()
        {
                Console.WriteLine("왈왈");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Pudle pd = new Pudle();
            pd.Bark();

            Dog dog1 = new Dog();
            dog1.Bark();

            Dog dog2 = new Pudle(); // 자식이 부모로 위장
            dog2.Bark();
        }
    }
}
