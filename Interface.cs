using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    interface IFightable
    {
        void attack();
    }
    abstract class Unit
    {
        public abstract void move(int x, int y);
        void stop() { }
    }
    class Marine : Unit, IFightable
    {
        public override void move(int x, int y)
        {
            Console.WriteLine("Marine Move [X : {0}, Y : {1}]", x, y);
        }
        public void attack()    // 인터페이스 멤버여서 오버라이드를 안 써도 무조건 오버라이드로 메서드
        {
            Console.WriteLine("Marine이 공격합니다.");
        }
        public void stimPack()
        {
            Console.WriteLine("스팀팩을 분사합니다.");
        }
    }
    class Dropship : Unit
    {
        public override void move(int x, int y)
        {
            Console.WriteLine("Dropship Move [X ; {0}, Y : {1}]", x, y);
        }
        public void load()
        {
            Console.WriteLine("수송기가 착륙했습니다.");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Marine marine1 = new Marine();
            //IFightable marine = new Marine();  인스턴스는 생성하지 못하지만 참조는 가능
            marine1.move(300, 300);
            marine1.attack();
            marine1.stimPack();
            Dropship dropship1 = new Dropship();
            dropship1.move(200, 200);
            dropship1.load();
        }
    }
}
