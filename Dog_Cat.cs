using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    class Animal
    {
        public int Age { get; set; }
        public string Color { get; set; }
        public Animal() 
        {
            this.Age = 0;
        } 
        public void Eat()
        {
            Console.WriteLine("냠냠 먹습니다.");
        }
        public void Sleep()
        {
            Console.WriteLine("쿨쿨 잠을 잡니다.");
        }
        public virtual void Bark() { }
        public virtual void Meow() { }
    }

    // 코드 7-1 : Dog 클래스
    class Dog:Animal
    {
        public override void Bark()
        {
            base.Color = "노란색";
            Console.WriteLine("왈왈 짖습니다.");
        }
    }

    // 코드 7-2 : Cat 클래스
    class Cat:Animal
    {
        public override void Meow() 
        {
            base.Color = "하얀색";
            Console.WriteLine("냥냥 웁니다."); 
        }
    }
    internal class Ex1
    {
        // 코드 7-3 : {{Dog}} 클래스와 {{Cat}}클래스의 인스턴스를 만들고 메서드 실행
        static void Main(string[] args)
        {
            //List<Dog> Dogs = new List<Dog>() { new Dog(), new Dog(), new Dog() };
            //List<Cat> Cats = new List<Cat>() { new Cat(), new Cat(), new Cat() };

            //int count = 0;
            //foreach (var item in Dogs)
            //{
            //    count++;
            //    item.Eat();
            //    item.Sleep();
            //    item.Brak();
            //}
            //Console.WriteLine("Dogs 호출 반복횟수 : " + count);

            //count = 0;
            //foreach (var item in Cats)
            //{
            //    count++;
            //    item.Eat();
            //    item.Sleep();
            //    item.Meow();
            //}
            //Console.WriteLine("Cats 호출 반복횟수 : " + count);

            //Dog dog = new Dog();
            //dog.Brak();
            //dog.Eat();
            //dog.Sleep();
            //dog.Age++;
            //Console.WriteLine("강아지의 나이는 " + dog.Age + "살");
            //Console.WriteLine("강아지의 색깔은 " + dog.Color);

            //Cat cat = new Cat();
            //cat.Meow();
            //cat.Eat();
            //cat.Sleep();
            //cat.Age++;
            //Console.WriteLine("고양이의 나이는 " + cat.Age + "살");
            //Console.WriteLine("고양이의 색깔은 " + cat.Color);

            List<Animal> animals = new List<Animal>()
            {
                new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat() 
            };

            foreach(var item in animals)
            {
                item.Eat(); // 부모로 위장한 자식은 부모의 멤버만 사용할 수 있다.
                item.Sleep();
                //if(item is Dog)
                //{
                //    ((Dog)item).Bark(); // 오버라이드가 되어있어서 형변환 안 해도 출력 가능
                //}                       // 오버라이드 안 하면 형변환 해줘야함
                //if (item is Cat)
                //{
                //    ((Cat)item).Meow();
                //}
                //Console.WriteLine();

                // as 키워드를 사용하는 경우 일반적인 형태
                var dog = item as Dog;
                if (dog != null)
                    dog.Bark();
                var cat = item as Cat;
                if (cat != null)
                    cat.Meow();
            }
        }
    }
}
