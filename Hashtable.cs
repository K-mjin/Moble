using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Hashtable table = new Hashtable();
            table.Add("사과", "apple");
            table.Add("토마토", "tomato");
            table["감자"] = "potato";
            table["복숭아"] = "peach";
                 // Key        value
            Console.WriteLine("table의 해시코드 " + table.GetHashCode());

            foreach (object obj in table.Keys)
                Console.WriteLine("{0} : {1}", obj, table[obj]);
                                            //Key출력  value출력

            Hashtable table1 = new Hashtable();
            table1.Add("사과", "apple");
            table1.Add("토마토", "tomato");
            table1["감자"] = "potato";
            table1["복숭아"] = "peach";
            // Key        value
            Console.WriteLine("table1의 해시코드 " + table1.GetHashCode());

            foreach (object obj in table.Keys)
                Console.WriteLine("{0} : {1}", obj, table1[obj]);
        }                                  //Key출력  value출력
    }                                  
}
