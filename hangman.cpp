#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>  

void display(std::string, std::vector<char>);
void check_guess();
void is_over();


int main()
{
    srand(time(NULL));
    int rand_num = rand() % 5;
    int num_guess = 5;
    std::vector<std::string> movies = {"Avatar", "Kung Fu Panda", "Avengers", "Dragon Ball", "Insiduous"};
    std::vector<char> guesses;
    std::string secret = movies[rand_num];
    display(secret, guesses);

    // while (num_guess >= 1){
    //     for (auto )
    // }

    // std::cout << "----------\n" 
    //           << "|\n"
    //           << "|\n"
    //           << "|\n"
    //           << "|\n"
    //           << "|\n"
    //           << "|\n"
    //           << "|\n"
    //           << "|\n"
    //           << "-----";
        
    // std::cout << std::endl;

}

void display(std::string secret, std::vector<char> guesses)
{
    for (int i = 0; i < guesses.size(); i++){
        
    }
    
    for (auto letter : secret)
        if (letter == ' ')
            std::cout << " ";
        else {
            std::cout << '*';
        }
    
    std::cout << std::endl;
}