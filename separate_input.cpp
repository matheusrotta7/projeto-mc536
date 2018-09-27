#include<bits/stdc++.h>

using namespace std;

int main() {
    int id_number;
    char diagnosis;
    float mean_radius, sd_radius, largest_radius;
    float mean_texture, sd_texture, largest_texture;
    float mean_perimeter, sd_perimeter, largest_perimeter;
    float mean_area, sd_area, largest_area;
    float mean_smoothness, sd_smoothness, largest_smoothness;
    float mean_compactness, sd_compactness, largest_compactness;
    float mean_concavity, sd_concavity, largest_concavity;
    float mean_concave_points, sd_concave_points, largest_concave_points;
    float mean_symmetry, sd_symmetry, largest_symmetry;
    float mean_fractal_dimension, sd_fractal_dimension, largest_fractal_dimension;
    while (scanf("%d,%c,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",
    &id_number, &diagnosis,
    &mean_radius,
    &mean_texture,
    &mean_perimeter,
    &mean_area,
    &mean_smoothness,
    &mean_compactness,
    &mean_concavity,
    &mean_concave_points,
    &mean_symmetry,
    &mean_fractal_dimension,
    &sd_radius,
    &sd_texture,
    &sd_perimeter,
    &sd_area,
    &sd_smoothness,
    &sd_compactness,
    &sd_concavity,
    &sd_concave_points,
    &sd_symmetry,
    &sd_fractal_dimension,
    &largest_radius,
    &largest_texture,
    &largest_perimeter,
    &largest_area,
    &largest_smoothness,
    &largest_compactness,
    &largest_concavity,
    &largest_concave_points,
    &largest_symmetry,
    &largest_fractal_dimension)!=EOF) {
        printf("%d,%f,%f,%f\n", id_number, sd_radius, sd_perimeter, sd_area);
    }

    return 0;
}
