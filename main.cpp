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
#include <iterator>
#include <map>

using namespace std;
using std::map;
void dictionary(string Cypher);
void makeKeys(char Message);
void encrypt();
void decrypt();
int main(int argc, const char * argv[]){
    int choice;
    cout<<"What would you like to do? choose (1 to encrypt a message) || (2 to decrypt a message)|| (0 to exit the program)."<<endl;
    cin>>choice;
    
    while(choice!=0){
    switch (choice) {
        case 1:
            encrypt();
            break;
        case 2:
            decrypt();
            break;
        default:
            cout<<"invalid choice recompile"<<endl;
            cout<<"Choose 1 or 2 "<<endl;
    }
        cin>>choice;
    }
    return 0;
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
            exit(0);
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
    cin>>toEncrypt;
    //getline(cin,toEncrypt,'\n');// to test on the terminal
    cout<<"Your message encrypted is: "<<endl;;

    for(int i=0;i<=toEncrypt.length();i++){
        makeKeys(toEncrypt[i]);
        cout<<endl;
    }
}



void makeKeys(char Message){
    if(Message=='A'){
      cout<< ".-";}
    if(Message=='B'){
      cout<< "-...";}
    if(Message=='C'){
      cout<< "-.-.";}
    if(Message=='D'){
      cout<< "-..";}
    if(Message=='E'){
      cout<< ".";}
    if(Message=='F'){
      cout<< "..-.";}
    if(Message=='G'){
      cout<< "--.";}
    if(Message=='H'){
      cout<< "....";}
    if(Message=='I'){
      cout<< "..";}
    if(Message=='J'){
      cout<< ".---";}
    if(Message=='K'){
      cout<< "-.-";}
    if(Message=='L'){
      cout<< ".-..";}
    if(Message=='M'){
      cout<< "--";}
    if(Message=='N'){
      cout<< "-.";}
    if(Message=='O'){
      cout<< "---";}
    if(Message=='P'){
      cout<< ".--.";}
    if(Message=='Q'){
      cout<< "--.-";}
    if(Message=='R'){
      cout<< ".-.";}
    if(Message=='S'){
      cout<< "...";}
    if(Message=='T'){
      cout<< "- ";}
    if(Message=='U'){
      cout<< "..-";}
    if(Message=='V'){
      cout<< "...-";}
    if(Message=='W'){
      cout<< ".--";}
    if(Message=='X'){
      cout<< "-..-";}
    if(Message=='Y'){
      cout<< "-.--";}
    if(Message=='Z'){
      cout<< "--..";}
    if(Message==' '){
        cout<<" ";
    }
    /*
    if(Message=='a'){
      cout<< ".-";}
    if(Message=='b'){
      cout<< "-...";}
    if(Message== 'c'){
      cout<< "-.-.";}
    if(Message== 'd'){
      cout<< "-..";}
    if(Message== 'e'){
      cout<< ".";}
    if(Message== 'f'){
      cout<< "..-.";}
    if(Message== 'g'){
      cout<< "--.";}
    if(Message== 'h'){
      cout<< "....";}
    if(Message== 'i'){
      cout<< "..";}
    if(Message== 'j'){
      cout<< ".---";}
    if(Message== 'k'){
      cout<< "-.-";}
    if(Message== 'l'){
      cout<< ".-..";}
    if(Message== 'm'){
      cout<< "--";}
    if(Message== 'n'){
      cout<< "-.";}
    if(Message== 'o'){
      cout<< "---";}
    if(Message== 'p'){
      cout<< ".--.";}
    if(Message== 'q'){
      cout<< "--.-";}
    if(Message== 'r'){
      cout<< ".-.";}
    if(Message== 's'){
      cout<< "...";}
    if(Message== 't'){
      cout<< "-";}
    if(Message== 'u'){
      cout<< "..-";}
    if(Message== 'v'){
      cout<< "...-";}
    if(Message== 'w'){
      cout<< ".--";}
    if(Message== 'x'){
      cout<< "-..-";}
    if(Message== 'y'){
      cout<< "-.--";}
    if(Message== 'z'){
      cout<< "--..";}
     */
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
}
