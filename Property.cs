using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    class MyClass
    {
        private string name;
        public string MyName
        {
            get { return name; }
            set {
                if (value.Length > 6)
                    Console.WriteLine("이름은 3자 이상 넘을 수 없습니다.");
                else
                    name = value;
            }
        }
        public int Age
        {
            get; set;
        }
    }
    internal class CalssP
    {
        static void Main(string[] args)
        {
            MyClass student = new MyClass();
            student.MyName = "홍길동바부멍청이";
            student.Age = 13;
            Console.WriteLine($"저의");
        }
    }
}
