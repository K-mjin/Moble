using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    internal class Interface
    {
        class Product : IComparable
        {
            public string Name { get; set; }
            public int Price { get; set; }

            public int CompareTo(object obj)    // Price 속성끼리 비교하는 메서드 생성
            {
                return this.Name.CompareTo((obj as Product).Name);
            }

            public override string ToString()
            {
                return Name + " : " + Price + "원";
            }
        }
        static void Main(string[] args)
        {
            List<Product> list = new List<Product>()
            {
                new Product() {Name = "마우스패드", Price = 1500 },
                new Product() {Name = "마우스마우스", Price = 14000 },
                new Product() {Name = "키보드", Price = 40000 },
                new Product() {Name = "웹캠", Price = 35000 }
            };
            list.Sort();    // list의 Sort(정렬) 기준을 정의하지 않았으므로 오류

            foreach(var item in list)
            {
                Console.WriteLine(item);
            }
        }
    }
}
