//
// Created by ursbe on 08.12.2022.
//

#ifndef EXERCICES_ROBOT_H
#define EXERCICES_ROBOT_H


class Robot {
public:
    explicit Robot(int posX = 0);

    void deplacer();
    void faireDemiTour();
    int getPosition() const;

private:
    int posX;
    const int uniteDeplace = 1;
    int direction = 1;
};


#endif //EXERCICES_ROBOT_H
