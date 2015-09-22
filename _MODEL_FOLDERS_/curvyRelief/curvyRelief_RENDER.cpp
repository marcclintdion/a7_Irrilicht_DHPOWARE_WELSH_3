    glUseProgram(facing_UP_SHADER) ; 
    glBindBuffer(GL_ARRAY_BUFFER, curvyRelief_VBO);                                                                                                                                
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, curvyRelief_INDICES_VBO);                                                                                                                                
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
    LoadIdentity(modelView);                                                                                                                                                  
    Translate(modelView, moveSet[0], moveSet[1], moveSet[2]);    
    Rotate(modelView, 1.0, 0.0, 0.0, rotateModelWithLeftMouse[0]);
    Rotate(modelView, 0.0, 1.0, 0.0, rotateModelWithLeftMouse[1]);     
    
                                                                                                                                                  
    Translate(modelView, curvyRelief_POSITION[0], curvyRelief_POSITION[1], curvyRelief_POSITION[2]);                                                                                         
    Rotate(modelView, curvyRelief_ROTATE[0], curvyRelief_ROTATE[1], curvyRelief_ROTATE[2], curvyRelief_ROTATE[3]+rotateModel);//--MODEL                                                                       
    
    
    MultiplyMatrix(mvpMatrix, projection, modelView);                                                                                                                         
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT             
    LoadIdentity(lightMatrix);                                                                                                                                                
    InvertMatrix(lightMatrix, modelView);                                                                                                                                     
    //Translate(lightMatrix, 1.0, -10.0, 2.0);                                                                                                                                      
    //======================================================================================================                                                                  
    glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(0));                                                                                                  
    glEnableVertexAttribArray(0);	                                                                                                                                          
    glVertexAttribPointer(1,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(12));                                                                                                  
    glEnableVertexAttribArray(1);	                                                                                                                                          
    glVertexAttribPointer(2,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(24));                                                                                                 
    glEnableVertexAttribArray(2);                                                                                                                                             
    glVertexAttribPointer(3,   2, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(36));                                                                                                 
    glEnableVertexAttribArray(3);                                                                                                                                             
    
    glUniform4f(UNIFORM_LIGHT_POSITION_01_facing_UP, facing_UP_LIGHT_POSITION_01[0], facing_UP_LIGHT_POSITION_01[1], facing_UP_LIGHT_POSITION_01[2], facing_UP_LIGHT_POSITION_01[3]);        
    glUniform1f(UNIFORM_SHININESS_facing_UP, facing_UP_SHININESS);                                                                                                                  
    glUniform1f(UNIFORM_ATTENUATION_facing_UP, facing_UP_ATTENUATION);    
    glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ_facing_UP,   1,0,  mvpMatrix); 
    glUniformMatrix4fv(UNIFORM_MODELVIEW_facing_UP,   1,0,      modelView);                                                                                                          
    glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX_facing_UP,    1,0,  lightMatrix);                                                                                                    
    glUniform1i (UNIFORM_TEXTURE_HEIGHT_facing_UP, 2);     
    glUniform1i (UNIFORM_TEXTURE_DOT3_facing_UP, 1);                                                                                                                             
    glUniform1i (UNIFORM_TEXTURE_facing_UP, 0 );        
    
    //======================================================================================================                                                                  
    glActiveTexture ( GL_TEXTURE2 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, curvyRelief_HEIGHTMAP);                                                                                                                          
    //---     
   
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, curvyRelief_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, curvyRelief_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 384, GL_UNSIGNED_INT, 0);                                                                                                     

