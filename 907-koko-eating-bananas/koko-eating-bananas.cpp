class Solution {
public:
//function to calculate total hours at given speed
long long  calculateTotalHours(vector<int>& piles, int speed){
    long long totalH=0;
    for(int banans : piles){
        totalH+= (long long )ceil((double) banans / speed);
    }
    return totalH;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        //find max element
        int maxPile = *max_element(piles.begin(), piles.end());

        int s = 1; 
        int e = maxPile;
        int ans = maxPile;

        while(s<=e){
            int mid = (s+e)/2;
            long long totalH=calculateTotalHours(piles, mid);

            if(totalH <= h){
              ans = mid;
              e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;

    }
};