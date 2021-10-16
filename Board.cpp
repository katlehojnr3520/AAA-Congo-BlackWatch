#include<iostream>
#include<vector>
#include<ctype.h>

using namespace std;

struct piece{
    string name;
    string positions="";

    void setPosition(string pos){
        string temp="";
        if(positions.length() == 0){
            temp=pos+" ";
            positions= temp;
            return;
        }

        if(positions.length() == 3){
            if(pos.at(0) > positions.at(0)){
                temp= positions + pos + " ";
            }
            else{
                temp= pos + " " + positions;
            }
            positions= temp;
            return;
        }

        else{

            for(int i=0; i < positions.length(); i= i + 3){
                int end=i+3;
                if(pos.at(0) > positions.at(i)){
                    for(int j=i; j<end; j++){
                        temp= temp + positions.at(j);
                    }
                }
                else{
                    temp=temp+pos+" ";
                    for(int k=i; k < positions.length(); k++){
                        temp= temp + positions.at(k);
                    }
                    break;
                }
            }
            temp=temp+pos+" ";
        }
        positions= temp;
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
    piece wPawn= piece();
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
    //wZebra.name="white zebra";

    string test="gmelecz/ppppppp/7/7/7/PPPPPPP/GMELECZ";
    string test1="1m1El2/P1P2P1/1S4C/4S2/1E3S1/1P3c1/2GL3";
    vector<string> ranks= split(test);

    int r=1;
    for(int i=6; i>-1; i--){
        string rank= ranks[i];
        if(rank.length() == 1){
            r++;
            continue;
        }
        else{
            char file= 'a';
            for(int j=0; j<rank.length();j++){
                char piece= rank.at(j);
                if(isdigit(piece)){
                    file= char(int(file) + (int(piece) - 48));
                    continue;
                }
                if(piece == 'P'){
                    string pos=file+ to_string(r);
                    wPawn.setPosition(pos);
                }
                if(piece == 'p'){
                    string pos=file+ to_string(r);
                    bPawn.setPosition(pos);
                }
                if(piece == 'S'){
                    string pos=file+ to_string(r);
                    wSPawn.setPosition(pos);
                }
                if(piece == 's'){
                    string pos=file+ to_string(r);
                    bSPawn.setPosition(pos);
                }
                if(piece == 'G'){
                    string pos=file+ to_string(r);
                    wGiraffe.setPosition(pos);
                }
                if(piece == 'g'){
                    string pos=file+ to_string(r);
                    bGiraffe.setPosition(pos);
                }
                if(piece == 'm'){
                    string pos=file+ to_string(r);
                    bMonkey.setPosition(pos);
                }
                if(piece == 'M'){
                    string pos=file+ to_string(r);
                    wMonkey.setPosition(pos);
                }
                if(piece == 'E'){
                    string pos=file+ to_string(r);
                    wEle.setPosition(pos);
                }
                if(piece == 'e'){
                    string pos=file+ to_string(r);
                    bEle.setPosition(pos);
                }
                if(piece == 'L'){
                    string pos=file+ to_string(r);
                    wLion.setPosition(pos);
                }
                if(piece == 'l'){
                    string pos=file+ to_string(r);
                    bLion.setPosition(pos);
                }
                if(piece == 'C'){
                    string pos=file+ to_string(r);
                    wCroc.setPosition(pos);
                }
                if(piece == 'c'){
                    string pos=file+ to_string(r);
                    bCroc.setPosition(pos);
                }
                if(piece == 'Z'){
                    string pos=file+ to_string(r);
                    wZebra.setPosition(pos);
                }
                if(piece == 'z'){
                    string pos=file+ to_string(r);
                    bZebra.setPosition(pos);
                }
                file=char((int)file +1);
            }
        }
        r++;
    }
    cout<<wPawn.name<<": "<<wPawn.positions<<endl;
    cout<<bPawn.name<<": "<<bPawn.positions<<endl;
    cout<<wSPawn.name<<": "<<wSPawn.positions<<endl;
    cout<<bSPawn.name<<": "<<bSPawn.positions<<endl;
    cout<<wGiraffe.name<<": "<<wGiraffe.positions<<endl;
    cout<<bGiraffe.name<<": "<<bGiraffe.positions<<endl;
    cout<<wMonkey.name<<": "<<wMonkey.positions<<endl;
    cout<<bMonkey.name<<": "<<bMonkey.positions<<endl;
    cout<<wEle.name<<": "<<wEle.positions<<endl;
    cout<<bEle.name<<": "<<bEle.positions<<endl;
    cout<<wLion.name<<": "<<wLion.positions<<endl;
    cout<<bLion.name<<": "<<bLion.positions<<endl;
    cout<<wCroc.name<<": "<<wCroc.positions<<endl;
    cout<<bCroc.name<<": "<<bCroc.positions<<endl;
    cout<<wZebra.name<<": "<<wZebra.positions<<endl;
    cout<<bZebra.name<<": "<<bZebra.positions<<endl;

}