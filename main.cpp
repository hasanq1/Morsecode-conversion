//
//  main.cpp
//  Morsecode
//
//  Created by Hasan Qureshi on 2/12/20.
//  Copyright © 2020 Hasan Qureshi. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#include <array>
#include <sstream>
#include <string>
#include <unistd.h>

using namespace std;
void dictionary(string Cypher);
void makeKeys(char Message);
void encrypt();
void decrypt();
void menu();
void menu(){
    int choice;
    cout<<"What would you like to do? choose (1 to encrypt a message) || (2 to decrypt a message) || (0 to exit the program)."<<endl;
    cin>>choice;
    while(choice!=0){
    switch (choice) {
        case 1:
            encrypt();
            cout<<"Encryption mode ended."<<endl;
            cout<<"Choose (1 to encrypt a message) || (2 to decrypt a message) || (0 to exit the program)."<<endl;
            cin>>choice;
            break;
        case 2:
            decrypt();
            cout<<"Decryption mode ended."<<endl;
            cout<<"Choose (1 to encrypt a message) || (2 to decrypt a message) || (0 to exit the program)."<<endl;
            cin>>choice;
            break;
        default:
            cout<<"What would you like to do? choose (1 to encrypt a message) || (2 to decrypt a message) || (0 to exit the program)."<<endl;
    }
    }
}
void decrypt(){
    string toDecrypt,placeHolder;
    cout<<"Enter the message you would like to decrypt "<<endl;
    //cout<<toDecrypt;
    //getline(cin,toDecrypt,'\n');
     //  for(int i=0; i<toDecrypt.length();i++){
       //    if(toDecrypt[i]==' '){
    while(toDecrypt!="end"){
        cin>>toDecrypt;
        if(toDecrypt=="end"){
            break;
        }
        else{
        dictionary(toDecrypt);
        }
        cout<<endl;
    }
             //  placeHolder= " ";
           //}
          // placeHolder=placeHolder+toDecrypt[i];
       // }
   // dictionary(placeHolder);
}
void encrypt(){
    string toEncrypt;
    cout<<"Enter the message you yould like to encrypt: "<<endl;
    cout<<"Type 0 to exit"<<endl;
    while(cin>>toEncrypt){
        if (toEncrypt == "0"){
            cout<<"Encryption exited."<<endl;
            break;
        }
       // else{
        cout<<"Your message encrypted is: "<<endl;
        for(int i=0;i<toEncrypt.length();i++){
        makeKeys(toEncrypt[i]);
        cout<<endl;
        }
        cout<<"Continue encryption, enter another message else type 0 to exit: "<<endl;
    }
}

void makeKeys(char Message){
    if(Message=='A'|| Message=='a')
    {cout<< ".-";}
    if(Message=='B'|| Message=='b')
    {cout<< "-...";}
    if(Message=='C'|| Message=='c')
    {cout<< "-.-.";}
    if(Message=='D'|| Message=='d')
    {cout<< "-..";}
    if(Message=='E'|| Message=='e')
    {cout<< ".";}
    if(Message=='F'|| Message=='f')
    {cout<< "..-.";}
    if(Message=='G'|| Message=='g')
    {cout<< "--.";}
    if(Message=='H'|| Message=='h')
    {cout<< "....";}
    if(Message=='I'|| Message=='i')
    {cout<< "..";}
    if(Message=='J'|| Message=='j')
    {cout<< ".---";}
    if(Message=='K'|| Message=='k')
    {cout<< "-.-";}
    if(Message=='L'|| Message=='l')
    {cout<< ".-..";}
    if(Message=='M'|| Message=='m')
    {cout<< "--";}
    if(Message=='N'|| Message=='n')
    {cout<< "-.";}
    if(Message=='O'|| Message=='o')
    {cout<< "---";}
    if(Message=='P'|| Message=='p')
    {cout<< ".--.";}
    if(Message=='Q'|| Message=='q')
    {cout<< "--.-";}
    if(Message=='R'|| Message=='r')
    {cout<< ".-.";}
    if(Message=='S'|| Message=='s')
    {cout<< "...";}
    if(Message=='T'|| Message=='t')
    {cout<< "-";}
    if(Message=='U'|| Message=='u')
    {cout<< "..-";}
    if(Message=='V'|| Message=='v')
    {cout<< "...-";}
    if(Message=='W'|| Message=='w')
    {cout<< ".--";}
    if(Message=='X'|| Message=='x')
    {cout<< "-..-";}
    if(Message=='Y'|| Message=='y')
    {cout<< "-.--";}
    if(Message=='Z'|| Message=='z')
    {cout<< "--..";}
    if(Message==' ')
    {cout<<" ";}
}

void dictionary(string Cypher){
    if(Cypher==".-"){
        cout<<"A";}
    if(Cypher=="-..."){
        cout<<"B";}
    if(Cypher=="-.-."){
        cout<<"C";}
    if(Cypher=="-.."){
        cout<<"D";}
    if(Cypher=="."){
        cout<<"E";}
    if(Cypher=="..-."){
        cout<<"F";}
    if(Cypher=="--."){
        cout<<"G";}
    if(Cypher=="...."){
        cout<<"H";}
    if(Cypher==".."){
        cout<<"I";}
    if(Cypher==".---"){
        cout<<"J";}
    if(Cypher=="-.-"){
        cout<<"K";}
    if(Cypher==".-.."){
        cout<<"L";}
    if(Cypher=="--"){
        cout<<"M";}
    if(Cypher=="-."){
        cout<<"N";}
    if(Cypher=="---"){
        cout<<"O";}
    if(Cypher==".--."){
        cout<<"P";}
    if(Cypher=="--.-"){
        cout<<"Q";}
    if(Cypher==".-."){
        cout<<"R";}
    if(Cypher=="..."){
        cout<<"S";}
    if(Cypher=="-"){
        cout<<"T";}
    if(Cypher=="..-"){
        cout<<"U";}
    if(Cypher=="...-"){
        cout<<"V";}
    if(Cypher==".--"){
        cout<<"W";}
    if(Cypher=="-..-"){
        cout<<"X";}
    if(Cypher=="-.--"){
        cout<<"Y";}
    if(Cypher=="--.."){
        cout<<"Z";}
    if(Cypher==" "){
        cout<<" ";}
}
int main(int argc, const char * argv[]){
    pid_t pid;
    menu();
    fork();
    return 0;
}
