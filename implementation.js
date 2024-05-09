
class stack{
    arr;
    constructor(){
        this.arr=[];
    }
    getsize(){
        return this.arr.length;
    }
};
stack.prototype.push= function(value){
    this.arr.push(value);
};
stack.prototype.pop= function(){
    console.log(this.arr[this.arr.length-1]);
    this.arr.pop();
}
/**
 * similarly build others too
 */
let st = new stack();
st.push(3);
st.push(4);
st.push(5);
console.log(st.getsize());
st.pop();
// console.log(this.arr.length);