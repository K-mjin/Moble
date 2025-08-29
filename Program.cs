using System;
using System.ComponentModel.DataAnnotations;
using System.Security.Cryptography.X509Certificates;

namespace ConsoleApp_0715
{
    //public struct MyStruct
    //{
    //    // //public const float PI = 3.14159f;
    //    // //public static int age = 27;
    //    // //public int age1;
    //    // public int age;
    //    // //public int val; // 실행 후 초기화값 넣어주면 오류 발생
    //    // //public int val = 10;  // 초기화 할 수 없음
    //    // public MyStruct()
    //    // {
    //    //     this.age = 20;
    //    // }
    //    // public MyStruct(int inAge) // 매개변수가 있는 생성자
    //    // {
    //    //     // this.val = val; // static이 없는 변수 val의 포기화는 생성자의 매개변수를 이용
    //    //     age = inAge;
    //    // }
    //    // public string testA = null;
    //    //// public string testB;    // 구조체 멤버변수인 문자열은 NULL로 초기화
    //    ///
    //    // 구조체 멤버를 입력받아 출력하기
    //    //public int age;
    //    //public string testA = null;
    //    //public string testB = null;
    //    //public MyStruct(int inAge)
    //    //{
    //    //    this.age = inAge;
    //    //}

    //    // 생성자의 매개변수를 이용한 출력
    //    //public int age;
    //    //public float num;
    //    //public bool isReady;
    //    //public MyStruct(int inAge, float innum, bool inisReady)
    //    //{
    //    //    this.age = inAge;
    //    //    this.num = innum;
    //    //    this.isReady = inisReady;
    //    //}

    //    // 구조체 멤버들을 같은 구조체에 대입하면 값 복사가 이뤄짐
    //    public int age;
    //    public string name;
    //}

    // 구조체는 값 형식, 클래스의 객체는 참조형식
    //public struct MyStruct  // 구조체 선언
    //{
    //    public int age;
    //}

    // 열거형
    //enum DialogResult1 { YES, NO, CANCEL }      // 0, 1, 2
    ////enum DialogResult2 { YES = 10, NO, CANCEL }   // 10, 11, 12
    //enum DialogResult3 { YES = 10, NO, CANCEL, CONFIRM = 20, OK}
    //                                                // 10, 11, 12, 20, 21

    //class MyClass   // 클래스 선언
    //{
    //    public int age;
    //}

    // 열거형 형변환
    //enum Days { SUN = 1, MON, TUE, WED, THU, FRI, SAT };
    //                //1,   2,   3,   4,   5,   6,   7

