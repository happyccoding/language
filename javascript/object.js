var grades = {'egoing': 10, 'k8805': 6, 'sorialgi': 80};

var grades = {};
grades['egoing'] = 10;
grades['k8805'] = 6;
grades['sorialgi'] = 80;


var grades = new Object();
grades['egoing'] = 10;
grades['k8805'] = 6;
grades['sorialgi'] = 80;

var grades = {'egoing': 10, 'k8805': 6, 'sorialgi': 80};
console.log(grades['sorialgi']);
console.log(grades.sorialgi);

var grades = {'egoing': 10, 'k8805': 6, 'sorialgi': 80};
for(key in grades) {
    console.log("key : "+key+" value : "+grades[key]+"\n");
}

var grades = {
    'list': {'egoing': 10, 'k8805': 6, 'sorialgi': 80},
    'show' : function(){
        for(var name in this.list){
            console.log(name+':'+this.list[name]+"\n");
        }
    }
};
grades.show();