#include<iostream>
#include<vector>
#include<ctype.h>

using namespace std;

struct piece{
    string name;
    string positions="";

    void setPosition(string pos){
        positions= positions+pos+" ";
    }
};

vector<string> split(string str){
    string temp= "";
    vector<string> vec;

    for(auto x: str){
        if(x=='/'){
            vec.push_back(temp);
            temp="";
        }
        else{
            temp=temp+x;
        }
    }
    vec.push_back(temp);
    return vec;
}


int main(){
    piece wPawn;
    wPawn.name="white pawn";
    piece bPawn;
    bPawn.name="black pawn";
    piece wSPawn;
    wSPawn.name="white superpawn";
    piece bSPawn;
    bSPawn.name="black superpawn";
    piece wGiraffe;
    wGiraffe.name="white giraffe";
    piece bGiraffe;
    bGiraffe.name="black giraffe";
    piece bMonkey;
    bMonkey.name="black monkey";
    piece wMonkey;
    wMonkey.name="white monkey";
    piece bEle;
    bEle.name="black elephant";
    piece wEle;
    wEle.name="white elephant";
    piece bLion;
    bLion.name="black lion";
    piece wLion;
    wLion.name="white lion";
    piece bCroc;
    bCroc.name="black crocodile";
    piece wCroc;
    wCroc.name="white crocodile";
    piece bZebra;
    bZebra.name="black zebra";
    piece wZebra;
    wZebra.name="white zebra";

    string test="gmelecz/ppppppp/7/7/7/PPPPPPP/GMELECZ";
    //okay we now have the strings
    vector<string> ranks= split(test);
    for(int i=6; i<-1; i--){
        string rank=ranks[i];
        if(rank.length() == 1){
            continue;
        }
        else{
            char file='a';
            for(int j=0; j<rank.length(); j++){
                char piece= rank[i];
                if(isdigit(piece)){
                    file= char(int(file) + (int(piece) - 48));
                }
                if(piece == 'P'){
                    string pos=file+ to_string(i+1);
                    wPawn.setPosition(pos);
                    file=char((int)file +1);
                }
                if(piece == 'p'){
                    string pos=file+ to_string(i+1);
                    bPawn.setPosition(pos);
                    file=char((int)file +1);
                }
//                if(piece == 'S'){
//                    string pos=file+ to_string(i+1);
//                    wSPawn.setPosition(pos);
//                    file=char((int)file +1);
//                }
//                if(piece == 's'){
//                    string pos=file+ to_string(i+1);
//                    bSPawn.setPosition(pos);
//                    file=char((int)file +1);
//                }
//                if(piece == 'G'){
//                    string pos=file+ to_string(i+1);
//                    wGiraffe.setPosition(pos);
//                    file=char((int)file +1);
//                }
//                if(piece == 'g'){
//                    string pos=file+ to_string(i+1);
//                    bGiraffe.setPosition(pos);
//                    file=char((int)file +1);
//                }
//                if(piece == 'M'){
//                    string pos=file+ to_string(i+1);
//                    wMonkey.setPosition(pos);
//                    file=char((int)file +1);
//                }
//                if(piece == 'm'){
//                    string pos=file+ to_string(i+1);
//                    bMonkey.setPosition(pos);
//                    file=char((int)file +1);
//                }
//                if(piece == 'E'){
//                    string pos=file+ to_string(i+1);
//                    wEle.setPosition(pos);
//                    file=char((int)file +1);
//                }
//                if(piece == 'e'){
//                    string pos=file+ to_string(i+1);
//                    bEle.setPosition(pos);
//                    file=char((int)file +1);
//
//                }
//                if(piece == 'L'){
//                    string pos=file+ to_string(i+1);
//                    wLion.setPosition(pos);
//                    file=char((int)file +1);
//
//                }
//                if(piece == 'l'){
//                    string pos=file+ to_string(i+1);
//                    bLion.setPosition(pos);
//                    file=char((int)file +1);
//
//                }
//                if(piece == 'C'){
//                    string pos=file+ to_string(i+1);
//                    wCroc.setPosition(pos);
//                    file=char((int)file +1);
//
//                }
//                if(piece == 'c'){
//                    string pos=file+ to_string(i+1);
//                    bCroc.setPosition(pos);
//                    file=char((int)file +1);
//
//                }
//                if(piece == 'Z'){
//                    string pos=file+ to_string(i+1);
//                    wZebra.setPosition(pos);
//                    file=char((int)file +1);
//
//                }
//                if(piece == 'z'){
//                    string pos=file+ to_string(i+1);
//                    bZebra.setPosition(pos);
//                    file=char((int)file +1);
//                }
            }
        }
    }
    cout<<bPawn.positions<<endl;
}