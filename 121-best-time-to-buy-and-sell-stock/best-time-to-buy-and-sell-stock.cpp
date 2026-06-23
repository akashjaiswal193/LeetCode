class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int index = 0;
        // for(int i = 0; i < prices.size(); i++){
        //     if(min > prices[i]){
        //         min = prices[i];
        //         index = i;
        //     }
        // }
        // int max = prices[index];
        // if(min == prices.back()){
        //     return 0;
        // }
        // else{
        //     for(int i = index+1; i < prices.size(); i++){
        //         if(max < prices[i]){
        //             max = prices[i];
        //         }
        //     }
        // }
        for(int i = 1; i < prices.size(); i++ ){
            if(min > prices[i]){
                min = prices[i];
            }
            index = max(index, prices[i] - min);
        } 
        return index;
    }
};