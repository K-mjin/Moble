using System;

namespace ConsoleApp_0724
{
    class Program
    {
        delegate void TypeF(int a, int b);

        //static int Plus (int x, int y) {  return x + y; }
        //static int Minus(int x, int y) { return x - y; }

        static void Plus( int x, int y) {  Console.WriteLine(x + y); }
        static void Minus(int x, int y) { Console.WriteLine(x - y); }
        static void Multiple(int x, int y) { Console.WriteLine(x * y); }

        static void Main(string[] args)
        {
            //TypeF delegateValue = new TypeF(Plus);
            //int result = delegateValue(20, 10);
            //Console.WriteLine(result);

            //TypeF delegateValue2 = Minus;
            //int result2 = delegateValue2(20, 10);
            //Console.WriteLine(result2);

            TypeF delegateValue = Plus;
            delegateValue += Minus;
            delegateValue += Multiple;

            delegateValue(20, 10);
        }
    }
}
