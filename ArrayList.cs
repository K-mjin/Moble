using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    class Program
    {
        static void ShowArrayList(ArrayList list)
        {
            foreach (object obj in list)
                    Console.Write("{0} ", obj);
            Console.WriteLine();
        }
        static void Main(string[] args) {
            ArrayList list = new ArrayList();
            for (int i = 0; i < 5; i++)
                list.Add(i);    // 리스트에 데이터 추가

            Console.WriteLine("list : ");
            ShowArrayList(list);

            list.RemoveAt(2);   // 인덱스의 2번째 요소 삭제
            ShowArrayList(list);

            list.Insert(2, 7);  // 인덱스의 2번째 요소에 7을 삽입
            ShowArrayList(list);

            list.Add("abc");    // 배열과 다르게 다양한 데이터형을 저장할 수 있음
            list.Add('A');      // object형으로 정수의 경우 박싱되어 저장
            ShowArrayList(list);
        }
    }
}
