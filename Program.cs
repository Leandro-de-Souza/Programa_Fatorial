using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_FATORIAL {
    internal class Program {
        static void Main(string[] args) {

            int N, i, fatorial;

            Console.Write("Digite o valor de N: ");
            N = int.Parse(Console.ReadLine());
            
            fatorial = 1;

            for (i = N; i > 0; i--) {
                fatorial = fatorial * i;
            }

            Console.WriteLine("FATORIAL = " + fatorial);

        }
    }
}
