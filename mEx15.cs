using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class mEx15    // 인스턴스로 swap
    {
        class Test
        {
            public int value = 10;
        }
        static void Change(Test input)  // 클래스로 만들어진 인스턴스 객체
        {
            input.value = 20;
        }

        static void Main(string[] args)
        {
            Test test = new Test(); // 클래스로 만들어진 인스턴스 객체는 메모리 참조(주소값)이 들어감
            test.value = 10;
            Change(test);   // 메서드 호출후 test라는 클래스 인스턴스는 20이라는 객체를 가리키게 됨

            Console.WriteLine("클래스로 만들어진 인스턴스의 객체의 메서드 호출후 변화 " + test.value);
        }
    }
}
