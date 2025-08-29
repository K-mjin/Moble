using System;

public class Class1
{
	public Class1()
	{
	}
}

namespace ConsoleApp_0716
{
    internal class Program_1
    {
    static void Main(string[] args)
        {
            //Console.WriteLine("다이아몬드의 높이를 입력하시오");
            //int height = int.Parse(Console.ReadLine());

            //for (int i = 0; i < height / 2 + 1; i++)
            //{
            //    for (int j = 0; j < height / 2 + 1; j++)
            //    {
            //        Console.Write(i + j >= height / 2 ? "*" : " ");
            //    }
            //    for (int j = 0; j < height / 2; j++)
            //    {
            //        Console.Write(i - j > 0 ? "*" : " ");
            //    }
            //    Console.WriteLine();
            //}
            //for (int i = 0; i < height / 2; ++i)
            //{
            //    for (int j = 0; j < height / 2 + 1; j++)
            //    {
            //        Console.Write(i - j >= 0 ? " " : "*");
            //    }
            //    for (int j = 0; j <= height / 2; j++)
            //    {
            //        Console.Write(i + j >= height / 2 - 1 ? " " : "*");
            //    }
            //    Console.WriteLine();
            //}

            // 다이아몬드 출력
            //Console.WriteLine("다이아몬드의 높이를 입력하시오");
            //int num = int.Parse(Console.ReadLine());
            //int space = num / 2;    // space는 공백의 개수

            //// 상단 피라미드
            //for (int i = 1; i <= num/2 + 1; i++)
            //{ 
            //    for (int j = 1; j <= space; j++)
            //    {
            //        Console.Write(" "); // *이 1개에서 3개, 5개.. 늘어나는 것 처럼 공백 space개를 출력하라는 의미(j++는 그 줄 안에서 공백을 몇개 출력할지 세는 것)
            //    }
            //    for (int k = 1; k <= 2 * i - 1; k++)
            //    {
            //        Console.Write("*");
            //    }
            //    Console.WriteLine();

            //    space--;    // 줄이 바뀔 때마다 space가 줄어듬
            //}
            //// 공백이 1 ~ space개 까지 출력
            //// space--;
            //// 공백이 1 ~ space - 1개 까지 출력
            //// space--;
            //// 공백이 1 ~ space - 2개 까지 출력

            //// 하단 피라미드
            //space = 1;
            //for (int i = num / 2; i >= 1; i--)
            //{
            //    for (int j = 1; j <= space; j++)
            //    {
            //        Console.Write(" ");
            //    }
            //    for (int k = 1; k <= 2 * i - 1; k++)
            //    {
            //        Console.Write("*");
            //    }
            //    Console.WriteLine();

            //    space++;
            //}


        }
    }
}
