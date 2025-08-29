using System;

namespace ConsoleApp_0723
{
    class Parent
    {
        public int var = 2783;
        public virtual void Method()
        {
            Console.WriteLine("부모");
        }
    }
    class Child : Parent
    {
        public string var = "hiding";
        public new void Method()    // 오버라이딩 할 때 자식 틀래스에서 new 키워드를 사용하면 자식 클래스의 메서드가 사라짐("자식") ->  부모 클래스의 메서드가 출력됨("부모")
        {
            Console.WriteLine("자식");
        }
    }
    internal class Class12
    {
        static void Main(string[] args)
        {
            Parent child = new Child(); // 부모로 위장한 자식
            Console.WriteLine(child.var);
            child.Method();
        }
    }
}
