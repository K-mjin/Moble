using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    internal class try_Catch
    {
        static void Main(string[] args)
        {
            int[] arr = {1,2,3};

            try
            {
                for (int i = 0; i < 5; i++)
                    Console.WriteLine(arr[i]);
            }
            catch(IndexOutOfRangeException e)
            {
                Console.WriteLine("배열의 인덱스 예외가 발생");
                Console.WriteLine($"{e.Message}");
            }

            Console.WriteLine("프로그램이 종료됩니다.");
        }
    }
}
