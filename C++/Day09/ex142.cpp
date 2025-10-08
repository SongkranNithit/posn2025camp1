#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    queue<int> q,temp;
    for (int i = 0; i <n;i++){
        string command;
        int data;
        cin >> command;
        if (command == "ENQUEUE"){
            cin >> data;
            q.push(data);
        } else if (command == "DEQUEUE"){
            if (!q.empty()) q.pop();



        } else if (command == "PROMOTE"){
            cin >> data;
            queue<int> temp = q;
            vector<int> elements;
            while (!temp.empty()) {
                elements.push_back(temp.front());
                temp.pop();
            }
            if (find(elements.begin(), elements.end(), data) != elements.end()) {
                queue<int> newq;
                newq.push(data);
                for (int x : elements) {
                    if (x != data) newq.push(x);
                }
                q = newq;
            }

        } else if (command == "DEMOTE") {
            cin >> data;
            queue<int> temp = q;
            vector<int> elements;

            while (!temp.empty()) {
                elements.push_back(temp.front());
                temp.pop();
            }

            if (find(elements.begin(), elements.end(), data) != elements.end()) {
                queue<int> newq;
                for (int x : elements) {
                    if (x != data) newq.push(x);
                }
                newq.push(data);
                q = newq;
            }
        }else if (command == "SHOW" && !q.empty()){
            queue<int> temp = q;
            while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
            }
            cout << endl;
        } else cout << "EMPTY" << endl;
    }
    return 0;
}