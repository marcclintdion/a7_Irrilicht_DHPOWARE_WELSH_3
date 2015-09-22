      //------------------------------------------------------------------------------------------                                              
      #ifdef __APPLE__                                                                                                                          
      filePathName = [[NSBundle mainBundle] pathForResource:@"curvyRelief_HEIGHT" ofType:@"png"];                                                  
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &curvyRelief_HEIGHTMAP);                                                                                                     
      glBindTexture(GL_TEXTURE_2D, curvyRelief_HEIGHTMAP);                                                                                          
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      //---------------------        
      
      filePathName = [[NSBundle mainBundle] pathForResource:@"curvyRelief_DOT3" ofType:@"png"];                                                  
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &curvyRelief_NORMALMAP);                                                                                                     
      glBindTexture(GL_TEXTURE_2D, curvyRelief_NORMALMAP);                                                                                          
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      //---------------------                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"curvyRelief" ofType:@"png"];                                                       
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &curvyRelief_TEXTUREMAP);                                                                                                       
      glBindTexture(GL_TEXTURE_2D, curvyRelief_TEXTUREMAP);                                                                                            
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------                                              
      #ifdef WIN32                                                                                                                            
      loadTexture("_MODEL_FOLDERS_/curvyRelief/curvyRelief_HEIGHT.png",          curvyRelief_HEIGHTMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/curvyRelief/curvyRelief_DOT3.png",          curvyRelief_NORMALMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/curvyRelief/curvyRelief.png",               curvyRelief_TEXTUREMAP);                                                        
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
      #include    "curvyRelief.cpp"                                                                                                                
      glGenBuffers(1,              &curvyRelief_VBO);                                                                                                
      glBindBuffer(GL_ARRAY_BUFFER, curvyRelief_VBO);                                                                                                
      glBufferData(GL_ARRAY_BUFFER, sizeof(curvyRelief), curvyRelief, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
      #include    "curvyRelief_INDICES.cpp"                                                                                                                
      glGenBuffers(1,              &curvyRelief_INDICES_VBO);                                                                                                
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, curvyRelief_INDICES_VBO);                                                                                                
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(curvyRelief_INDICES), curvyRelief_INDICES, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
