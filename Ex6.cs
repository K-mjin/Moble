using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0718
{
    internal class Ex6
    {
        class Product
        {
            public static int counter = 0;
            public int id;
            public string name;
            public int price;
            
            public Product(string name, int price)
            {
                Product.counter = counter + 1;
                this.id = counter;
                this.name = name;
                this.price = price;
            }
            ~Product()
            {
                Console.WriteLine(this.name + "소멸자 호출");
            }
        }

        static void Main(string[] args)
        {
            Product productA = new Product("감자", 2000);
            Product productB = new Product("고구마", 3000);
            Product productC = new Product("양파", 2500);
            Product productD = new Product("대파", 2500);

            Console.WriteLine(productA.id + ":" + productA.name + " " + productA.price);
            Console.WriteLine(productB.id + ":" + productB.name + " " + productB.price);
            Console.WriteLine(productC.id + ":" + productC.name + " " + productC.price);
            Console.WriteLine(productD.id + ":" + productD.name + " " + productD.price);
            Console.WriteLine(Product.counter + "개 생성되었습니다.");
        }

    }
}
