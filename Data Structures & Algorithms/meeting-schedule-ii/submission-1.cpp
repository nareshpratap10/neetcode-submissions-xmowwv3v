/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        int ans =0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        for(Interval x : intervals){
            pq.push({x.start,1});
            pq.push({x.end,0});
        }
        int temp =0;
        while(!pq.empty()){
            pair<int,int> t = pq.top();
            pq.pop();
            if(t.second==1){
                temp++;
            }
            else{
                temp--;
            }
            ans=max(temp,ans);
        }


        return ans;
    }
};
