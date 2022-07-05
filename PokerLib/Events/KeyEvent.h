//
// Created by poker on 2022/7/5.
//

#ifndef POKERENGINE_KEYEVENT_H
#define POKERENGINE_KEYEVENT_H


#include "Event.h"

namespace PE {
    class PE_API KeyEvent : public Event
    {
    public:
        inline int GetKeyCode() const { return m_KeyCode; }

        EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)

    protected:
        KeyEvent(int keycode)
            : m_KeyCode(keycode) {}
        int m_KeyCode;
    };

    class PE_API KeyPressEvent : public KeyEvent
    {
    public:
        KeyPressEvent(int keycode, int repeatCount)
            : KeyEvent(keycode), m_RepeatCount(repeatCount)
        {
        }

        inline int GetRepeatCount() const { return m_RepeatCount; }

        std::string ToString() const override
        {
            std::stringstream ss;
            ss << "KeyPressedEvent: " << m_KeyCode << " (" << m_RepeatCount << " repeats)";
            return ss.str();
        }

        EVENT_CLASS_TYPE(KeyPressed)

    private:
        int m_RepeatCount;
    };

    class PE_API KeyReleasedEvent : public KeyEvent
    {
    public:
        KeyReleasedEvent(int keycode)
            : KeyEvent(keycode)
        {
        }

        std::string ToString() const override
        {
            std::stringstream ss;
            ss << "KeyReleasedEvent: " << m_KeyCode;
            return ss.str();
        }

        EVENT_CLASS_TYPE(KeyReleased);
    };
}

#endif //POKERENGINE_KEYEVENT_H
