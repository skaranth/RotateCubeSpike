typedef struct {
    float Position[3];
    float Color[4];
} Vertex;
const float FRONT= 1;
const float BACK= -1;
const float TOP= 1;
const float BOTTOM= -1;
const float RIGHT= 1;
const float LEFT= -1;

const Vertex Vertices[] = {
    {{RIGHT, BOTTOM, FRONT}, {1, 0, 0, 1}},
    {{RIGHT, TOP, FRONT}, {0, 1, 0, 1}},
    {{LEFT, TOP, FRONT}, {0, 0, 1, 1}},
    {{LEFT, BOTTOM, FRONT}, {0, 0, 0, 1}},

    {{RIGHT, BOTTOM, BACK}, {1, 0, 0, 1}},
    {{RIGHT, TOP, BACK}, {0, 1, 0, 1}},
    {{LEFT, TOP, BACK}, {0, 0, 1, 1}},
    {{LEFT, BOTTOM, BACK}, {0, 0, 0, 1}}
    
    
};

const GLubyte Indices[] = {
    //front
    0, 3, 2,
    2, 1, 0,
    
    //back
    4 ,7 ,6,
    6 ,5 ,4,
    
    //left
    3 ,7 ,6,
    6, 2, 3,

    //right
    0 ,4 ,5,
    5, 1, 0,

    //top
    1 ,2 ,6,
    6, 5, 1,

    //bottom
    0 ,4 ,5,
    5, 1, 0

};
