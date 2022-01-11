class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxHeap;
        for(int i=0;i<stones.size();i++){
            maxHeap.push(stones[i]);
        }
        while(maxHeap.size()!=1){
            int top = maxHeap.top();
            maxHeap.pop();
            int stop = maxHeap.top();
            maxHeap.pop();
            if(top!=stop) maxHeap.push(top-stop);
            else maxHeap.push(0);
        }
        return maxHeap.top();
    }
};