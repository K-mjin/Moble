using System;
using System.Runtime.InteropServices;

namespace ch2
{
    internal class singed
    {
        static bool boolVar;
        static void Main(string[] args)
        {
            // 음수 표현법
            //byte a = 255;
            //sbyte b = (sbyte)a; 
            //// 2의 보수법에 의해 -1로 출력이 됨, (sbyte)로 명시적 형변환 함
            //Console.WriteLine($"a={a}");
            //Console.WriteLine($"b={b}");
            //// $ 표시는 문자열 표현식으로 보관된 값을 출력함($"{식}"형식으로 사용

            // 정수형 자료형 연습
            //sbyte a = -10;
            //byte b = 40;
            //Console.WriteLine($"a={a}, b={b}");

            //short c = -30000;
            //ushort d = 60000;
            //Console.WriteLine($"c={c}, d={d}");

            //int e = -1000_0000;
            //uint f = 3_0000_0000;
            //Console.WriteLine($"e={e}, f={f}");

            //long g = -5000_0000_0000;
            //ulong h = 200_0000_0000_0000_0000;
            //Console.WriteLine($"g={g}, h={h}");

            // 최소값 상수, 최대값 상수
            //Console.WriteLine("{0} ~ {1}", short.MinValue, short.MaxValue);

            // 리터럴 연습
            //byte a = 240;   // 10진수 리터럴
            //Console.WriteLine($"a={a}");

            //byte b = 0b1111_0000;   // 2진수 리터럴
            //Console.WriteLine($"b={b}");

            //byte c = 0XF0;  // 16진수 리터럴
            //Console.WriteLine($"c={c}");

            //uint d = 0x1234_abcd;   // 16진수 리터럴
            //Console.WriteLine($"d={d}");

            // 실수형 연습
            //float a = 3.1415_9265_3589_7932_3846_2643_3832_79f; // 소수이하 7자리
            //double b = 3.1415_9265_3589_7932_3846_2643_3832_79; // 소수이하 15자리
            //decimal c = 3.1415_9265_3589_7932_3846_2643_3832_79m;   // 소수이하 28자리

            //Console.WriteLine(a);
            //Console.WriteLine(b);
            //Console.WriteLine(c);

            // 문자형 연습
            //int number = '7';
            //Console.WriteLine("캐릭터 '7'은 문자상수 {0}이다.", number);

            // 멤버변수 bool형의 기본값과 지역변수 bool변수 값 초기화
            //bool localBoolVar = true;
            //Console.WriteLine("{0} {1}", boolVar, localBoolVar);
            //// 클래스 멤버변수는 false로 자동 초기화

            // object로 선언한 다양한 자료형 형태
            //object a = 123;     // 정수형
            //object b = 3.1415_9265_3589_7932_3846_2643_3833_79m;    // 실수형
            //object c = true;    // bool형
            //object d = "안녕하세요"; // char형

            //Console.WriteLine(a);
            //Console.WriteLine(b);
            //Console.WriteLine(c);
            //Console.WriteLine(d);

            // 문자열 인덱스
            //string str1 = "안녕하세요.";
            //string str2 = "모블 교육센터입니다.";

            //Console.Write("{0} \n", str1);
            //Console.Write("{0} \n", str2);
            //Console.WriteLine("{0}", str2[1]);

            //string str3 = "c:\\temp\\test.test";    // or @"c:\temp\test.txt;
            //Console.WriteLine("{0}", str3);

            //string str4 = "c:\temp\test.txt";   // 이스케이프 문자 사용 \t -> tab
            //Console.WriteLine("{0}", str4);

            // 문자열 합치기
            //string str1 = "Hello_";
            //string str2 = "World!";
            //string str3 = str1 + str2;
            //string str4 = "program" + "ming";
            //Console.WriteLine("{0} {1}", str3, str4);
            //Console.WriteLine(str3[4]);
            //// 인덱스가 0부터 시작, 그래서 [4]번이 5번째 문자 출력

            // 문자열의 문자 개수 세기
            //string str1 = "Hello_world!";
            //Console.WriteLine("문자 개수 : {0}", str1.Length);

            //Console.WriteLine($"문자 개수 : {str1.Length}");

            // string클래스가 제공하는 다양한 메서드
            // 문자열 안에서 찾기
            //string greeting = "Good Morning";

            //Console.WriteLine(greeting);
            //Console.WriteLine();

            ////Index0f()
            //Console.WriteLine("Index0f \"Good\":{0}", greeting.IndexOf("Good"));
            //Console.WriteLine("Index0f 'o':{0}", greeting.IndexOf('o'));

            //// LastIndex0f()
            //Console.WriteLine("LastIndex0f \"Good\":{0}", greeting.LastIndexOf("Good"));
            //Console.WriteLine("LastIndex0f 'o':{0}", greeting.LastIndexOf('o'));

            //// StartsWith()
            //Console.WriteLine("StartsWith \"Good\":{0}", greeting.StartsWith("Good"));
            //Console.WriteLine("StartsWitn \"Morning\":{0}", greeting.StartsWith("Morning"));

            //// EndWith()
            //Console.WriteLine("EndWith \"Good\":{0}", greeting.EndsWith("Good"));
            //Console.WriteLine("EndWith \"Morning\":{0}", greeting.EndsWith("Morning"));

            //// Contains()
            //Console.WriteLine("Contains \"Evening\":{0}", greeting.Contains("Evening"));
            //Console.WriteLine("Contains \"Morning\":{0}", greeting.Contains("Morning"));

            //// Replace()
            //Console.WriteLine("Replaced \"Morning\" with \"Evening\":{0}", greeting.Replace("Morning", "Evening"));

            // 문자열 변형하기
            //Console.WriteLine("ToLower() : '{0}'", "ABC".ToLower());    // 문자열 모두 소문자로 반환
            //Console.WriteLine("ToUpper() : '{0}'", "abc".ToUpper());    // 문자열 모두 대문자로 반환

            //Console.WriteLine("Insert() : '{0}'", "Happy Friday!".Insert(5, " Sunny")); // 5번째 인덱스에 문자열 삽입
            //Console.WriteLine("Remove() : '{0}'", "I Don't Love You.".Remove(2, 6));    // 2번째 인덱스부터 6개 문자 삭제

            //Console.WriteLine("Trim() : '{0}'", " No Spaces ".Trim());  // 앞/뒤 공백 삭제
            //Console.WriteLine("TrimStart() : '{0}'", " No Spaces ".TrimStart());    // 앞 공백 삭제
            //Console.WriteLine("TrimEnd() : '{0}'", " No Spaces ".TrimEnd());    // 뒤 공백 삭제

            // 문자열 분할하기
            //string greeting = "Good morning.";

            //Console.WriteLine(greeting.Substring(0, 5));    // 현재 문자열의 지정된 위치로부터 지정된 수만큼의 문자로 이루어진 새 문자열을 반환
            //Console.WriteLine(greeting.Substring(5));

            //string[] arr = greeting.Split(' '); // 현재 문자열을 지정된 문자를 기준으로 분리한 문자열의 배열을 반환
            //Console.WriteLine("word Count : {0}", arr.Length);

            // var 실수형에 대한 출력문의 제어
            //var value1 = 3.14f;
            //float value2 = 10.04f;
            //float sum = value1 + value2;
            //Console.WriteLine("{0} / {1} / {2:f} / {3:f1} / {4}", value1, value2, value2, value2, sum);

            // 암시적 형식의 다양한 예
            //var a = 20; // var은 개별선언만 가능, NULL로도 초기화 불가능
            //Console.WriteLine("Type : {0}, Value : {1}", a.GetType(), a);

            //var b = 3.14;
            //var c = "Hello, World!";
            //var d = new int[] {10, 20, 30};
            //Console.WriteLine($"{b} / {c} / {d[0]}, {d[1]}, {d[2]}");

            // nullable형을 선언하고 판독
            //int? num1 = null;

            //Console.WriteLine(num1.HasValue);   // num1에 값이 없어서 false 출력
            //if (num1 != null)
            //    Console.WriteLine(num1.Value);  // num1에 값이 없어서 조건에 거짓이 되어 출력이 없음
            //num1 = 150;
            //Console .WriteLine(num1.HasValue);  // num1에 값이 150으로 초기화되어 True출력
            //Console.WriteLine(num1.Value);      // 150출력

            // 크기가 서로 다른 실수형식 사이의 변환
            //float f1 = 68.7512f;
            //Console.WriteLine("float : {0}", f1);
            //double d1 = (double)f1;     // 작은 타입에서 큰 타입으로 변환시 정밀도 손상
            //Console.WriteLine("double : {0} \n", d1);

            //double d2 = 68.7512;
            //Console.WriteLine("double : {0}", d2);
            //float f2 = (float)d2;
            //Console.WriteLine("float : {0}", f2);

            // 데이터 변환
            //int value1 = 127;
            //string str1 = value1.ToString();
            //Console.WriteLine("value1의 값이 문자열로 바꼈는지 확인 = {0}", str1+1); // 문자열의 합인 1271 출력

            //int value2 = Convert.ToInt32(str1);
            //Console.WriteLine("str1의 값이 정수로 바꼈는지 확인 = {0}", value2 + 1); // 정수의 합 128 출력

            //string str2 = "3.14";
            //float value3 = float.Parse(str2);
            //Console.WriteLine("str2의 값이 실수로 바꼈는지 확인 = {0}", value3 + 1); // 실수의 합 4.14 출력

            // 데이터 변환 (소수점 변화)
            //double number = 52.273103;
            //Console.WriteLine(number.ToString("0.0"));
            //Console.WriteLine(number.ToString("0.00"));
            //Console.WriteLine(number.ToString("0.000"));
            //Console.WriteLine(number.ToString("0.0000"));

            // GetType로 데이터형 확인하기
            Console.WriteLine(int.Parse("52").GetType());
            Console.WriteLine(long.Parse("273").GetType());
            Console.WriteLine(float.Parse("52.273").GetType());
            Console.WriteLine(double.Parse("103.32").GetType());

            Console.WriteLine(52 + 273);    // 숫자
            Console.WriteLine("52" + 273);  // 문자 + 숫자
            Console.WriteLine(52 + "273");  // 숫자 + 문자
            Console.WriteLine("52" + "273");// 문자 + 문자
        }
    }

}

