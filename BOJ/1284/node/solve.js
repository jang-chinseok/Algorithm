const readline = require('readline');

const rl =readline.createInterface({
   input : process.stdin,
   output: process.stdout
});

let input =[];

rl.on('line',function(line){
    input = line.split(' ');
    }).on('close',function(){
       let i=0;
       while(input[i]!=0){
        const num = input[i]
        let sum=num.length; 
         for(let j=0; j<num.length;j++){
            const curruntNum=num[j];
            if (curruntNum=='1')
              sum+=2;
            else if (curruntNum=='0')
              sum+=4;
            else
              sum+=3;
         }
         console.log(sum);
         i++;
       }

        process.exit();
        });
