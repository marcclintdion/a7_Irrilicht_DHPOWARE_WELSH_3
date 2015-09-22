        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"mainCube_DOT3" ofType:@"png"];                                           
        if(fileName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &mainCube_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, mainCube_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           fileName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"mainCube" ofType:@"png"];                                                
        if(fileName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &mainCube_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, mainCube_TEXTUREMAP);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           fileName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------                                                                                                                                  
        #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------                                              
      #ifdef WIN32                                                                                                                            
      loadTexture("_MODEL_FOLDERS_/mainCube/mainCube_HEIGHT.png",        mainCube_HEIGHTMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/mainCube/mainCube_DOT3.png",          mainCube_NORMALMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/mainCube/mainCube.png",               mainCube_TEXTUREMAP);                                                        
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
      #include    "mainCube.cpp"                                                                                                                
      glGenBuffers(1,              &mainCube_VBO);                                                                                                
      glBindBuffer(GL_ARRAY_BUFFER, mainCube_VBO);                                                                                                
      glBufferData(GL_ARRAY_BUFFER, sizeof(mainCube), mainCube, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
      #include    "mainCube_INDICES.cpp"                                                                                                                
      glGenBuffers(1,              &mainCube_INDICES_VBO);                                                                                                
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mainCube_INDICES_VBO);                                                                                                
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(mainCube_INDICES), mainCube_INDICES, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
