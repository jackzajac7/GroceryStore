//Aero Zajac
#include<iostream>
#include<string>
#include<vector>
int main()
{
    int numItems = 0;
    std::vector<std::string> list; 
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
            std::cout<< "What is the item?" <<std::endl;
            std::cin>>item;
            int size = list.size();
                        //list.resize(size+=1);
            list.push_back(item);
        }
        if(input == 'Q' || input == 'q') {
            std::cout<< "==ITEMS TO BUY==" <<std::endl;
            if(list.empty() == true) {
                std::cout<< "No items to buy!" <<std::endl;
            } 
            else if(list.empty() == false) { 
                for(int i=0; i<list.size();i++) {
                    std::cout<< i+1 << " " << list[i] <<std::endl;
                }

            }

        }
    } while(input != 'Q' && input != 'q');


    return 0;
}
