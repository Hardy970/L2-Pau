// exeecice 1
console.log("exercice 1 \n\n\n")
let tableau=[1,2000,4,90,45,900,4]
let max=tableau[0];
for(let i=1;i<tableau.length;i++)
{
    if(tableau[i]> max)
    {
        max=tableau[i]
    }
}
console.log(max)

//exercice 2
console.log("\n\nexercice 2 \n\n\n")

let tab1=['pomme','orange','banane']
let tab2=['hardy','tom','jack']

console.log("tableau 1 "+ tab1 )
console.log("tableau 2 "+ tab2 )

let tab3=[]

for(let i=0;i<tab1.length;i++)
{
    tab3.push(tab1[i],tab2[i]);
}
console.log("tableau fusionné et alterné "+tab3)



//exercice 3
console.log("\n\nexercice 3 \n\n\n")

let mytab=[]
for(let i=0;i<20;i++)
{
    mytab.push(Math.floor(Math.random() *100 ))
}
console.log("tableau avant tri :"+ mytab)

mytab.sort((a,b)=> a - b)

console.log("tableau trié :"+ mytab)


//exercice 4
console.log("\n\nexercice 4 \n\n\n")


let tabmulti=[]

for(let i=0;i<5;i++)
{
    let tabtmp=[]
    for(let j=0;j<5;j++)
    {
        tabtmp[j]=  Math.floor(Math.random()*99) + 1;
    }
    tabmulti.push(tabtmp)
}

// for(let i=0;i<5;i++)
//     {
//         for(let j=0;j<5;j++)
//         {
//             console.log(tabmulti[i][j])
//         }
//         console.log("\t")
//     }
    
// console.log(tabmulti.j)
tabmulti.forEach(row => {
    console.log(row.join(' '))
})