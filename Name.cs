using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    internal class Name
    {
        static void Main(string[] args)
        {
            string[] arr1 = { "김강우", "홍길동", "박남길", "황승찬", "최우찬" };
            Console.WriteLine("정렬해서 출력");
            Array.Sort(arr1);
            foreach (string str in arr1) 
                Console.WriteLine(str + ",");
            Console.WriteLine();

            Array.Reverse(arr1);
            Console.WriteLine("역방향 출력");
            foreach (string str in arr1)
                Console.WriteLine(str + ",");
        }
    }
}
