//Aero Zajac
#include<iostream>
#include<string>
#include<vector>
int main()
{
        std::string list[5]; //array of 5 strings
        int limit = 5;
        int numItems = 0;
        std::string item;
        char input;
        do {
                std::cout<<"\n==GROCERY LIST MANAGER=="<<std::endl;
                std::cout<<"\nEnter your choice: "<<std::endl;
                std::cout<<"\n (A)dd an item"<<std::endl;
                std::cout<<"\n (Q)uit"<<std::endl;
                std::cout<<"\nYour choice (A/Q): "<<std::endl;
                std::cin>>input;
                if(input == 'A' || input == 'a') {
                        if(limit > sizeof(list)/sizeof(*list)) { //i'm a little confused is this what you're asking for
                                std::cout<< "You'll need a bigger list!" <<std::endl;
                        }
                        else{
                                list[numItems] = item;
                                numItems++;
                        }
                        std::cout<< "What is the item?" <<std::endl;
                        std::cin>> item;

                }
        } while(input != 'Q' && input != 'q'); 


        return 0;
}
