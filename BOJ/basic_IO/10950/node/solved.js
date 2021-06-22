const readline = require('readline');

const rl =readline.createInterface({
   input : process.stdin,
   output: process.stdout
});

let input =[];

rl.on('line',function(line){

    input.push(line);
    }).on('close',function(){
      
        let N = parseInt(input[0]);
        for(let i=1; i<N; i++){
          let AandB = inmput[i].split(" ");
          let num1 = parseInt(AandB[0]);
          let num2 = parseInt(AandB[1])


        
     
        console.log(num1+num2);
        }
        process.exit();
        });
