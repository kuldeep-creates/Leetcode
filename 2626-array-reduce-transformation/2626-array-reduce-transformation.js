/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {

    for (let i=0;i<nums.length;i++){
        let sum = fn(init,nums[i])
        init=sum;
    }

    return init;
    
};