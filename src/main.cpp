#include <Geode/Geode.hpp>
#include <Geode/modify/GameObject.hpp>

using namespace geode::prelude;

class $modify(GameObject) {
    // This hides it when the orb is first created
    void setupCustomSprites() {
        GameObject::setupCustomSprites();
        if (this->m_orbRing) {
            this->m_orbRing->setVisible(false);
        }
    }

    // This ensures it stays hidden when you get close to the orb
    void activateObject() {
        GameObject::activateObject();
        if (this->m_orbRing) {
            this->m_orbRing->setVisible(false);
            this->m_orbRing->setOpacity(0); // Extra safety
        }
    }
};
