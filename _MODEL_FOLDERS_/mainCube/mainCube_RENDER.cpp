    glBindBuffer(GL_ARRAY_BUFFER, mainCube_VBO);                                                                                                                                
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mainCube_INDICES_VBO);                                                                                                                                
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
    LoadIdentity(modelView);                                                                                                                                                  
    Translate(modelView, mainCube_POSITION[0], mainCube_POSITION[1], mainCube_POSITION[2]);                                                                                         
    Rotate(modelView, mainCube_ROTATE[0], mainCube_ROTATE[1], mainCube_ROTATE[2], mainCube_ROTATE[3]); 

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
    //======================================================================================================                                                                  
    glActiveTexture ( GL_TEXTURE2 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, mainCube_HEIGHTMAP);                                                                                                                          
    //---     
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, mainCube_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, mainCube_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);                                                                                                     

