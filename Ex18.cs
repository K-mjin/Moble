using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class Ex18 // List 클래스
    {
        static void Main(string[] args)
        {
            // 변수 선언
            List<int> list = new List<int>() { 52, 273, 32, 64, 502 };

            // 리스트에 요소 추가
            //list.Add(52);
            //list.Add(273);
            //list.Add(32);
            //list.Add(64);
            //list.Add(234);
            //list.Add(502);

            // 요소 제거
            list.Remove(52);

            // 반복을 통해 출력
            foreach (var item in list)
            {
                Console.WriteLine("Count" + list.Count + "\t item : " + item);
            }
        }
    }
}
