using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    public abstract class Template
    {
        public void Excute()
        {
            Step1();    // 알고리즘의 일부 단계
            Step2();    // 패턴은 알고맂므의 구조를 메서드에 정의하고 알고리즘의 일부 단계는 서브 클래스에서 구현하도록 함
        }
        // 추상메서드 -> 서브클래스에서 구현해야 할 단계
        protected abstract void Step1();
        protected abstract void Step2();
    }
    public class Algorithm : Template
    {
        protected override void Step1()
        {
            Console.WriteLine("Step1 구현");
        }
        protected override void Step2()
        {
            Console.WriteLine("Step2 구현");
        }
    }
    internal class Class9
    {
        static void Main(string[] args)
        {
            Template template = new Algorithm();
            template.Excute();
        }
    }
}
