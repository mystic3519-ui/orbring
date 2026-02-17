#include <Geode/Geode.hpp>
#include <Geode/modify/GameObject.hpp>

using namespace geode::prelude;

class $modify(GameObject) {
    void setupCustomSprites() {
        GameObject::setupCustomSprites();
        // Check if the ring exists before touching it
        if (this->m_orbRing) {
            this->m_orbRing->setVisible(false);
            this->m_orbRing->setScale(0.f);
        }
    }

    void update(float dt) {
        GameObject::update(dt);
        if (this->m_orbRing) {
            this->m_orbRing->setVisible(false);
        }
    }
};
