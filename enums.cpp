#include <iostream>
enum supercars{MCLAREN,PORSCHE,MERCEDESAMG,PAGANI,FERRARI,BUGATTI,KOENIGSEGG,LAMBHORHINI,ASTONMARTIN};
int main(){
  std::cout<<"These are the brands we offer:\nMclaren(0)\n Porsche(1)\n Mercedes-AMG(2)\n Pagani(3)\n Ferarri(4)\n Bugatti(5)\n Koneisegg(6)\n Lamborgini(7)\n Aston-Martin(8)\n";
  std::cout<<"Select the no. of the brand you want: ";
  int number;
  std::cin>>number;
  switch(number)
{
    case MCLAREN:
        std::cout << "\nMade in Woking, UK";
        break;

    case PORSCHE:
        std::cout << "\nMade in Stuttgart, Germany";
        break;

    case MERCEDESAMG:
        std::cout << "\nMade in Affalterbach, Germany";
        break;

    case PAGANI:
        std::cout << "\nMade in Modena, Italy";
        break;

    case FERRARI:
        std::cout << "\nMade in Maranello, Italy";
        break;

    case BUGATTI:
        std::cout << "\nMade in Molsheim, France";
        break;

    case KOENIGSEGG:
        std::cout << "\nMade in Angelholm, Sweden";
        break;

    case LAMBHORHINI:
        std::cout << "\nMade in Sant'Agata Bolognese, Italy";
        break;

    case ASTONMARTIN:
        std::cout << "\nMade in Gaydon, UK";
        break;

    default:
        std::cout << "\nUnknown Supercar Brand";
}

  return 0;
}