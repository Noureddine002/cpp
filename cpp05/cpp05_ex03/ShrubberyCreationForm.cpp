#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",145,137){
    this->target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm",145,137){
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & shru):Form("ShrubberyCreationForm",145,137){
    this->target = shru.target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & shru){
    this->target = shru.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::action() const{
    std::ofstream out(this->target + "_shruberry");
    if(out.fail()){
        std::cerr << " error in creation or opening of: " << this->target + "_shrubbery" << std::endl;
        return ;
    }
    out <<"       /\\         " << std::endl;
	out <<"      /\\*\\      " << std::endl;
	out <<"     /\\O\\*\\     " << std::endl;
	out <<"    /*/\\/\\/\\    " << std::endl;
	out <<"   /\\O\\/\\*\\/\\   " << std::endl;
	out <<"  /\\*\\/\\*\\/\\/\\  " << std::endl;
	out <<" /\\O\\/\\/*/\\/O/\\ " << std::endl;
	out <<"       ||       " << std::endl;
	out <<"       ||       " << std::endl;
	out <<"       ||       " << std::endl;
    out.close();
}