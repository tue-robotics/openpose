#ifndef OPENPOSE_HAND_HAND_PARAMETERS_HPP
#define OPENPOSE_HAND_HAND_PARAMETERS_HPP

#include <openpose/pose/poseParameters.hpp>

namespace op
{
    const auto HAND_MAX_HANDS = POSE_MAX_PEOPLE;

    const auto HAND_NUMBER_PARTS = 21u;
    #define HAND_PAIRS_RENDER_GPU {0,1,  1,2,  2,3,  3,4,  0,5,  5,6,  6,7,  7,8,  0,9,  9,10,  10,11,  11,12,  0,13,  13,14,  14,15,  15,16,  0,17,  17,18,  18,19,  19,20}
    const std::vector<unsigned int> HAND_PAIRS_RENDER {HAND_PAIRS_RENDER_GPU};
    #define HAND_COLORS_RENDER \
        100.f,  100.f,  100.f, \
        100.f,    0.f,    0.f, \
        150.f,    0.f,    0.f, \
        200.f,    0.f,    0.f, \
        255.f,    0.f,    0.f, \
        100.f,  100.f,    0.f, \
        150.f,  150.f,    0.f, \
        200.f,  200.f,    0.f, \
        255.f,  255.f,    0.f, \
          0.f,  100.f,   50.f, \
          0.f,  150.f,   75.f, \
          0.f,  200.f,  100.f, \
          0.f,  255.f,  125.f, \
          0.f,   50.f,  100.f, \
          0.f,   75.f,  150.f, \
          0.f,  100.f,  200.f, \
          0.f,  125.f,  255.f, \
        100.f,    0.f,  100.f, \
        150.f,    0.f,  150.f, \
        200.f,    0.f,  200.f, \
        255.f,    0.f,  255.f

    // Constant parameters
    const auto HAND_CCN_DECREASE_FACTOR = 8.f;
    const std::string HAND_PROTOTXT{"hand/pose_deploy.prototxt"};
    const std::string HAND_TRAINED_MODEL{"hand/pose_iter_120000.caffemodel"};

    // Rendering parameters
    const auto HAND_DEFAULT_ALPHA_KEYPOINT = POSE_DEFAULT_ALPHA_KEYPOINT;
    const auto HAND_DEFAULT_ALPHA_HEAT_MAP = POSE_DEFAULT_ALPHA_HEAT_MAP;
    const auto HAND_RENDER_THRESHOLD = 0.05f;
}

#endif // OPENPOSE_HAND_HAND_PARAMETERS_HPP
