std::cout<<"/*";           //true
std::cout<<"*/";           //true
std::cout<</*"*/"*/        //false
std::cout<</*"*/"/*"/*"*/; //false