#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct Arrays{
    int b, s, d;
    vector<int> bounds;
    vector<int> consts;
};

struct ArrayRef{
    string name;
    vector<int> values;
};

map<string, struct Arrays> arraysM; 
vector<ArrayRef> arraysRefV;

void initializeVector(int r){
    for (int j = 0; j < r; j++){
        arraysRefV.push_back(ArrayRef());
    }
}

int physicalAddr(int i){
    int physAddr = arraysM[arraysRefV[i].name].consts.at(0);
    for (unsigned j = 1; j < arraysM[arraysRefV[i].name].consts.size(); j++){
        physAddr += arraysM[arraysRefV[i].name].consts.at(j) * arraysRefV[i].values.at(j-1);
    }
   return  physAddr;
    
}

int main(){

    int indexes, r, n, values, d;
    string name;
    struct Arrays arr;

    scanf("%d %d", &n, &r);
    initializeVector(r);
    for (int i = 0; i < n; i++){
        cin >> name >> arr.b >> arr.s >> arr.d;
        arr.consts.assign(arr.d+1, 0);
        arraysM[name] = arr;
        for (int j = 0; j < arraysM[name].d*2; j++){
            scanf("%d", &indexes);
            arraysM[name].bounds.push_back(indexes);
        }

    }

    for (map<string, struct Arrays>::iterator it = arraysM.begin(); it != arraysM.end(); it++){
        d = it->second.d;
        it->second.consts.at(d) = it->second.s;
        d--;
        while(d >= 0){
            if (d == 0){
                it->second.consts.at(0) += it->second.b;
                for (unsigned j = 1; j < it->second.consts.size(); j++){
                    it->second.consts.at(0) -= (it->second.consts.at(j) * it->second.bounds.at((j-1)*2));  
                } 
            }
            else{
                it->second.consts.at(d) += it->second.consts.at(d+1) * (it->second.bounds.at((d*2)+1) - it->second.bounds.at((d*2)) + 1);
            }
            d--;
        }
    }   

    for(int i = 0; i < r; i++){
        cin >> arraysRefV[i].name;
        for (int j = 0; j < arraysM[arraysRefV[i].name].d; j++){
            scanf("%d", &values);
            arraysRefV[i].values.push_back(values);
        }
    }
    
    

    //cout << arraysM["TWO"].bounds[0] << endl;
    //cout << arraysV[1].n << endl;
    for (unsigned i = 0; i < arraysRefV.size(); i++){
        cout << arraysRefV.at(i).name << "[";
        for (vector<int>::iterator it = arraysRefV.at(i).values.begin(); it != arraysRefV.at(i).values.end(); it++){
            if (it == arraysRefV.at(i).values.end() -1) cout << *it << "] = " << physicalAddr(i) << endl;
            else cout << *it << ", ";
        }
    }

    /*for (map<string, struct Arrays>::iterator it = arraysM.begin(); it != arraysM.end(); it++){
        cout << it->first << endl;
        for (int i : it->second.consts){
            cout << i << endl;
        }
    }*/

    return 0;
}
