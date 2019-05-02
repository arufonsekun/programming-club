#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

typedef tuple<int, int> ii;
int nf, hp;
vector<ii> dm;
vector<vector<int> > cache;

int solve(int i, int f, int l, int m) {
    if (l >= hp) return m;
    if (i == nf or f == nf){
        if (l >= hp) return m; 
        else return 2500;
    }

    if (cache[i][f] != 0) {
        printf("entro\n");
        return cache[i][f];
    }
    int b = solve(i+1, f, l, m);
    int a = solve(i+1, f+1, l+get<0>(dm[i]), m+get<1>(dm[i]));
    int smaller = a < b ? a : b; 
    
    if (cache[i][f] < smaller){
        return cache[i][f];
    }else{
        return cache[i][f] = smaller;
    }
}

int main() {
    int d, m;
    vector<int> init;
    ii par;

    while (scanf("%d %d", &nf, &hp) != EOF) {
        init.assign(nf, 2500);

        for (int i = 0; i < nf; i++){
            scanf("%d %d", &d, &m);
            get<0>(par) = d;
            get<1>(par) = m;
            dm.push_back(par);
            cache.push_back(init);
        }
        cout << solve(0, 0, 0, 0) << endl;
        dm.clear();
        cache.clear();
    }

}
