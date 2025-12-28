# miniRT - Minimal Ray Tracer

A minimalistic raytracing engine written in C. It renders simple 3D scenes described in a configuration file, applying lighting, shadows, and reflections to create realistic images.

## ✨ Features
- Renders geometric primitives: spheres, planes, cylinders, squares, triangles
- Implements ambient, diffuse, and specular lighting
- Phong reflection model for realistic materials
- Camera movement and multiple viewpoints
- Handles shadows and basic reflections

## 🎨 Supported Elements
- **Camera**: Position, orientation, field of view
- **Lights**: Ambient, point lights
- **Objects**: Spheres, planes, cylinders, etc.
- **Materials**: Colors, reflectivity, specular components

## 🚀 Usage
### Generate image
./miniRT [scene_file.rt]
### Scene syntax
`###_vec` values have to be passed as a,b,c 
`color_vec` values have to be bassed as R,G,B or for objects, as a texture (checkerboard, sand etc.)
`<surface_shininess>` for objects only: have to be passed as a number between 1 (matte) and 150 (shiny)
`<surface_roughness>` for objects only: have to be passed as a number between 0 (smooth) and 1 (rough)

`A <intensity> <color_vec>`  &rarr; Ambiant Light

&rarr; ex: `A 0.2 255,255,255`


`C <position_vec>	<direction_vec>	<field of view>`  &rarr; Camera

&rarr; ex: `C 5,0,0 -1,0,0  100`


`L <position_vec> <intensity> <color_vec>`  &rarr; Singular Light

&rarr; ex: `L 5,0,0 1.0`


`sp <position_vec_center> <radius> <color_vec> [s <surface_shininess>] [b <surface_roughness>]`  &rarr; Sphere

&rarr; ex: `sp 0,0,0 5 snow s 150 b 1`


`cy <position_vec_center> <direction_vec> <base_width> <heigh> <color_vec> [s <surface_shininess>] [b <surface_roughness>]`  &rarr; cylinder

&rarr; ex: `cy 0,0,0 0,-1,0 2 4 160,0,160 s 150`


`pl <position_vec> <normal_vec> <color_vec> [s <surface_shininess>] [b <surface_roughness>]`  &rarr; plane

&rarr; ex: `pl -8,0,0 1,0,0 checkerboard`


`co  <position_vec_tip> <direction_vec> <base_diameter> <height> <color_vec> [s <surface_shininess>] [b <surface_roughness>]` &rarr; cone 

&rarr; ex: `co 0,-2,0 0,1,0 2 4 160,0,160 s 150`
