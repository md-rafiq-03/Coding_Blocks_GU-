#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    // declaration
    // unordered map

    //unordered_map<key_data_type,value_data_tyep> nameOfMap
    // name->roll number
    unordered_map<string,int> mymap;
    pair<string,int> p={"abc",101};
    // .insert(pair)
    mymap.insert(p);

    // []-> square bracket
    mymap["def"]=110;
    mymap["xyz"];

    // how to acess
    // .at(key)
    // int value=mymap.at("abc");
    // cout<<value<<endl;
    cout<<mymap.at("abc")<<endl;
    // [key]-> sqaure bracket
    cout<<mymap["abc"]<<endl;

    //cout<<mymap.at("uvw")<<endl;
    cout<<mymap["uvw"]<<endl;

    // .count(key)-> true/false

    cout<<mymap.count("abc")<<endl;
    cout<<mymap.count("Ram")<<endl;

    // remove / delete
    // .erase(key)

    //mymap.erase("abc");
    cout<<mymap.count("abc")<<endl;
 

    //Iterator
    //unordered_map<string,int> ::Iterator it=my.begin();
    // it=my.begin();
    auto it=mymap.begin();
    cout<<"key: value"<<endl;
    cout<<"................"<<endl;
    // for( auto it1=it;it1!=mymap.end();it1++){
    //     cout<<it1->first<<": "<<it1->second<<endl;
    // }


    for(auto &it2:mymap){
        it2.second=100;
    }

    for(auto it2:mymap){
        //it2.second=100;
        cout<<it2.first<<" "<<it2.second<<endl;
        
    }
    return 0;
}










































