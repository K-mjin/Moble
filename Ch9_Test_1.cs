using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0722
{
    class Animal
    {
        protected string name;
        protected int height;
        protected int weight;
        protected int age;
        protected int speed;

        public Animal() { }

        public Animal(string name, int height, int weight, int age, int speed)
        {
            this.name = name;
            this.height = height;
            this.weight = weight;
            this.age = age;
            this.speed = speed;
        }

        public void Speak()
        {
            Console.WriteLine("이름:{0}", name);
            Console.WriteLine("키:{0}cm", height);
            Console.WriteLine("몸무게:" + this.weight + "kg");
            Console.WriteLine("나이:" + this.age + "살");
        }

        public void Run()
        {
            Console.WriteLine("{0}은/는 {1}km/h속도로 달립니다.", name, speed);
        }
    }
    class Pig : Animal
    {
        //public Pig() { }
        public Pig(string name, int height, int weight, int age, int speed) : base(name, height, weight, age, speed)
        {
        }
        
    }
    class Chicken : Animal
    {
        private int fly_speed;

        public Chicken() { }

        public Chicken(string name, int height, int weight, int age, int speed, int fly_speed)
        {
            base.name = name;
            base.height = height;
            base.weight = weight;
            base.age = age;
            base.speed = speed;
            this.fly_speed = fly_speed;
        }
        
        public void Fly()
        {
            Console.WriteLine(this.name + "은/는 " + this.fly_speed + "km/h속도로 날아다닙니다.");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Pig pig = new Pig("아기돼지", 30, 60, 5, 20);
            Chicken chicken = new Chicken("꼬꼬댁", 20, 25, 3, 40, 50);
            pig.Speak();
            pig.Run();
            Console.WriteLine();
            chicken.Speak();
            chicken.Run();
            chicken.Fly();
            // Pig babypig = new Pig(); 부모 클래스에서 protected로 접근제한자를 선언했기 때문에 자식클래스로 상속 불가능
        }
    }
}
