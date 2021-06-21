const readline = require('readline');

const rl =readline.createInterface({
   input : process.stdin,
   output: process.stdout
});

let input =[];

rl.on('line',function(line){
    input = line.split(' ');
    }).on('close',function(){
       let=i;
       while(input[i]!=0){
        let sum=curruntNum.length; 
        const curruntNum = input[i].map((el)=> parseInt(el));
         
         for(i=0; i<input.length;i++){
            if (curruntNum==1)
              sum+=2;
            else if (curruntNum==0)
              sum+=4;
            else
              sum+=3;
         }
         console.log(sum);

       }

        process.exit();
        });