    class Program
    {
        static void Main(string[] args)
        {
            // 문자열을 불로 전환
            //Console.WriteLine(bool.Parse("True"));
            //Console.WriteLine(bool.Parse("true"));
            //Console.WriteLine(bool.Parse("false"));
            //Console.WriteLine(bool.Parse("STRING"));    // true와 false외에 다른 문자열은 오류

            // 구조체의 생성자
            //MyStruct s = new MyStruct();  // 구조체 선언 변수
            //Console.WriteLine(s.val);

            // 구조체 선언과 구조체 멤버 사용
            //Console.WriteLine("{0}, {1}", MyStruct.PI, MyStruct.age);
            //MyStruct s; // 구조체 선언 변수
            //s.val = 10;
            //Console.WriteLine(s.val);

            // 구조체의 선언시 생성자를 통한 접근
            // 사용방법 1: 생성자 없이 구조체 변수 선언
            // 구조체 변수를 선언하고 초기화 후 사용
            //MyStruct s;
            ////s.age1 = 12;
            //s.age = 12;
            //Console.WriteLine(s.age);

            //// 사용방법 2.: 매개변수가 없는 생성자를 통한 초기화
            //// 매개변수가 숫자형식이므로 자동 0초기화
            //MyStruct s2 = new MyStruct();
            //Console.WriteLine(s2.age); // 자동 초기화로 age는 0

            //// 사용방법 3: 매개변수가 있는 생성자로 인스턴스 생성
            //// 매개변수값을 전달해서 초기화 후 출력
            //MyStruct s3 = new MyStruct(15); // 바로 여기서 생성자를 통해 매개변수 15 전달
            //Console.WriteLine("{0}", s3.age);

            // 구조체 멤버를 입력받아 출력하기
            //MyStruct s1;
            //Console.WriteLine("age 입력");
            //s1.age = int.Parse(Console.ReadLine());
            //Console.WriteLine("구조체 멤버 age = {0}", s1.age);

            //MyStruct s2 = new MyStruct();
            //Console.WriteLine("문자열 멤버 입력");
            //s2.testA = Console.ReadLine();
            //s2.testB = Console.ReadLine();
            //Console.WriteLine("구조체 문자열 멤버1{0}, 구조체 문자열 멤버2{1}", s2.testA, s2.testB);

            // 생성자의 매개변수를 이용한 출력
            //MyStruct test;
            //test.age = 12;
            //Console.WriteLine(test.age);

            //// 생성자 호출로 기본값으로 초기화
            //MyStruct test2 = new MyStruct(); ;
            //Console.WriteLine("{0} {1} {2}", test2.age, test2.num, test2.isReady);

            //// 생성자 호출로 매개변수값 전달해서 구조체 멤버 초기화
            //MyStruct test3 = new MyStruct(13, 40, true);
            //Console.WriteLine("생성자를 통해 매개변수 값 전달 : {0} {1} {2}", test3.age, test3.num, test3.isReady);

            // 구조체 멤버들을 같은 구조체에 대입하면 값 복사가 이뤄짐
            //MyStruct testStruct1, testStruct2;
            //testStruct2.age = 27;
            //testStruct2.name = "struct";
            //Console.WriteLine("복사할 구조체 : age = {0}, name = {1}", testStruct2.age, testStruct2.name);
            //testStruct1 = testStruct2;
            //Console.WriteLine("복사 된 구조체 : age = {0}, name = {1}", testStruct1.age, testStruct1.name);

            // 구조체는 값 형식, 클래스의 객체는 참조 형식
            //MyStruct test1 = new MyStruct();    // 구조체의 생성자 선언
            //test1.age = 12;
            //MyStruct test2 = test1;     // 값을 복사, 깊은 복사
            //test2.age = 24;             // test1.age 값을 유지
            //Console.WriteLine("{0}, {1}", test1.age, test2.age);

            //MyClass test3 = new MyClass();  // 클래스의 인스턴스 선언
            //test3.age = 12;
            //MyClass test4 = test3;  // 참조변수의 주소를 복사, 얕은 복사
            //test4.age = 24;         // test3, test4는 같은 객체,
            //                        // 둘다 값 변경(포인터 개념)
            //Console.WriteLine("{0}, {1}", test3.age, test4.age);

            // 튜플
            //(int, int) tuple = (110, 50);
            //Console.WriteLine($"{tuple.Item1}, {tuple.Item2}");


            //(int Max, int Min) tuple2 = (110, 50);
            //Console.WriteLine($"{tuple2.Max}, {tuple2.Min}");
            //// 필드명 Max, Min으로 명명된 튜플

            //var tuple3 = (Max: 110, Min: 50);
            //Console.WriteLine($"{tuple3.Max}, {tuple3.Min}");
            //// var형을 활용한 tuple 선언

            //var a = ("슈퍼맨", 9999);
            //Console.WriteLine($"{a.Item1}, {a.Item2}");
            //// 데이터형이 다른 튜플(복합자료형 형태)
            ///

            // 열거형 enum
            //Console.WriteLine((int)DialogResult1.YES);
            //DialogResult1 result = DialogResult1.YES;
            //Console.WriteLine(result == DialogResult1.YES);

            //Console.WriteLine((int)DialogResult3.YES);
            //Console.WriteLine((int)DialogResult3.NO);
            //Console.WriteLine((int)DialogResult3.CANCEL);
            //Console.WriteLine((int)DialogResult3.CONFIRM);
            //Console.WriteLine((int)DialogResult3.OK);

            // 열거형 형변환
            //int nValue = (int)Days.MON; // 일반형 타입에 저장할 때
            //Days day = Days.THU;        // 열거형 변수에 열거형 값을 대입
            //Console.WriteLine("{0}, {1}", nValue, day);

            // 값 형식과 참조 형식
            //int[] arr1 = { 1, 2, 3 };
            //int[] reArr;    // 참조형 배열 변수
            //reArr = arr1;   // c언어와 달리 객체의 메모리 주소가 복사됨, arr1의 객체를 사용, 객체의 복사 가능
            //reArr[1] = 20;  // reArr의 인덱스 1번에 값을 20으로 변경

            //// 배열 arr1의 값이 변경됨
            //Console.WriteLine("arr1[0] = {0}, arr1[1] = {1}, arr1[2] = {2}", arr1[0], arr1[1], arr1[2]);

            // ConsoleKeyInfo 속성
            //ConsoleKeyInfo keyInfo;
            //do
            //{
            //    // 매개변수로 true를 넣으면 입력된 문자가 보이지 않는다.
            //    keyInfo = Console.ReadKey();
            //    // 입력받은 키값은 소문자가 입력되어도 대문자로 인식
            //    if (keyInfo.Key == ConsoleKey.A)
            //    {
            //        Console.WriteLine();
            //        Console.WriteLine("A가 눌렸습니다.");
            //    }
            //    //입력받은 문자의 대소문자 구분
            //    if (keyInfo.KeyChar == 'c')
            //    {
            //        Console.WriteLine();
            //        Console.WriteLine("c가 눌렸습니다.");
            //    }
            //}while (keyInfo.Key != ConsoleKey.Escape);  //ESC키가 눌리면 빠져나감

            // Console.ReadLine()으로 문자열을 입력 받은 뒤 정수로 변환
            Console.WriteLine("문자열을 입력받으시오");
            string input = Console.ReadLine();
            Console.WriteLine("input: "+ input);    // 문자열 출력

            // 문자열을 정수로 변환하기
            int intInput = int.Parse(input);    // 정수형으로 변환
            Console.WriteLine(intInput + 1);    // 숫자가 되어 연산이 됨
        }
    }
}
