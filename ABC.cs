using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    class A
    {
        private char a = 'A';
        protected char b = 'B';
        public char c = 'C';

        private void printA()
        {
            Console.WriteLine("private");
        }
        protected void printB()
        {
            Console.WriteLine("protected");
        }
        public void printC()
        {
            Console.WriteLine("public");
        }
    }
    // 속성 b,c ; 메서드 printB(), printC()를 상속 받음
    class B : A 
    {
        public void print()
        {
            Console.WriteLine($"a : pricvate는 호출 안됨, b : {base.b}, c : {base.c}");
            //printA(); private로 선언되어 있어서 상속 불가능
            printB();
            printC();
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            B test = new B();
            //test.B = 'b'; protacted로 선언 되어 있어서 불가능, 자식 클래스에 상속은 가능하나 메인 클래스에서 사용 불가능
            test.c = 'c';
            //test.printB(); protacted로 선언되어 있어서 접근 불가능
            test.printC();
            test.print();
        }
    }
}
