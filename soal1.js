function myBiodata(biodata){
  let biodataObj = {
    "name": 'Muhammad Haddad',
    "age" : '18',
    "Address": 'Depok',
    "Hobi": [
      'Reading Books', 'Music Interest', 'Coding' 
    ],
    "is_married": false,
    "School": {
      "Name": 'SMAN 9 Surabaya',
      "year_in": '2015',
      "year_out": '2018',
      "major" : 'Matematika dan Ilmu Alam'
    },
    "skill": [
      {
        "skill_name": 'Data Science Prgramming', 
        "level" : "Advance" ,
      }
      
    ],
    "interest_in_coding": true
    
  }
	
  return biodataObj
}
console.log(myBiodata('Haddad'));