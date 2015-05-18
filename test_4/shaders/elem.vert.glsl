#version 330

layout (location=0) in vec3 VertexPosition;
layout (location=1) in vec3 VertexColor;
uniform float scale;

//out vec4 position;
out vec3 Color;

void main()
{
    //gl_Position = vec4(VertexPosition,1.0);
    gl_Position = vec4(VertexPosition.x * scale, VertexPosition.y * scale, VertexPosition.z * scale, 1.0);
    Color = VertexColor;

}


