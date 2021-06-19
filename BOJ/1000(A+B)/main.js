const readline = require('readline');

const rl =readline.createInterface({
   input : process.stdin,
   output: process.stdout
});

let imput =[];

rl.on('line',function(line){
    input = line.split(' ').map((el)=> parseInt(el));
    }).on('close',function(){
       
        let num1 = Number(input[0]);
        let num2 = Number(input[1]);


        
      //이 아래가 프로그램을 작성하는 곳 이라고 생각하면 된다.
        console.log(num1+num2);
        process.exit();
        });
