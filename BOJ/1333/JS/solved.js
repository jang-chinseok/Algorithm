const readline = require('readline');

const rl =readline.createInterface({
   input : process.stdin,
   output: process.stdout
});

let input =[];

rl.on('line',function(line){
    input = line.split(' ').map((el)=> parseInt(el));
    }).on('close',function(){
       
        let N = Number(input[0]);
        let L = Number(input[1]);
        let D = Number(input[2]);
        let j=0;
        let resolte=0;
        for(let i=0;i<N;i++){
            if(i*L+5(i-1)<D*j&&D*j<i(L+5)){
                resolte = d*j;
                break;
            }
            for(;D*j<i*L+5(i-1);j++){
                if(i*L+5(i-1)<D*j&&D*j<i(L+5)){
                    resolte = d*j;
                    break;
                }
            }
                
                

        }

        
      //이 아래가 프로그램을 작성하는 곳 이라고 생각하면 된다.
        console.log(resolte);
        process.exit();
        });
