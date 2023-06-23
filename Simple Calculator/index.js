let screen=document.getElementById('screen')
buttons=document.querySelectorAll('button')
let screenValue='';
let percentage=0;
let pa='';
let pb='';
for(item of buttons){
    item.addEventListener('click',(e)=>{
        buttonText=e.target.innerText;
        if(buttonText=='x'){
            buttonText='*';
            screenValue+=buttonText;
            screen.value=screenValue;
        }
        else if(buttonText=='C'){
            screenValue="";
            screen.value=screenValue;
        }
        else if(buttonText=='%'){
            pa=screenValue;
            screenValue+=buttonText;
            screen.value=screenValue;
            percentage=1;
        }
        else if(buttonText=='='){
            if(percentage==1){
                screen.value=(pa/100)*pb;
                percentage=0;
                pa='';
                pb='';
            }
            else
            screen.value=eval(screenValue);
        }
        else{
            if(percentage==1){
                pb+=buttonText;
                screen.value=pb; 
            }
            screenValue+=buttonText;
            screen.value=screenValue;
        }
    })
}