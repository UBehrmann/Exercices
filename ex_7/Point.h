//
// Created by ursbe on 06.12.2022.
//

#ifndef EXERCICES_POINT_H
#define EXERCICES_POINT_H


class Point {
public:
    Point(float x, float y);
    void translation(float x, float y);
    void affiche() const;
    float abscisse() const;
    float ordonnee() const;


private:
    float x;
    float y;

};


#endif //EXERCICES_POINT_H
