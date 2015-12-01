#pragma once
#include "object.hpp"

namespace RendAR
{
  class Mesh : public Object {
  public:
    Mesh();
    ~Mesh();
    void initBuffers();
    virtual void render(glm::mat4& view, glm::mat4& proj) override;
  };
}