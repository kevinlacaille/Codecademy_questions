#include <iostream>

void it_call(std::string on_off_attempt){

  std::cout << "Hello. IT.\n";

  if(on_off_attempt == "n"){

    std::cout << "Have you tried turning it off and on again? y/n\n";

  }
  else{
    std::cout << "Are you sure? Try again :) \n";
  }

}

int main() {

  std::string on_off_attempt = "n";

  // Conduct IT support
  it_call(on_off_attempt);
  std::cin >> on_off_attempt;

  // Check in with Jenn
  std::cout << "Oh hi Jen!\n";

  // Conduct IT support again...
  std::cin >> on_off_attempt;
  it_call(on_off_attempt);

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";

  // Conduct IT support yet again...zzzz...
  std::cin >> on_off_attempt;
  it_call(on_off_attempt);

}
