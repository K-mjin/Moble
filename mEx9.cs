using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx9
    {
        static int[] CreateArray1(int nSize)
        {   // 1차원 배열 생성 및 초기화
            int[] arr1 = new int[nSize];
            for (int i=0; i<arr1.Length; i++)   // nSize만큼 반복해서 값을 받아들임, 배열은 참조형식
                arr1[i] = i;

            return arr1;    // 배열의 주소를 리턴, 참조형식
        }
        static int[,] CreateArray2(int nRow, int nCol)
        {   // 2행 3열의 2차원 배열 초기화
            int index = 0;
            int[,] arr2 = new int[nRow, nCol];
            for(int i = 0; i< nRow; i++)
            {
                for (int j = 0; j < nCol; j++)
                    arr2[i, j] = index++;
            }
            return arr2;
        }
        static void Main(string[] args)
        {
            int[] nArr1;    // 1차원 배열의 선언
            int[,] nArr2;   // 2차원 배열의 선언
            nArr1 = CreateArray1(5);    // 리턴 받은 배열의 주소를 nArr1배열 이름이 받음
            nArr2 = CreateArray2(2, 3);

            // 1차원 배열의 길이만큼 출력
            Console.WriteLine("nArr1의 1차원 배열의 출력");
            for (int i = 0; i < nArr1.Length;i++)
                Console.Write(nArr1[i] + " ");
            Console.WriteLine();

            // 2차원 배열의 길이만큼 출력
            for (int i=0; i < nArr2.GetLength(0); i++)  // GetLength(0) -> 행의 길이
            {
                Console.WriteLine($"nArr2의 2차원 배열의 {i}행 출력");
                for(int j = 0; j < nArr2.GetLength(1); j++) // GetLength(1) -> 열의 길이
                {
                    Console.Write(nArr2[i, j] + " ");
                }
                Console.WriteLine();
            }
            Math.Abs()
        }
    }
}
