using System;
using System.Diagnostics.CodeAnalysis;

public struct MyScore
{
	public int kor;
	public int eng;
	public int math;
	public int sum;
	public double avg;
}
public class test_1
{
	public test_1()
	{
	}
}

internal class program
{
	static void Main(string[] args)
	{
		MyScore s;
		Console.Write("국어 점수 입력 > ");
		s.kor = int.Parse(Console.ReadLine());
        Console.Write("영어 점수 입력 > ");
        s.eng = int.Parse(Console.ReadLine());
        Console.Write("수학 점수 입력 > ");
        s.math = int.Parse(Console.ReadLine());
		Console.WriteLine("국어 : {0}, 영어 : {1}, 수학 : {2}", s.kor, s.eng, s.math);

		s.sum = s.kor + s.eng + s.math;
		Console.WriteLine("합계 : {0}", s.sum);

		s.avg = s.sum / 3.0;
		Console.WriteLine("평균 : {0 :f2}", s.avg);
    }
}
