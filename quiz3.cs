//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace ConsoleApp_0718
//{
//    internal class quiz3
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("다이아몬드의 높이를 입력하시오");
//            int num = int.Parse(Console.ReadLine());
//            int space = num / 2;

//            // 상단 피라미드
//            for (int i = 1; i <= num / 2 + 1; i++)
//            {
//                for (int j = 1; j <= space; j++)
//                {
//                    Console.Write(" ");
//                }
//                for (int k = 1; k <= 2 * i - 1; k++)
//                {
//                    Console.Write("*");
//                }
//                Console.WriteLine();
//                space --;
//            }

//            //하단 피라미드
//            space = 1;
//            for (int i = num/2; i <= 1; i++)
//            {
//                for (int j = 1; j <= space; j++)
//                {
//                    Console.WriteLine(" ");
//                }
//                for (int k = 2 * i - 1; k <= 1; k--)
//                {
//                    Console.WriteLine("*");
//                }
//                Console.WriteLine();
//                space++;
//            }
//        }
//    }
//}
