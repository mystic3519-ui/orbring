#include <Geode/Geode.hpp>
#include <Geode/modify/GameObject.hpp>

using namespace geode::prelude;

class $modify(GameObject) {
    // Hide the ring when the orb is first loaded
    void setupCustomSprites() {
        GameObject::setupCustomSprites();
        if (this->m_orbRing) {
            this->m_orbRing->setVisible(false);
            this->m_orbRing->setOpacity(0);
        }
    }

    // GD 2.2074 updates visuals constantly; we force hide it here too
    void update(float dt) {
        GameObject::update(dt);
        if (this->m_orbRing) {
            this->m_orbRing->setVisible(false);
            this->m_orbRing->setOpacity(0);
        }
    }

    // Targets the "active" ring that appears when in range
    void activateObject() {
        GameObject::activateObject();
        if (this->m_orbRing) {
            this->m_orbRing->setVisible(false);
            this->m_orbRing->setOpacity(0);
        }
    }
};
