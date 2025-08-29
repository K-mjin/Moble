using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    class Program
    {
        class Fruit : IComparable
        {
            string name;
            int price;

            public Fruit(string name, int price)
            {   // 생성자
                this.name = name;
                this.price = price;
            }

            public int CompareTo(object obj)
            {   // 비교 메서드 (가격 비교)
                Fruit fruit = (Fruit)obj;
                return this.price.CompareTo(fruit.price);
            }
            public override string ToString()
            {   // ToString()
                return string.Format("과일명 : {0} 가격 : {1}", this.name, this.price);
            }
        }
        static void Main(string[] args)
        {
            ArrayList list = new ArrayList();
            list.Add(new Fruit("Apple", 100));
            list.Add(new Fruit("Kiwi", 500));
            list.Add(new Fruit("Orange", 300));
            list.Add(new Fruit("Banana", 50));
            list.Add(new Fruit("Watermelon", 800));
            list.Add(new Fruit("cherry", 10));

            list.Sort();
            foreach (Fruit fruit in list)
                Console.WriteLine(fruit);
        }
    }
}
