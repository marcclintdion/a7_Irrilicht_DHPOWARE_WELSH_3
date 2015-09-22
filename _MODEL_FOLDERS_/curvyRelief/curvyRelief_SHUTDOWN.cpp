                    if(curvyRelief_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &curvyRelief_NORMALMAP);                                                                  
                            curvyRelief_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(curvyRelief_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &curvyRelief_TEXTUREMAP);                                                                 
                            curvyRelief_TEXTUREMAP  = 0;                                                                                  
                    }                                                                                                              
                    if(curvyRelief_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &curvyRelief_VBO);                                                                         
                            curvyRelief_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(curvyRelief_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &curvyRelief_INDICES_VBO);                                                                         
                            curvyRelief_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
