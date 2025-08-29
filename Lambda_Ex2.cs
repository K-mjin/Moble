using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0724
{
    internal class Lambda_Ex2
    {
        static void Main()
        {
            List<string> words = new List<string> { "apple", "banana", "kiwi", "grape", "warermelon" };

            string result = words.Find(word => word.Length > 5);

            Console.WriteLine("길이가 5보다 큰 첫 단어 : " + result);
        }
    }
}
