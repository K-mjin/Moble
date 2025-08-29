using System;
using System.Threading;

public class Class1
{
	public Class1()
	{
	}
}
class Foo
{
    public int number;
}
class Program
{
    static void Main(string[] args)
    {
        // 증감 연산자
        //int a = 10;
        //Console.WriteLine(a++); // 10을 출력 후 a는 11로 증가
        //Console.WriteLine(++a); // 12로 증가 후 출력

        //int b = 10;
        //Console.WriteLine(b--); // 10을 출력 후 b는 9로 감소
        //Console.WriteLine(--b); // 8로 감소 후 출력

        // 나머지 연산자와 부호(왼쪽 피연산자의 부호를 따른다)
        //Console.WriteLine(4 % 3);
        //Console.WriteLine(-4 % 3);
        //Console.WriteLine(4 % -3);
        //Console.WriteLine(-4 % -3);

        // string에서 +는 문자열 연결
        //string str = "3" + ".14";       // 문자열과 문자열 더하기
        //Console.WriteLine(str);         // 문자열 "3.14"
        //Console.WriteLine(+5);          // 양의 숫자 5
        //Console.WriteLine(5 + 5);       // 숫자 5 + 5 = 10
        //Console.WriteLine(5 + .5);      // 숫자 5 + 0.5 = 5.5
        //Console.WriteLine("5" + "5");   // 문자열 55
        //Console.WriteLine(5.01f + "5"); // 문자열 "5.01" + "5"
        //Console.WriteLine("5" + 3.14f); // 문자열 "5" + "3.14"
        //Console.WriteLine(5 + 5 + 5 + "문자열");   // 산술 후 + 문자열
        //str = 1 + "test" + 3.14f + "abcd";
        //Console.WriteLine(str);

        // 비트 연산자
        //int a = 9;
        //int b = 10;
        //int c = 255;

        //Console.WriteLine($"{a} & {b} : {a & b}");
        //Console.WriteLine($"{a} | {b} : {a | b}");
        //Console.WriteLine($"{a} ^ {b} : {a ^ b}");

        //Console.WriteLine("~{0}(0x{0:X8}) : {1}(0x{1:X8})", c, ~c);
        // X8 : 8자리의 16진수 형식으로 출력하고 나머지는 0으로 채우라는 의미

        // 시프트 연산
        //Console.WriteLine("Testing <<...");

        //int a = 1;
        //Console.WriteLine("a     : {0:D5} (0x{0:X8})", a);
        //Console.WriteLine("a <<1 : {0:D5} (0x{0:X8})", a<<1);
        //Console.WriteLine("a <<2 : {0:D5} (0x{0:X8})", a<<2);
        //Console.WriteLine("a <<5 : {0:D5} (0x{0:X8})", a<<5);

        //Console.WriteLine("\nTesting <<...");

        //int b = 255;
        //Console.WriteLine("b     : {0:D5} (0x{0:X8})", b);
        //Console.WriteLine("b >>1 : {0:D5} (0x{0:X8})", b>>1);
        //Console.WriteLine("b >>2 : {0:D5} (0x{0:X8})", b>>2);
        //Console.WriteLine("b >>5 : {0:D5} (0x{0:X8})", b>>5);
        // D5 : 5자리의 10진수 형식으로 출력하고 나머지는 0으로 채우라는 의미
        // X8 : 8자리의 16진수 형식으로 출력하고 나머지는 0으로 채우라는 의미

        // null 관련 연산자 ?.(null 조건부 연산자)
        //Foo foo = null;
        //int? bar;   // nullable 형, null값이 필요할 때 사용
        //bar = foo?.number;
        //Console.WriteLine(bar);

        // null 관련 연산자 ??(null 병합 연산자)
        int? x = null;      // nullable형식, null 저장가능
        int y = x ?? -1;    // y는 nullable형식이 아님
                            // 변수 y에 null값이 대입되면 에러 발생
        Console.WriteLine(y);

        x = 10;
        y = x ?? -1;
        Console.WriteLine(y);

    }
}

