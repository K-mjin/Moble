using System;
using System.Collections;
using System.Data;
using System.Net.Http.Headers;
using System.Runtime.ConstrainedExecution;

namespace ConsoleApp_0716
{
    internal class Program_1
    {
        static void Main(string[] args)
        {
            // 짝수와 홀수를 if-else문으로 구분하기
            //Console.WriteLine("숫자입력");
            //string input = Console.ReadLine();  // 문자열을 입력받는 입력문
            //int a = int.Parse(input);   // input을 int형으로 형변환

            //if (a % 2 == 0)
            //    Console.WriteLine("짝수");
            //else
            //    Console.WriteLine("홀수");


            // 현재 컴퓨터의 시간을 불러와서 오전과 오후 구분하기
            //Console.WriteLine(DateTime.Now.Year);
            //Console.WriteLine(DateTime.Now.Month);
            //Console.WriteLine(DateTime.Now.Day);
            //Console.WriteLine(DateTime.Now.Hour);
            //Console.WriteLine(DateTime.Now.Minute);
            //Console.WriteLine(DateTime.Now.Second);

            //Console.WriteLine(DateTime.Now.ToLongDateString());
            //Console.WriteLine(DateTime.Now.ToShortTimeString());
            //Console.WriteLine(DateTime.Now.ToLongTimeString());
            //Console.WriteLine(DateTime.Now.ToString());

            //if (DateTime.Now.Hour < 12)
            //    Console.WriteLine("오전입니다.");
            //else
            //    Console.WriteLine("오후입니다.");


            // 조건문 실습 4
            //Console.WriteLine("점수를 입력하시오");
            //int score = int.Parse(Console.ReadLine());
            //char grade = ' ';

            //if (score >= 90)     // score가 90이상일 때 실행
            //    grade = 'A';
            //else if (score >= 80)   // score가 80이상일 때 실행
            //    grade = 'B';
            //else if (score >= 70)   // score가 70이상일 때 실행
            //    grade = 'C';
            //else
            //    // score가 90이상일 때 실행
            //    grade = 'D';
            //Console.WriteLine(grade);


            // 조건문 실습 5
            //Console.WriteLine("현재 시간을 입력하시오.");
            //int time = int.Parse(Console.ReadLine());

            //if (time <= 11)
            //    Console.WriteLine("아침 먹을 시간입니다.");
            //else if (time > 11 && time <= 15)
            //    Console.WriteLine("점심 먹을 시간입니다.");
            //else
            //    Console.WriteLine("저녁 먹을 시간입니다.");


            // 조건문 실습 6
            //Console.WriteLine("정수를 입력하시오");
            //int number = int.Parse(Console.ReadLine());

            //if (number == 0)
            //    Console.WriteLine("0");
            //else if (number < 0)
            //{
            //    Console.WriteLine("음수");
            //    if (number % 2 == 0)
            //        Console.WriteLine("짝수");
            //    else
            //        Console.WriteLine("홀수");
            //}

            //else 
            //{
            //    Console.WriteLine("양수");
            //    if (number % 2 == 0)
            //        Console.WriteLine("짝수");
            //    else
            //        Console.WriteLine("홀수");
            //}


            // 조건문 실습 9
            //string str = "yes";

            //switch(str)
            //{
            //    case "no":
            //        Console.WriteLine("no 입니다.");
            //        break;
            //    case "yes":
            //        Console.WriteLine("yes 입니다.");
            //        break;
            //}


            // 조건문 실습 9_1
            //Console.WriteLine("요일을 입력하세요(일, 월, 화, 수, 목, 금, 토) : ");
            //string day = Console.ReadLine();

            //switch (day)
            //{
            //    case "일":
            //        Console.WriteLine("Sunday");
            //        break;
            //    case "월":
            //        Console.WriteLine("Monday");
            //        break;
            //    case "화":
            //        Console.WriteLine("Tuesday");
            //        break;
            //    case "수":
            //        Console.WriteLine("Wednesday");
            //        break;
            //    case "목":
            //        Console.WriteLine("Thursday");
            //        break;
            //    case "금":
            //        Console.WriteLine("Friday");
            //        break;
            //    case "토":
            //        Console.WriteLine("Saturday");
            //        break;
            //        default:
            //        Console.WriteLine($"{day}는(은) 요일이 아닙니다.");
            //        break;
            //}


            // 조건문 실습 10
            //object obj = null;
            //Console.WriteLine("숫자형태로 입력하시오");
            //string s = Console.ReadLine();
            ////tryparse() -형변환을 시도하고 가능하면 True반환
            //if (int.TryParse(s, out int out_i)) // 입력받은 s가 정수형이면 정수형으로 형변환해주고 정수형 변수 out_i에 저장
            //    obj = out_i;
            //else if (float.TryParse(s, out float out_f))
            //    obj = out_f;
            //else
            //    obj = s;

            //switch (obj)
            //{
            //    case int i:
            //        Console.WriteLine("{0}는 int형식입니다.", i);
            //        break;
            //    case float f when f >= 0:
            //        Console.WriteLine("{0}는 양의 float형식입니다.", f);
            //        break;
            //    case float f:
            //        Console.WriteLine("{0}는 음의 float형식입니다.", f);
            //        break;
            //    default:
            //        Console.WriteLine("{0}는 모르는 형식입니다.", obj);
            //        break;
            //}
            // out키워드를 사용하는 대표적인 메서드는
            // TryParse()메서드 : int.TyrParse()나 float.TyrParse() 같은
            // 기본적인 숫자 자료형에 소속되어 있는 클래스 메서드


            // 조건문 실습 12
            // 문자열을 입력받아 입력 받은 문자열 안에 지정한 하위 문자열이 있는지 확인하고 출력
            //Console.WriteLine("입력: ");
            //string line = Console.ReadLine();

            //if(line.Contains("안녕"))
            //{
            //    Console.WriteLine("안녕하세요..!");
            //}
            //else
            //{
            //    Console.WriteLine("^^!");
            //}


            // 조건문 실습 13
            // 키 입력에 따른 swith문을 사용한 분기
            //Console.WriteLine("콘솔을 입력하시오");
            //ConsoleKeyInfo info = Console.ReadKey();

            //switch (info.Key)   // 대소문자 정확히 표현
            //{
            //    case ConsoleKey.UpArrow:
            //        Console.WriteLine("위로이동");
            //        break;
            //    case ConsoleKey.DownArrow:
            //        Console.WriteLine("아래로이동");
            //        break;
            //    case ConsoleKey.LeftArrow:
            //        Console.WriteLine("왼쪽으로 이동");
            //        break;
            //    case ConsoleKey.RightArrow:
            //        Console.WriteLine("오른쪽으로 이동");
            //        break;
            //}
            // ReadKey()메서드가 입력한 키를 알아내는 방법:
            // ReadKey()메서드는 ConsoleKeyInfo 객체를 받게 됨


            // 조건문 Test_1 : 사용자로부터 태어난 년도를 입력 받아 그 해의 띠를 출력하시오
            //Console.WriteLine("태어난 년도를 입력하세요");
            //int year = int.Parse(Console.ReadLine());

            //switch (year % 12)
            //{
            //    case 0:
            //        Console.WriteLine("원숭이띠");
            //        break;
            //    case 1:
            //        Console.WriteLine("닭띠");
            //        break;
            //    case 2:
            //        Console.WriteLine("개띠");
            //        break;
            //    case 3:
            //        Console.WriteLine("돼지띠");
            //        break;
            //    case 4:
            //        Console.WriteLine("쥐띠");
            //        break;
            //    case 5:
            //        Console.WriteLine("소띠");
            //        break;
            //    case 6:
            //        Console.WriteLine("호랑이띠");
            //        break;
            //    case 7:
            //        Console.WriteLine("토끼띠");
            //        break;
            //    case 8:
            //        Console.WriteLine("용띠");
            //        break;
            //    case 9:
            //        Console.WriteLine("뱀띠");
            //        break;
            //    case 10:
            //        Console.WriteLine("말띠");
            //        break;
            //    case 11:
            //        Console.WriteLine("양띠");
            //        break;
            //    }


            // 조건문 Test_2 : 사용자로부터 (x.y)좌표를 입력받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성
            //Console.WriteLine("x축을 입력하세요");
            //int x = int.Parse(Console.ReadLine());
            //Console.WriteLine("y축을 입력하세요");
            //int y = int.Parse(Console.ReadLine());

            //if (x > 0 && y > 0)
            //    Console.WriteLine("1사분면입니다.");
            //else if (x < 0 && y > 0)
            //    Console.WriteLine("2사분면입니다.");
            //else if (x < 0 && y < 0)
            //    Console.WriteLine("3사분면입니다.");
            //else if (x > 0 && y < 0)
            //    Console.WriteLine("4사분면입니다.");
            //else
            //    Console.WriteLine("잘못된입력입니다");


            // 반복문 실습 3
            // do..while문, 무조건 한번은 실행됨, 이미 i=0이 되었지만
            // 다음 do while문에서 i의 0값이 출력됨을 알 수 있음
            //int i = 10;

            //do
            //{
            //    Console.WriteLine("a)i : {0}", i--);
            //} while (i > 0);
            //do
            //{
            //    Console.WriteLine("b)i : {0}", i--);
            //}while (i > 0);


            // 반복문 실습 4 : foreach문을 이용하여 배열 요소값을 출력
            //int[] arr = { 1, 2, 3, 4 };

            //foreach (var nValue in arr) // nValue는 읽기 전용
            //{
            //    Console.WriteLine(nValue);  // foreach문을 사용할 때는 식별자와 식별자의
            //}                               // 데이터형을 함께 괄호안에 선언해야함


            // 반복문 실습 4_1 : foreach문을 이용하여 list에 추가된 값을 출력
            //ArrayList list = new ArrayList();  // ArrayList클래스
            //list.Add(1); list.Add(2); list.Add(3);  // list에 1, 2, 3 값을 추가

            //foreach (int nValue2 in list)
            //{
            //    Console.WriteLine(nValue2);
            //}


            // 반복문 실습 5
            // string 배열을 선언하고 foreach를 통해 배열의 요소를 출력하기, var 키워드 사용

            //// 배열의 요소값 생성
            //string[] intArray = { "사과", "배", "포도", "딸기", "바나나" };

            //Console.WriteLine("foreach와 var를 통해서 출력하기");
            //// 반복을 통해 요소값 출력
            //foreach (var str in intArray)
            //{
            //    Console.WriteLine(str);
            //}


            // 반복문 실습 7 : 별 직각삼각형 만들기
            //int i, j;

            //for (i = 1; i <= 10; i++)
            //{
            //    for (j = 1; j <= i; j++)
            //    {
            //        Console.Write("*");
            //    }
            //    Console.WriteLine();
            //}


            // 점프문 실습 9 :break를 사용하여 실행의 흐름을 벗어나기
            //while (true)
            //{
            //    Console.WriteLine("계속할까요?(예/아니오) > ");
            //    string answer = Console.ReadLine();

            //    if (answer == "아니오")
            //        break;  // 가장 가까운 반복문 while을 빠져나간다.
            //}   // }밖이 break문이 벗어나는 곳


            // 점프문 실습 10 : continue문 짝수라면 계속 진행하고 홀수라면 출력
            //for (int i = 0; i < 10; i++)
            //{
            //    if (i % 2 == 0)
            //    {
            //        continue;   // 가장 가까운 반복문 끝으로 간다.
            //    }
            //    Console.WriteLine("{0} : 홀수", i);
            //}   // }안으로 continue문이 건너뛴다.


            // test_1
            //int i, j;

            //for (i = 1; i <= 8; i++)
            //{
            //    for (j = 8; j > i; j--)
            //    {
            //        Console.Write(" ");
            //    }
            //        for (j = 1; j <= 2 * i - 1; j++)
            //        {
            //            Console.Write("*");
            //        }
            //        Console.WriteLine();
            //}


            // test_2
            //int i, j;

            //for (i = 1; i < 6; i++)
            //{
            //    for (j = 1; j <= i; j++)
            //    {
            //        Console.Write("*");
            //    }
            //    for (j =10; j > 2 * i ; j--)
            //    {
            //        Console.Write(" ");
            //    }
            //    for (j = 1; j <= i; j++)
            //    {
            //        Console.Write("*");
            //    }
            //    Console.WriteLine();
            //}
            //for (i = 1; i <= 5; i++)
            //{
            //    for (j = 5; j > i; j--)
            //    {
            //        Console.Write("*");
            //    }
            //    for (j = 1; j <= 2 * i; j++)
            //    {
            //        Console.Write(" ");
            //    }
            //    for (j = 5; j > i; j--)
            //    {
            //        Console.Write("*");
            //    }
            //    Console.WriteLine();
            //}
            //Console.WriteLine();


            // test_3 (실패)

            //Console.WriteLine("다이아몬드의 높이를 입력하시오");
            //int num = int.Parse(Console.ReadLine());
            //int space = num / 2;

            //// 상단 피라미드
            //for (int i = 1; i <= num / 2 + 1; i++)
            //{
            //    for (int j = 1; j <= space; i++)
            //    {
            //        Console.Write(" ");
            //    }
            //    for (int k = 1; k <= 2 * i - 1; k++)
            //    {
            //        Console.Write("*");
            //    }
            //    Console.WriteLine();

            //    space--;
            //}

            //// 하단 피라미드
            //space = 1;
            //for (int i = num / 2; i >= 1; i--)
            //{
            //    for(int j = 1; j<=space; j++)
            //    {
            //        Console.Write(" ");
            //    }
            //    for(int k = 1;k <= i * 2 - 1; k++)
            //    {
            //        Console.Write("*");
            //    }
            //    Console.WriteLine();

            //    space++;
            //}


            // 일차원 배열 실습 1

            //// 배열의 요소값 생성
            //int[] intArray = { 52, 273, 32, 65, 103};

            //// 요소값 출력
            //Console.WriteLine("요소값 변경 전");
            //Console.WriteLine(intArray[0]);
            //Console.WriteLine(intArray[1]);
            //Console.WriteLine(intArray[2]);
            //Console.WriteLine(intArray[3]);

            //// 배열의 요소값 변경
            //intArray[0] = 0;    // 0번째 인덱스 값 변경
            //Console.WriteLine();

            //// 요소값 출력
            //Console.WriteLine("요소값 변경 후");
            //Console.WriteLine(intArray[0]);
            //Console.WriteLine(intArray[1]);
            //Console.WriteLine(intArray[2]);
            //Console.WriteLine(intArray[3]);


            // 일차원 배열 실습 2 : Length 속성
            //// 배열의 요소값 생성
            //int[] intArray = { 52, 273, 32, 65, 103 };

            //// 요소값 출력
            //Console.WriteLine("요소값 변경 전");
            //Console.WriteLine(intArray[0]);
            //Console.WriteLine(intArray[1]);
            //Console.WriteLine(intArray[2]);
            //Console.WriteLine(intArray[3]);
            //Console.WriteLine(intArray.Length);

            //// 배열의 요소값 변경
            //intArray[0] = 0;    // 0번째 인덱스 값 변경
            //Console.WriteLine();

            //// 요소값 출력
            //Console.WriteLine("요소값 변경 후");
            //Console.WriteLine(intArray[0]);
            //Console.WriteLine(intArray[1]);
            //Console.WriteLine(intArray[2]);
            //Console.WriteLine(intArray[3]);
            //Console.WriteLine(intArray.Length);


            // 일차원 배열 실습 3 : Length와 foreach 반복문을 사용한 배열
            //int[] nArray = { 1, 2, 3, 4, 5 };
            //int sum = 0;

            //// 배열의 길이가 바뀔 때마다 수정 불필요
            //for (int i = 0; i < nArray.Length; i++)
            //{
            //    Console.Write("{0} ", nArray[i]);
            //    sum += nArray[i];
            //}
            //Console.WriteLine(sum);

            //// foreach사용, 간단한 코드의 경우 for문보다 간결
            //sum = 0;
            //foreach(int m in nArray)
            //{
            //    Console.Write("{0} ", m);
            //    sum += m;
            //}
            //Console.WriteLine(sum);


            // 일차원 배열 실습 5 : 원하는 크기의 배열 생성
            //int[] arr1 = new int[100];
            //string[] arr2 = new string[100];
            //bool[] arr3 = new bool[100];
            //                                // 배열을 생성한 뒤 설정 값
            //Console.WriteLine(arr1[30]);    // 숫자타입의 요소는 0으로 초기화
            //Console.WriteLine(arr2[30]);    // 참조타입의 요소는 null로 초기화
            //Console.WriteLine(arr3[30]);    // bool타입의 요소는 false로 초기화


            // 이차원 및 다차원 배열 실습 6
            //string[,,] strArray = { { { "ab", "cd" }, { "ef", "gh" } },
            //                        { { "ij", "kl" }, { "mn", "op" } } };

            //for (int i = 0; i < 2; i++)         // 면
            //{
            //    for (int j = 0; j < 2; j++)     // 행
            //    {
            //        for (int k = 0; k < 2; k++) // 열
            //        {
            //            Console.Write(strArray[i, j, k] + " ");
            //        }
            //        Console.WriteLine();
            //    }
            //    Console.WriteLine() ;
            //}


            // 가변 배열 실습 7
            //int[][] array = new int[2][];
            //array[0] = new int[3] {1, 2, 3};
            //array[1] = new int[2] { 4, 5 };

            //for (int i = 0; i < array.Length; i++)
            //{
            //    for (int j = 0; j < array[i].Length; j++)
            //    {
            //        Console.Write(array[i][j]);
            //    }
            //    Console.WriteLine();
            //}


            // 배열의 메서드 실습 9 : 초기화 Clear()
            //int[] arr1 = {1, 2, 3, 4, 5};
            //Array.Clear(arr1, 2, 3);    // arr1의 index 2번부터 3개 길이만큼 0

            //foreach (int m in arr1)
            //    Console.Write(m);
            //Console.ReadLine();

            //// arr1의 index 0번부터 총 길이만큼 0으로 초기화
            //Array.Clear(arr1, 0, arr1.Length);

            //foreach (int n in arr1)
            //    Console.Write(n);
            //Console.ReadLine();


            // 배열의 메서드 실습 10 : 복사 Clone()
            //int[] arr1 = {1,2,3,4};
            //int[] cloneArr = (int[])arr1.Clone();
            //// Clone()의 반환타입은 object형. int[]로 형변환(언박싱)

            //cloneArr[2] = 30;

            //foreach (int m in arr1)
            //    Console.Write("{0} ", m);
            //Console.WriteLine();

            //foreach (int m in cloneArr)
            //    Console.Write("{0} ", m);
            //Console.WriteLine();

            //string[] days = { "일", "월", "화", "수", "목", "금", "토" };
            //string[] cloneDays = (string[])days.Clone();
            //foreach (string m in cloneDays)
            //    Console.Write("{0} ", m);


            // 배열의 메서드 실습 11 : 기타 메서드 및 속성
            //int[] scores = new int[] { 80, 74, 81, 90, 34 };

            //foreach (int score in scores)
            //    Console.Write($"{score} ");
            //Console.WriteLine();

            //Array.Sort(scores); // Array클래스의 Sort()메서드를 사용해 배열을 정렬
            //foreach (int score in scores)
            //    Console.Write($"{score} ");
            //Console.WriteLine();

            //Console.WriteLine("Number of dimensions : {0}", scores.Rank);   // scores배열의 차원을 Rank프로퍼티가 반환

            //Console.WriteLine("Binary Search : 81 is at {0}", Array.BinarySearch(scores, 81));  // 정렬 후 scores에서 81의 위치 탐색
            //Console.WriteLine("Linear Search : 90 is at {0}", Array.IndexOf(scores, 90));   // scores에서 90의 인덱스값을 반환

            //Console.WriteLine(" Old length of scores : {0}", scores.GetLength(0));  // 다차원 배열에서 지정한 배열의 길이를 반환
            //Array.Resize<int>(ref scores, 10);  // ref 참조형 변수로 사용하는 키워드, 배열의 크기를 Resize에 의해 재정의
            //Console.WriteLine("New lenfth of scores : {0}", scores.Length); // scores의 길이가 5에서 10으로 바뀜
        }  
    }
}
