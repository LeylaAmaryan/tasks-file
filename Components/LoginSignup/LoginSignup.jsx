 
import React, { useState } from 'react';
import'./LoginSignup.css'
 
import user_icon from "../Assets/usericon.png"
import email_icon from "../Assets/emailicon.jpg"
import password_icon from "../Assets/passwordicon.png"

      const LoginSignup = () =>{
    
    const[action,setAction] = useState("Login");
    const imageSize = {
        width: '30px', // set your desired width
        height: '30px', // set your desired height
      };
    return(
        <div className= 'container'>
         <div className= "header">
            <div className= "text">{action}</div>
            <div className="underline"></div>
            
            </div>
            <div className="inputs">
                {action==="Login"?<div></div>: <div className="input">
                <img src={user_icon} alt=""style={imageSize}/>
                <input type="text" placeholder="Name"/>

            </div>}

             

            <div className="input">
                <img src={email_icon} alt=""style={imageSize}/>
                <input type="email" placeholder="Email Id"/>

        </div>
        
            <div className="input">
                <img src={password_icon} alt=""style={imageSize}/>
                <input type="password" placeholder="Password"/>
                
        </div>
        </div>
        {action==="Sign Up"?<div></div>: <div className="forgot-password">Lost Password?<span>Click Here!</span></div>}
       
        <div className="submit-container">
         <div className={action==="Login"?"submit gray":"submit"}onClick={()=>{setAction("Sign Up")}}>Sign Up</div>
         <div className={action==="Sign Up"?"submit gray":"submit"}onClick={()=>{setAction("Login")}}>Login</div>
         </div>
         </div> 
    )
}

export default LoginSignup;
