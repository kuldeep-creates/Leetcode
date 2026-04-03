/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let filteredArr=[];
    for (let i = 0 ; i<arr.length;i++ ){
        let istrue = fn(n=arr[i],i);
        if(istrue){
            filteredArr.push(arr[i]);
        }

    }

    return filteredArr;


    
};