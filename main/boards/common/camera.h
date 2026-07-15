#ifndef CAMERA_H
#define CAMERA_H

#include <string>

// ponytail: stub — SensairShuttle has no camera

class Camera {
public:
    virtual ~Camera() = default;
    // ponytail: stub — SensairShuttle has no camera, no-op base impl
    virtual void SetExplainUrl(const std::string& url, const std::string& token) { (void)url; (void)token; }
};

#endif // CAMERA_H
