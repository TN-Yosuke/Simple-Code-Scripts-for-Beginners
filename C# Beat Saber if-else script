
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            //into for the prompt
            Console.WriteLine("BSPVI (Beat Saber Previous Version Installer)\n is a simple way to downgrade Beat Saber if you use\n it on the Oculus platform. Press enter to continue: ");
            Console.WriteLine("This porject was built as practice for my dive into c#.\n Its simple but for me a huge step.\n");
            Console.WriteLine("MAKE A BACKUP OF ALL YOUR OLD BEAT SABER FILES LIKE\n CUSTOM SONGS, SABERS, ETC... MAKE A BACK UP THE\n BEAT SABER FILE TO BY GOING INTO PROGRAMS AND\n RIGHT CLICKING AND COPYING THE BEATSABER FILE ONTO YOUR DESKTOP.\n I AM NOT RESPONSIBLE FOR FILE LOSS OR GAME LOSS.");
            Console.ReadLine();

            //select version of BS to install
            Console.WriteLine("\n");
            Console.WriteLine("Step 1:\n Select which version of Beat Saber you want to install.\n 1 [1.11.1] \n 2[1.12.2]");
            Console.Write("Version Select: ");
            int option = Convert.ToInt32(Console.ReadLine());

            //if version 1.11.1 is select this code runs
            if (option == 1)
            {
                Console.WriteLine("\n");
                Console.WriteLine("Use this link to install Beat Saber Version 1.11.1 from Google Drive: LinkGoesHere");
            }
//if version 1.12.2 is selected this code runs
            else if (option == 2)
            {
                Console.WriteLine("\n");
                Console.WriteLine("Use this link to install Beat Saber version 1.12.2 from Google Drive: LinkGoesHere");
            }

            //this asked the user if they want a how to on how to install the files into the directory
            Console.Write("Would you like a tutorial on how to install? (Y for yes, N for no): ");
            Char answer = Convert.ToChar(Console.ReadLine());


             //if they answer yes is sends them this link
             if(answer == 'Y')
            {
                Console.WriteLine("Here ya go!: LinkGoesHere");
                Console.ReadLine();
            }

             //if they answer no it ends the program
            else if (answer == 'N')
            {
                Console.WriteLine("Alright then buddy, have at it an enjoy your old version of Beat Saber!");
                Console.ReadLine();
            }
        }
    }
}
