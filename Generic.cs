using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    class Wanted<T>
    {
        public T Value;
        public Wanted(T value)
        {
            this.Value = value;
        }
    }
    internal class Generic
    {
        static void Main(string[] args)
        {
            Wanted<string> wnatedString = new Wanted<string>("String");
            Wanted<int> wnatedInt = new Wanted<int>(522262);
            Wanted<double> wnateddouble = new Wanted<double>(52.12324);
            Console.WriteLine(wnatedString.Value);
            Console.WriteLine(wnatedInt.Value);
            Console.WriteLine(wnateddouble.Value);
        }
    }
}
