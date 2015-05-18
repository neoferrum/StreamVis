#version 330

layout (location=0) in vec3 PointPosition;
layout (location=1) in vec3 PointColor;
uniform float scale;
out vec3 ColorPoint;

void main()
{

    gl_Position = vec4(PointPosition.x * scale, PointPosition.y * scale, PointPosition.z * scale, 1.0);

   /* for (int i = 0; i < 3; i ++)
    {
        float x = PointPosition.x + 0.1*i;
        float y = PointPosition.y + 0.1*i;
        gl_Position = vec4(x* scale, y *scale, PointPosition.z * scale, 1.0);
    }*/
    ColorPoint = PointColor;
}


