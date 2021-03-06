//Richard Herodes
//June 2020
//Random Word Generator

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

//Return the letter associated with the given number
string whatLetter(int numLetter){
    string corrLetter;
    if(numLetter==0){
        corrLetter="A";
    }else if(numLetter==1){
        corrLetter="B";
    }else if(numLetter==2){
        corrLetter="C";
    }else if(numLetter==3){
        corrLetter="D";
    }else if(numLetter==4){
        corrLetter="E";
    }else if(numLetter==5){
        corrLetter="F";
    }else if(numLetter==6){
        corrLetter="G";
    }else if(numLetter==7){
        corrLetter="H";
    }else if(numLetter==8){
        corrLetter="I";
    }else if(numLetter==9){
        corrLetter="J";
    }else if(numLetter==10){
        corrLetter="K";
    }else if(numLetter==11){
        corrLetter="L";
    }else if(numLetter==12){
        corrLetter="M";
    }else if(numLetter==13){
        corrLetter="N";
    }else if(numLetter==14){
        corrLetter="O";
    }else if(numLetter==15){
        corrLetter="P";
    }else if(numLetter==16){
        corrLetter="Q";
    }else if(numLetter==17){
        corrLetter="R";
    }else if(numLetter==18){
        corrLetter="S";
    }else if(numLetter==19){
        corrLetter="T";
    }else if(numLetter==20){
        corrLetter="U";
    }else if(numLetter==21){
        corrLetter="V";
    }else if(numLetter==22){
        corrLetter="W";
    }else if(numLetter==23){
        corrLetter="X";
    }else if(numLetter==24){
        corrLetter="Y";
    }else if(numLetter==25){
        corrLetter="Z";
    }
    return corrLetter;
}

//Check if the given string is a word
void checkWord(string word){
    string check;
    
    //Open dictionary
    ifstream ifs;
    ifs.open("wordList.txt");
    
    //Check until word found or EOF
    while(ifs>>check){
        if(word==check){
            cout<<word<<endl;
            break;
        }
    }
    
    //Close file
    ifs.close();
    return;
}

int main(){
    string letter1, letter2, letter3, letter4, word;
    
    //Run forever
    while(1){
        
        //Generate 4 random letters
        letter1=whatLetter(rand() % 25);
        letter2=whatLetter(rand() % 25);
        letter3=whatLetter(rand() % 25);
        letter4=whatLetter(rand() % 25);

        //Append letters together to create a 'word'
        word = letter1 + letter2 + letter3 + letter4;
        
        //Call function to see if the word is real
        checkWord(word);
    }
    
    return 0;
}
