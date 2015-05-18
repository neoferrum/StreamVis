#version 330

in vec3 PointColor;
out vec4 FragColor;

void main() {
    FragColor = vec4(PointColor, 1.0);
}
