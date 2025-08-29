using System;

namespace ConsoleApp_0722
{
    class Fibonacci
    {
        public long Get(int n)
        {
            if (n < 0) { return 0; }
            if (n == 1) { return 1; }
            return Get(n - 1) + Get(n - 2);
        }
    }
    internal class mEx16
    {
        static void Main(string[] args)
        { 
            Fibonacci fibo = new Fibonacci();
            Console.WriteLine(fibo.Get(1));
            Console.WriteLine(fibo.Get(2));
            Console.WriteLine(fibo.Get(3));
            Console.WriteLine(fibo.Get(4));
            Console.WriteLine(fibo.Get(5));
        }
    }
}
