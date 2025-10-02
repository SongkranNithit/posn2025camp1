#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,spn=0,spe=0,sjt=0;
    cin >> n;
    int arr[n][3];
    const string name[3] = {"Peanut","Pete","Chertam"};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
            if (j == 0){
                spn += arr[i][j];
            } else if (j == 1){
                spe += arr[i][j];
            } else if (j == 2){
                sjt += arr[i][j];
            }
        }
    }
    cout << "Peanut: " << spn << endl;
    cout << "Pete: " << spe << endl;
    cout << "Chertam: " << sjt << endl;
    int scores[3] = {spn, spe, sjt};
    int maxScore = *max_element(scores, scores+3);
    vector<string> winners;
    for (int i = 0; i < 3; i++){
        if (scores[i] == maxScore){
            winners.push_back(name[i]);
        }
    }
    cout << "Winner: ";
    for (int i = 0; i < winners.size(); i++){
        cout << winners[i];
        if (i < winners.size()-1) cout << " & ";
    }
    cout << " Score: " << maxScore << "\n";

    return 0;
}