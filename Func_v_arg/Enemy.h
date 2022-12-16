#ifndef ENEMY_H
#define ENEMY_H


class Enemy
{
    public:
        Enemy(int h, int s)
        {
            health = h;
            strength = s;
            isalive = true;
        }

        int get_health()
        {
            return health;
        }

        void set_health(int h)
        {
            health = h;
        }

        int get_strength()
        {
            return strength;
        }

        void set_strength(int s)
        {
            strength = s;
        }

        bool get_isalive()
        {
            if (health <= 0) {return false;}
            else {return true;}
        }

        void set_isalive(bool b)
        {
            isalive = b;
        }
    protected:

    private:
        int health, strength;
        bool isalive;
};

#endif // ENEMY_H
