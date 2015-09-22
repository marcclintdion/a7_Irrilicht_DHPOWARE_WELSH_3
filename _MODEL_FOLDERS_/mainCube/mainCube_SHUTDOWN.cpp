                    if(mainCube_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &mainCube_NORMALMAP);                                                                  
                            mainCube_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(mainCube_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &mainCube_TEXTUREMAP);                                                                 
                            mainCube_TEXTUREMAP  = 0;                                                                                  
                    }                                                                                                              
                    if(mainCube_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &mainCube_VBO);                                                                         
                            mainCube_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(mainCube_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &mainCube_INDICES_VBO);                                                                         
                            mainCube_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
