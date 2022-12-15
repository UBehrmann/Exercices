//
// Created by ursbe on 06.12.2022.
//

#ifndef EXERCICES_POINT_H
#define EXERCICES_POINT_H


class Point {
public:
    Point(float x = 0, float y = 0);

    void setPoint(float x = 0, float y = 0);

    void translation(float x, float y);
    void affiche() const;
    float abscisse() const;
    float ordonnee() const;

    Point somme(const Point& point) const;

    void rotation(float radians);

    Point coordonneesPolaire(float rho, float theta);

private:
    float x;
    float y;

};


#endif //EXERCICES_POINT_H
