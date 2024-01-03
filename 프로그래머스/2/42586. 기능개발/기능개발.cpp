#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    int cnt;
    queue<int> q;
    vector<int> answer;
    
    for (int i=0; i<speeds.size(); i++)
        q.push(i);
    
    while(!q.empty()){
        cnt = 0;
        for(int i=0; i<speeds.size(); i++) {
            progresses[i] += speeds[i];
        }
        while(!q.empty() && progresses[q.front()]>=100){
            cnt++; q.pop();
        }
        if(cnt!=0) answer.push_back(cnt);  
    }
    return answer;
}