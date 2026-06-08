/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        //binary search problem, shrink problem space; start at mid point
        // define two pointers l and r
        int l = 1;
        int r = n;
        // b search while loop, exit when value found i.e exit unknown
        // value guaranteed to be in there
        while(true){
            // 1 to another number so mid point calculation is l + (r-l) / 2
            // gives us correct mid point to begin
            int mid = l + (r-l)/2;
            int res = guess(mid);

            if(res == 0){
                return mid;
            }else if( res == -1){
                r = mid -1; // guess is too high so shrink space below mid
            } else {
                l = mid + 1; // guess is too low so focus numbers above mid
            }

        }
    }
};