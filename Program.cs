using System;   // C언어의 #incldue 헤더 선언과 같은 의미(using = #include, system = 헤더파일(stdio.h), ; 반드시 사용
//using static System.Console;    // using static -> Console이라는 클래스도 생략 가능

namespace Write1     // 성격이나 하는 일이 비슷한 클래스, 구조체, 인터페이스, 대리자, 열거 형식등을 하나의 이름으로 묶음 (함수 클래스 같은 느낌
{
    internal class MainApp2// C#프로그램을 구성하는 기본 단위로서 (데이터)속성과 (데이터)기능을 처리하는 기능
    {
        static void Main(string[] args)     // 프로그램 진입점 -> Main() 메서드, M은 꼭 대문자
        {
            Console.WriteLine("Hello World!");
            //Console.WriteLine("Hello World!");
            //// Console.WriteLine("Hello\t" + args[0]);
            ////Console.ReadKey();
            //Console.Write("Write");
            //Console.WriteLine("WriteLine");

            //Console.WriteLine("writeLine");
            //Console.WriteLine("WriteLine");

            //Console.Write("write");
            //Console.Write("Write");

            Console.WriteLine("{0} {1}", 3.14, 12);
            Console.WriteLine("{0} + {1} = {2}", 1, 2, 1 + 2);
        }
    }
}
