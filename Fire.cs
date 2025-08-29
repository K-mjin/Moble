using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0724
{
    delegate void ThereIsAFire(string location);
    class Firestation
    {
        public void call119(string location) {
            Console.WriteLine($"소방서죠? 불이났어요! 주소는 {location}");
        }
        public void ShotOut(string location) 
        { 
            Console.WriteLine($"피하세요! {location}에 불이 났어요!"); 
        }
        public void Escape(string location) 
        { 
            Console.WriteLine($"{location}에서 나갑시다!"); 
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Firestation fs = new Firestation();
            ThereIsAFire fire = new ThereIsAFire(fs.call119);
            fire += fs.ShotOut;
            fire += fs.Escape;
            fire("우리집");
        }
    }
}
