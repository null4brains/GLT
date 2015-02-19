/*
GLT 1.0 is available under the zlib license :

This software is provided 'as-is', without any express or implied
warranty.  In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#if defined (_WIN32) || (_WIN64) || (_WINDOWS)
#include <windows.h>
#endif

#include <gl/gl.h>

static const GLfloat g_vertices[115][2] = {
  { 8.0f, 24.0f },
  { 8.0f, 10.0f },
  { 10.0f, 10.0f },
  { 10.0f, 24.0f },
  { 8.0f, 8.0f },
  { 8.0f, 6.0f },
  { 10.0f, 6.0f },
  { 10.0f, 8.0f },
  { 6.0f, 24.0f },
  { 6.0f, 20.0f },
  { 8.0f, 20.0f },
  { 10.0f, 20.0f },
  { 12.0f, 20.0f },
  { 12.0f, 24.0f },
  { 2.0f, 20.0f },
  { 2.0f, 18.0f },
  { 4.0f, 18.0f },
  { 4.0f, 20.0f },
  { 6.0f, 18.0f },
  { 4.0f, 24.0f },
  { 12.0f, 18.0f },
  { 14.0f, 18.0f },
  { 14.0f, 20.0f },
  { 14.0f, 24.0f },
  { 16.0f, 18.0f },
  { 16.0f, 20.0f },
  { 4.0f, 12.0f },
  { 6.0f, 12.0f },
  { 12.0f, 12.0f },
  { 14.0f, 12.0f },
  { 12.0f, 10.0f },
  { 14.0f, 10.0f },
  { 16.0f, 10.0f },
  { 16.0f, 12.0f },
  { 6.0f, 10.0f },
  { 4.0f, 10.0f },
  { 2.0f, 12.0f },
  { 2.0f, 10.0f },
  { 4.0f, 6.0f },
  { 6.0f, 6.0f },
  { 12.0f, 6.0f },
  { 14.0f, 6.0f },
  { 4.0f, 22.0f },
  { 8.0f, 22.0f },
  { 10.0f, 22.0f },
  { 16.0f, 22.0f },
  { 2.0f, 22.0f },
  { 2.0f, 16.0f },
  { 4.0f, 16.0f },
  { 2.0f, 14.0f },
  { 4.0f, 14.0f },
  { 8.0f, 14.0f },
  { 8.0f, 16.0f },
  { 10.0f, 14.0f },
  { 10.0f, 16.0f },
  { 14.0f, 14.0f },
  { 14.0f, 16.0f },
  { 16.0f, 14.0f },
  { 16.0f, 16.0f },
  { 14.0f, 8.0f },
  { 16.0f, 8.0f },
  { 2.0f, 8.0f },
  { 2.0f, 6.0f },
  { 16.0f, 24.0f },
  { 2.0f, 24.0f },
  { 6.0f, 22.0f },
  { 8.0f, 18.0f },
  { 16.0f, 6.0f },
  { 10.0f, 12.0f },
  { 12.0f, 8.0f },
  { 12.0f, 22.0f },
  { 12.0f, 16.0f },
  { 12.0f, 14.0f },
  { 4.0f, 8.0f },
  { 9.0f, 24.0f },
  { 9.0f, 22.0f },
  { 11.0f, 22.0f },
  { 11.0f, 24.0f },
  { 9.0f, 20.0f },
  { 11.0f, 20.0f },
  { 13.0f, 20.0f },
  { 13.0f, 22.0f },
  { 7.0f, 22.0f },
  { 7.0f, 20.0f },
  { 9.0f, 18.0f },
  { 11.0f, 18.0f },
  { 2.0f, 4.0f },
  { 6.0f, 8.0f },
  { 14.0f, 22.0f },
  { 2.0f, 15.0f },
  { 4.0f, 15.0f },
  { 14.0f, 15.0f },
  { 16.0f, 15.0f },
  { 10.0f, 18.0f },
  { 6.0f, 16.0f },
  { 6.0f, 14.0f },
  { 8.0f, 12.0f },
  { 8.0f, 2.0f },
  { 10.0f, 2.0f },
  { 9.0f, 8.0f },
  { 9.0f, 6.0f },
  { 5.0f, 20.0f },
  { 2.0f, 0.0f },
  { 4.0f, 0.0f },
  { 14.0f, 4.0f },
  { 16.0f, 4.0f },
  { 14.0f, 2.0f },
  { 16.0f, 2.0f },
  { 2.0f, 2.0f },
  { 8.0f, 0.0f },
  { 10.0f, 0.0f },
  { 6.0f, 2.0f },
  { 6.0f, 0.0f },
  { 14.0f, 0.0f },
  { 16.0f, 0.0f }
};

static const GLubyte g_33Indices[12] = { 0, 1, 2, 0, 2, 3, 4, 5, 6, 4, 6, 7};
static const GLubyte g_34Indices[12] = { 8, 9, 10, 8, 10, 0, 3, 11, 12, 3, 12, 13};
static const GLubyte g_35Indices[96] = { 14, 15, 16, 14, 16, 17, 17, 16, 18, 17, 18, 9, 19, 17, 9, 19, 9, 8, 9, 18, 20, 9, 20, 12, 12, 20, 21, 12, 21, 22, 13, 12, 22, 13, 22, 23, 22, 21, 24, 22, 24, 25, 16, 26, 27, 16, 27, 18, 20, 28, 29, 20, 29, 21, 28, 30, 31, 28, 31, 29, 29, 31, 32, 29, 32, 33, 27, 34, 30, 27, 30, 28, 26, 35, 34, 26, 34, 27, 36, 37, 35, 36, 35, 26, 35, 38, 39, 35, 39, 34, 30, 40, 41, 30, 41, 31};
static const GLubyte g_36Indices[114] = { 42, 17, 10, 42, 10, 43, 43, 10, 11, 43, 11, 44, 44, 11, 25, 44, 25, 45, 0, 43, 44, 0, 44, 3, 46, 14, 17, 46, 17, 42, 14, 47, 48, 14, 48, 17, 47, 49, 50, 47, 50, 48, 48, 50, 51, 48, 51, 52, 52, 51, 53, 52, 53, 54, 54, 53, 55, 54, 55, 56, 56, 55, 57, 56, 57, 58, 55, 31, 32, 55, 32, 57, 31, 59, 60, 31, 60, 32, 2, 7, 59, 2, 59, 31, 1, 4, 7, 1, 7, 2, 37, 61, 4, 37, 4, 1, 4, 5, 6, 4, 6, 7, 51, 1, 2, 51, 2, 53, 10, 52, 54, 10, 54, 11};
static const GLubyte g_37Indices[102] = { 62, 38, 23, 23, 38, 63, 64, 46, 42, 64, 42, 19, 19, 42, 65, 19, 65, 8, 8, 65, 43, 8, 43, 0, 65, 9, 10, 65, 10, 43, 9, 18, 66, 9, 66, 10, 17, 16, 18, 17, 18, 9, 14, 15, 16, 14, 16, 17, 46, 14, 17, 46, 17, 42, 59, 41, 67, 59, 67, 60, 31, 59, 60, 31, 60, 32, 29, 31, 32, 29, 32, 33, 28, 30, 31, 28, 31, 29, 68, 2, 30, 68, 30, 28, 2, 7, 69, 2, 69, 30, 7, 6, 40, 7, 40, 69, 69, 40, 41, 69, 41, 59};
static const GLubyte g_38Indices[102] = { 64, 46, 42, 64, 42, 19, 19, 42, 44, 19, 44, 3, 3, 44, 70, 3, 70, 13, 46, 47, 48, 46, 48, 42, 44, 54, 71, 44, 71, 70, 47, 49, 50, 47, 50, 48, 48, 50, 53, 48, 53, 54, 54, 53, 72, 54, 72, 71, 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73, 73, 38, 6, 73, 6, 7, 72, 28, 29, 72, 29, 55, 28, 69, 59, 28, 59, 29, 69, 40, 41, 69, 41, 59, 7, 6, 40, 7, 40, 69, 55, 29, 33, 55, 33, 57, 71, 72, 55, 71, 55, 56};
static const GLubyte g_39Indices[6] = { 0, 10, 11, 0, 11, 3};
static const GLubyte g_40Indices[18] = { 3, 10, 11, 3, 11, 13, 1, 6, 40, 1, 40, 2, 10, 1, 2, 10, 2, 11};
static const GLubyte g_41Indices[18] = { 8, 10, 11, 8, 11, 0, 10, 1, 2, 10, 2, 11, 1, 39, 5, 1, 5, 2};
static const GLubyte g_42Indices[66] = { 74, 75, 44, 74, 44, 3, 3, 44, 76, 3, 76, 77, 75, 78, 11, 75, 11, 44, 44, 11, 79, 44, 79, 76, 76, 79, 12, 76, 12, 70, 70, 12, 80, 70, 80, 81, 43, 10, 78, 43, 78, 75, 82, 83, 10, 82, 10, 43, 10, 66, 84, 10, 84, 78, 79, 85, 20, 79, 20, 12, 78, 84, 11, 11, 85, 79};
static const GLubyte g_43Indices[30] = { 10, 52, 54, 10, 54, 11, 52, 51, 53, 52, 53, 54, 51, 1, 2, 51, 2, 53, 54, 53, 55, 54, 55, 56, 48, 50, 51, 48, 51, 52};
static const GLubyte g_44Indices[6] = { 62, 86, 39, 62, 39, 87};
static const GLubyte g_45Indices[6] = { 47, 49, 57, 47, 57, 58};
static const GLubyte g_46Indices[6] = { 4, 5, 6, 4, 6, 7};
static const GLubyte g_47Indices[6] = { 62, 38, 23, 23, 38, 63};
static const GLubyte g_48Indices[48] = { 46, 61, 73, 46, 73, 42, 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 88, 59, 60, 88, 60, 45, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60};
static const GLubyte g_49Indices[36] = { 61, 62, 5, 61, 5, 4, 4, 5, 6, 4, 6, 7, 7, 6, 67, 7, 67, 60, 43, 4, 7, 43, 7, 44, 0, 43, 44, 0, 44, 3, 64, 46, 43, 64, 43, 0};
static const GLubyte g_50Indices[54] = { 64, 46, 88, 64, 88, 23, 23, 88, 45, 23, 45, 63, 88, 56, 58, 88, 58, 45, 56, 55, 57, 56, 57, 58, 48, 50, 55, 48, 55, 56, 47, 49, 50, 47, 50, 48, 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_51Indices[48] = { 64, 46, 88, 64, 88, 23, 23, 88, 45, 23, 45, 63, 88, 56, 58, 88, 58, 45, 56, 55, 57, 56, 57, 58, 47, 49, 55, 47, 55, 56, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 61, 62, 41, 61, 41, 59};
static const GLubyte g_52Indices[36] = { 64, 47, 48, 64, 48, 19, 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 23, 56, 58, 23, 58, 63, 55, 41, 67, 55, 67, 57};
static const GLubyte g_53Indices[54] = { 64, 46, 42, 64, 42, 19, 19, 42, 45, 19, 45, 63, 46, 47, 48, 46, 48, 42, 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 61, 62, 41, 61, 41, 59};
static const GLubyte g_54Indices[66] = { 64, 46, 42, 64, 42, 19, 19, 42, 45, 19, 45, 63, 46, 47, 48, 46, 48, 42, 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 73, 38, 41, 73, 41, 59, 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73};
static const GLubyte g_55Indices[18] = { 64, 46, 88, 64, 88, 23, 23, 88, 45, 23, 45, 63, 88, 41, 67, 88, 67, 45};
static const GLubyte g_56Indices[78] = { 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 88, 56, 58, 88, 58, 45, 56, 55, 57, 56, 57, 58, 48, 50, 55, 48, 55, 56, 47, 49, 50, 47, 50, 48, 46, 47, 48, 46, 48, 42, 49, 61, 73, 49, 73, 50, 55, 59, 60, 55, 60, 57, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60};
static const GLubyte g_57Indices[66] = { 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 88, 56, 58, 88, 58, 45, 46, 47, 48, 46, 48, 42, 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 61, 62, 41, 61, 41, 59};
static const GLubyte g_58Indices[12] = { 10, 52, 54, 10, 54, 11, 51, 1, 2, 51, 2, 53};
static const GLubyte g_59Indices[12] = { 10, 52, 54, 10, 54, 11, 51, 34, 1, 51, 1, 53};
static const GLubyte g_60Indices[12] = { 89, 90, 23, 90, 63, 23, 89, 41, 67, 89, 67, 90};
static const GLubyte g_61Indices[12] = { 15, 47, 58, 15, 58, 24, 49, 36, 33, 49, 33, 57};
static const GLubyte g_62Indices[12] = { 64, 91, 92, 64, 92, 19, 91, 62, 38, 91, 38, 92};
static const GLubyte g_63Indices[48] = { 64, 46, 88, 64, 88, 23, 23, 88, 45, 23, 45, 63, 88, 56, 58, 88, 58, 45, 56, 55, 57, 56, 57, 58, 48, 50, 55, 48, 55, 56, 47, 49, 50, 47, 50, 48, 49, 37, 35, 49, 35, 50, 61, 62, 38, 61, 38, 73};
static const GLubyte g_64Indices[114] = { 46, 61, 73, 46, 73, 42, 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 88, 59, 60, 88, 60, 45, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60, 9, 18, 93, 9, 93, 11, 11, 93, 20, 11, 20, 12, 93, 54, 71, 93, 71, 20, 54, 53, 72, 54, 72, 71, 52, 51, 53, 52, 53, 54, 94, 95, 51, 94, 51, 52, 95, 27, 96, 95, 96, 51, 53, 68, 28, 53, 28, 72, 27, 34, 1, 27, 1, 96, 96, 1, 2, 96, 2, 68, 68, 2, 30, 68, 30, 28};
static const GLubyte g_65Indices[60] = { 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 64, 46, 42, 64, 42, 19, 46, 47, 48, 46, 48, 42, 88, 56, 58, 88, 58, 45, 47, 49, 50, 47, 50, 48, 56, 55, 57, 56, 57, 58, 48, 50, 55, 48, 55, 56, 49, 62, 38, 49, 38, 50, 55, 41, 67, 55, 67, 57};
static const GLubyte g_66Indices[84] = { 64, 46, 42, 64, 42, 19, 19, 42, 70, 19, 70, 13, 13, 70, 88, 13, 88, 23, 70, 71, 56, 70, 56, 88, 71, 72, 55, 71, 55, 56, 56, 55, 57, 56, 57, 58, 48, 50, 72, 48, 72, 71, 47, 49, 50, 47, 50, 48, 46, 47, 48, 46, 48, 42, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 73, 38, 41, 73, 41, 59, 61, 62, 38, 61, 38, 73, 49, 61, 73, 49, 73, 50};
static const GLubyte g_67Indices[30] = { 19, 42, 45, 19, 45, 63, 64, 46, 42, 64, 42, 19, 46, 61, 73, 46, 73, 42, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_68Indices[36] = { 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 46, 61, 73, 46, 73, 42, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 88, 59, 60, 88, 60, 45};
static const GLubyte g_69Indices[48] = { 19, 42, 45, 19, 45, 63, 64, 46, 42, 64, 42, 19, 46, 47, 48, 46, 48, 42, 47, 49, 50, 47, 50, 48, 48, 50, 57, 48, 57, 58, 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_70Indices[36] = { 64, 46, 42, 64, 42, 19, 19, 42, 45, 19, 45, 63, 46, 47, 48, 46, 48, 42, 47, 49, 50, 47, 50, 48, 48, 50, 57, 48, 57, 58, 49, 62, 38, 49, 38, 50};
static const GLubyte g_71Indices[54] = { 64, 46, 42, 64, 42, 19, 19, 42, 45, 19, 45, 63, 46, 61, 73, 46, 73, 42, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60, 55, 59, 60, 55, 60, 57, 56, 55, 57, 56, 57, 58, 52, 51, 55, 52, 55, 56};
static const GLubyte g_72Indices[42] = { 64, 47, 48, 64, 48, 19, 47, 49, 50, 47, 50, 48, 49, 62, 38, 49, 38, 50, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 23, 56, 58, 23, 58, 63, 55, 41, 67, 55, 67, 57};
static const GLubyte g_73Indices[42] = { 64, 46, 43, 64, 43, 0, 0, 43, 44, 0, 44, 3, 3, 44, 45, 3, 45, 63, 43, 4, 7, 43, 7, 44, 4, 5, 6, 4, 6, 7, 61, 62, 5, 61, 5, 4, 7, 6, 67, 7, 67, 60};
static const GLubyte g_74Indices[30] = { 23, 59, 60, 23, 60, 63, 59, 41, 67, 59, 67, 60, 73, 38, 41, 73, 41, 59, 61, 62, 38, 61, 38, 73, 36, 61, 73, 36, 73, 26};
static const GLubyte g_75Indices[48] = { 56, 55, 57, 56, 57, 58, 55, 41, 67, 55, 67, 57, 71, 72, 55, 71, 55, 56, 13, 71, 56, 13, 56, 23, 48, 50, 72, 48, 72, 71, 47, 49, 50, 47, 50, 48, 64, 47, 48, 64, 48, 19, 49, 62, 38, 49, 38, 50};
static const GLubyte g_76Indices[18] = { 64, 61, 73, 64, 73, 19, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_77Indices[48] = { 46, 62, 38, 46, 38, 42, 64, 46, 42, 64, 42, 19, 19, 42, 43, 19, 43, 0, 0, 43, 44, 0, 44, 3, 3, 44, 88, 3, 88, 23, 43, 5, 6, 43, 6, 44, 23, 88, 45, 23, 45, 63, 88, 41, 67, 88, 67, 45};
static const GLubyte g_78Indices[54] = { 46, 62, 38, 46, 38, 42, 64, 46, 42, 64, 42, 19, 19, 42, 43, 19, 43, 0, 0, 43, 44, 0, 44, 3, 43, 4, 7, 43, 7, 44, 4, 5, 6, 4, 6, 7, 7, 6, 41, 7, 41, 59, 59, 41, 67, 59, 67, 60, 23, 59, 60, 23, 60, 63};
static const GLubyte g_79Indices[48] = { 46, 61, 73, 46, 73, 42, 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 88, 59, 60, 88, 60, 45, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60};
static const GLubyte g_80Indices[54] = { 49, 62, 38, 49, 38, 50, 47, 49, 50, 47, 50, 48, 46, 47, 48, 46, 48, 42, 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 88, 56, 58, 88, 58, 45, 56, 55, 57, 56, 57, 58, 48, 50, 55, 48, 55, 56};
static const GLubyte g_81Indices[72] = { 73, 38, 5, 73, 5, 4, 4, 5, 6, 4, 6, 7, 7, 6, 41, 7, 41, 59, 59, 41, 67, 59, 67, 60, 88, 59, 60, 88, 60, 45, 23, 88, 45, 23, 45, 63, 19, 42, 88, 19, 88, 23, 64, 46, 42, 64, 42, 19, 46, 61, 73, 46, 73, 42, 61, 62, 38, 61, 38, 73, 96, 4, 7, 96, 7, 68, 5, 97, 98, 5, 98, 6};
static const GLubyte g_82Indices[72] = { 46, 47, 48, 46, 48, 42, 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 88, 56, 58, 88, 58, 45, 56, 55, 57, 56, 57, 58, 71, 72, 55, 71, 55, 56, 54, 53, 72, 54, 72, 71, 53, 6, 40, 53, 40, 72, 48, 50, 53, 48, 53, 54, 47, 49, 50, 47, 50, 48, 49, 62, 38, 49, 38, 50};
static const GLubyte g_83Indices[57] = { 63, 45, 42, 19, 42, 63, 64, 46, 42, 64, 42, 19, 46, 47, 48, 46, 48, 42, 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 61, 62, 41, 61, 41, 59, 42, 45, 63};
static const GLubyte g_84Indices[24] = { 64, 46, 43, 64, 43, 0, 0, 43, 44, 0, 44, 3, 3, 44, 45, 3, 45, 63, 43, 5, 6, 43, 6, 44};
static const GLubyte g_85Indices[30] = { 64, 61, 73, 64, 73, 19, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60, 23, 59, 60, 23, 60, 63};
static const GLubyte g_86Indices[24] = { 99, 48, 47, 47, 100, 99, 99, 100, 58, 58, 56, 99, 64, 47, 48, 64, 48, 19, 23, 56, 58, 23, 58, 63};
static const GLubyte g_87Indices[48] = { 64, 61, 73, 64, 73, 19, 61, 62, 38, 61, 38, 73, 73, 38, 5, 73, 5, 4, 4, 5, 6, 4, 6, 7, 0, 4, 7, 0, 7, 3, 7, 6, 41, 7, 41, 59, 59, 41, 67, 59, 67, 60, 23, 59, 60, 23, 60, 63};
static const GLubyte g_88Indices[126] = { 52, 51, 53, 52, 53, 54, 54, 53, 72, 54, 72, 71, 71, 72, 55, 71, 55, 56, 20, 71, 56, 20, 56, 21, 12, 20, 21, 12, 21, 22, 22, 21, 24, 22, 24, 25, 23, 22, 25, 23, 25, 63, 72, 28, 29, 72, 29, 55, 28, 30, 31, 28, 31, 29, 29, 31, 32, 29, 32, 33, 31, 41, 67, 31, 67, 32, 94, 95, 51, 94, 51, 52, 48, 50, 95, 48, 95, 94, 16, 48, 94, 16, 94, 18, 17, 16, 18, 17, 18, 9, 14, 15, 16, 14, 16, 17, 64, 14, 17, 64, 17, 19, 50, 26, 27, 50, 27, 95, 26, 35, 34, 26, 34, 27, 36, 37, 35, 36, 35, 26, 37, 62, 38, 37, 38, 35};
static const GLubyte g_89Indices[48] = { 64, 47, 48, 64, 48, 19, 47, 49, 50, 47, 50, 48, 48, 50, 51, 48, 51, 52, 52, 51, 53, 52, 53, 54, 54, 53, 55, 54, 55, 56, 56, 55, 57, 56, 57, 58, 23, 56, 58, 23, 58, 63, 51, 5, 6, 51, 6, 53};
static const GLubyte g_90Indices[54] = { 64, 46, 88, 64, 88, 23, 23, 88, 45, 23, 45, 63, 88, 56, 58, 88, 58, 45, 56, 55, 57, 56, 57, 58, 48, 50, 55, 48, 55, 56, 47, 49, 50, 47, 50, 48, 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_91Indices[30] = { 0, 43, 44, 0, 44, 3, 3, 44, 88, 3, 88, 23, 43, 4, 7, 43, 7, 44, 4, 5, 6, 4, 6, 7, 7, 6, 41, 7, 41, 59};
static const GLubyte g_92Indices[6] = { 64, 41, 67, 64, 67, 19};
static const GLubyte g_93Indices[30] = { 0, 43, 44, 0, 44, 3, 19, 42, 43, 19, 43, 0, 43, 4, 7, 43, 7, 44, 4, 5, 6, 4, 6, 7, 73, 38, 5, 73, 5, 4};
static const GLubyte g_94Indices[12] = { 74, 101, 83, 74, 83, 75, 74, 75, 79, 74, 79, 80};
static const GLubyte g_95Indices[6] = { 61, 62, 67, 61, 67, 60};
static const GLubyte g_96Indices[6] = { 8, 10, 11, 8, 11, 0};
static const GLubyte g_97Indices[72] = { 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 29, 33, 55, 33, 57, 29, 31, 32, 29, 32, 33, 26, 35, 31, 26, 31, 29, 36, 37, 35, 36, 35, 26, 37, 61, 73, 37, 73, 35, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60, 31, 59, 60, 31, 60, 32};
static const GLubyte g_98Indices[54] = { 64, 47, 48, 64, 48, 19, 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 73, 38, 41, 73, 41, 59, 61, 62, 38, 61, 38, 73, 49, 61, 73, 49, 73, 50};
static const GLubyte g_99Indices[30] = { 48, 50, 57, 48, 57, 58, 47, 49, 50, 47, 50, 48, 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_100Indices[54] = { 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 73, 38, 41, 73, 41, 59, 61, 62, 38, 61, 38, 73, 49, 61, 73, 49, 73, 50, 47, 49, 50, 47, 50, 48, 23, 56, 58, 23, 58, 63};
static const GLubyte g_101Indices[66] = { 56, 55, 57, 56, 57, 58, 55, 29, 33, 55, 33, 57, 29, 31, 32, 29, 32, 33, 48, 50, 55, 48, 55, 56, 26, 35, 31, 26, 31, 29, 47, 49, 50, 47, 50, 48, 49, 36, 26, 49, 26, 50, 36, 37, 35, 36, 35, 26, 37, 61, 73, 37, 73, 35, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_102Indices[36] = { 62, 102, 103, 62, 103, 38, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60, 49, 61, 73, 49, 73, 50, 47, 49, 50, 47, 50, 48, 48, 50, 57, 48, 57, 58};
static const GLubyte g_103Indices[66] = { 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 59, 60, 55, 60, 57, 59, 41, 67, 59, 67, 60, 73, 38, 41, 73, 41, 59, 61, 62, 38, 61, 38, 73, 49, 61, 73, 49, 73, 50, 41, 104, 105, 41, 105, 67, 104, 106, 107, 104, 107, 105, 86, 108, 106, 86, 106, 104};
static const GLubyte g_104Indices[36] = { 64, 47, 48, 64, 48, 19, 47, 49, 50, 47, 50, 48, 49, 62, 38, 49, 38, 50, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 41, 67, 55, 67, 57};
static const GLubyte g_105Indices[12] = { 43, 10, 11, 43, 11, 44, 66, 5, 6, 66, 6, 93};
static const GLubyte g_106Indices[24] = { 43, 10, 11, 43, 11, 44, 66, 97, 98, 66, 98, 93, 97, 109, 110, 97, 110, 98, 111, 112, 109, 111, 109, 97};
static const GLubyte g_107Indices[48] = { 37, 62, 38, 37, 38, 35, 36, 37, 35, 36, 35, 26, 26, 35, 30, 26, 30, 28, 28, 30, 31, 28, 31, 29, 29, 31, 32, 29, 32, 33, 31, 41, 67, 31, 67, 32, 71, 28, 29, 71, 29, 56, 64, 36, 26, 64, 26, 19};
static const GLubyte g_108Indices[6] = { 0, 5, 6, 0, 6, 3};
static const GLubyte g_109Indices[48] = { 49, 62, 38, 49, 38, 50, 47, 49, 50, 47, 50, 48, 48, 50, 51, 48, 51, 52, 52, 51, 53, 52, 53, 54, 54, 53, 55, 54, 55, 56, 51, 5, 6, 51, 6, 53, 56, 55, 57, 56, 57, 58, 55, 41, 67, 55, 67, 57};
static const GLubyte g_110Indices[30] = { 49, 62, 38, 49, 38, 50, 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 55, 41, 67, 55, 67, 57};
static const GLubyte g_111Indices[48] = { 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 49, 61, 73, 49, 73, 50, 55, 59, 60, 55, 60, 57, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60};
static const GLubyte g_112Indices[54] = { 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73, 62, 102, 103, 62, 103, 38, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60, 55, 59, 60, 55, 60, 57, 56, 55, 57, 56, 57, 58, 48, 50, 55, 48, 55, 56, 47, 49, 50, 47, 50, 48};
static const GLubyte g_113Indices[54] = { 47, 49, 50, 47, 50, 48, 48, 50, 55, 48, 55, 56, 56, 55, 57, 56, 57, 58, 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60, 55, 59, 60, 55, 60, 57, 41, 113, 114, 41, 114, 67};
static const GLubyte g_114Indices[18] = { 49, 62, 38, 49, 38, 50, 47, 49, 50, 47, 50, 48, 48, 50, 57, 48, 57, 58};
static const GLubyte g_115Indices[57] = { 58, 57, 50, 48, 50, 58, 47, 49, 50, 47, 50, 48, 49, 36, 26, 49, 26, 50, 36, 37, 35, 36, 35, 26, 26, 35, 31, 26, 31, 29, 29, 31, 32, 29, 32, 33, 31, 59, 60, 31, 60, 32, 59, 41, 67, 59, 67, 60, 61, 62, 41, 61, 41, 59, 50, 57, 58};
static const GLubyte g_116Indices[36] = { 64, 47, 48, 64, 48, 19, 47, 49, 50, 47, 50, 48, 48, 50, 57, 48, 57, 58, 49, 61, 73, 49, 73, 50, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_117Indices[30] = { 47, 61, 73, 47, 73, 48, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60, 56, 59, 60, 56, 60, 58};
static const GLubyte g_118Indices[24] = { 47, 36, 26, 47, 26, 48, 56, 29, 33, 56, 33, 58, 99, 100, 29, 29, 100, 33, 36, 100, 99, 36, 99, 26};
static const GLubyte g_119Indices[48] = { 47, 61, 73, 47, 73, 48, 61, 62, 38, 61, 38, 73, 73, 38, 5, 73, 5, 4, 4, 5, 6, 4, 6, 7, 52, 4, 7, 52, 7, 54, 7, 6, 41, 7, 41, 59, 59, 41, 67, 59, 67, 60, 56, 59, 60, 56, 60, 58};
static const GLubyte g_120Indices[90] = { 47, 49, 50, 47, 50, 48, 49, 36, 26, 49, 26, 50, 50, 26, 96, 50, 96, 51, 51, 96, 68, 51, 68, 53, 96, 1, 2, 96, 2, 68, 53, 68, 29, 53, 29, 55, 55, 29, 33, 55, 33, 57, 56, 55, 57, 56, 57, 58, 35, 73, 4, 35, 4, 1, 1, 4, 7, 1, 7, 2, 2, 7, 59, 2, 59, 31, 31, 59, 60, 31, 60, 32, 59, 41, 67, 59, 67, 60, 37, 61, 73, 37, 73, 35, 61, 62, 38, 61, 38, 73};
static const GLubyte g_121Indices[48] = { 47, 61, 73, 47, 73, 48, 61, 62, 38, 61, 38, 73, 73, 38, 41, 73, 41, 59, 59, 41, 67, 59, 67, 60, 56, 59, 60, 56, 60, 58, 41, 106, 107, 41, 107, 67, 106, 113, 114, 106, 114, 107, 108, 102, 113, 108, 113, 106};
static const GLubyte g_122Indices[54] = { 47, 49, 55, 47, 55, 56, 56, 55, 57, 56, 57, 58, 55, 29, 33, 55, 33, 57, 29, 31, 32, 29, 32, 33, 26, 35, 31, 26, 31, 29, 36, 37, 35, 36, 35, 26, 37, 61, 73, 37, 73, 35, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};
static const GLubyte g_123Indices[30] = { 48, 50, 95, 48, 95, 94, 9, 94, 52, 9, 52, 10, 9, 10, 0, 0, 10, 3, 95, 34, 1, 95, 1, 51, 34, 5, 6, 34, 6, 1};
static const GLubyte g_124Indices[6] = { 0, 5, 6, 0, 6, 3};
static const GLubyte g_125Indices[30] = { 0, 11, 12, 0, 12, 3, 11, 54, 71, 11, 71, 12, 71, 72, 55, 71, 55, 56, 53, 2, 30, 53, 30, 72, 2, 5, 6, 2, 6, 30};
static const GLubyte g_126Indices[48] = { 52, 51, 53, 52, 53, 54, 51, 96, 68, 51, 68, 53, 53, 68, 28, 53, 28, 72, 72, 28, 29, 72, 29, 55, 71, 72, 55, 71, 55, 56, 94, 95, 51, 94, 51, 52, 48, 50, 95, 48, 95, 94, 50, 26, 27, 50, 27, 95};
static const GLubyte g_127Indices[6] = { 10, 1, 2, 10, 2, 11};
static const GLubyte g_163Indices[60] = { 64, 46, 42, 64, 42, 19, 19, 42, 88, 19, 88, 23, 23, 88, 45, 23, 45, 63, 88, 21, 24, 88, 24, 45, 46, 49, 50, 46, 50, 42, 49, 36, 26, 49, 26, 50, 50, 26, 68, 50, 68, 53, 36, 61, 73, 36, 73, 26, 61, 62, 38, 61, 38, 73, 73, 38, 67, 73, 67, 60};

void GLT_PrintChar(const unsigned char letter)
{
  glEnableClientState(GL_VERTEX_ARRAY);
  glVertexPointer(2, GL_FLOAT, 0, g_vertices);

  switch(letter)
  {
    case 33:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_33Indices);
      break;
    case 34:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_34Indices);
      break;
    case 35:
      glDrawElements(GL_TRIANGLES, 96, GL_UNSIGNED_BYTE, g_35Indices);
      break;
    case 36:
      glDrawElements(GL_TRIANGLES, 114, GL_UNSIGNED_BYTE, g_36Indices);
      break;
    case 37:
      glDrawElements(GL_TRIANGLES, 102, GL_UNSIGNED_BYTE, g_37Indices);
      break;
    case 38:
      glDrawElements(GL_TRIANGLES, 102, GL_UNSIGNED_BYTE, g_38Indices);
      break;
    case 39:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_39Indices);
      break;
    case 40:
      glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_40Indices);
      break;
    case 41:
      glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_41Indices);
      break;
    case 42:
      glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_42Indices);
      break;
    case 43:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_43Indices);
      break;
    case 44:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_44Indices);
      break;
    case 45:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_45Indices);
      break;
    case 46:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_46Indices);
      break;
    case 47:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_47Indices);
      break;
    case 48:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_48Indices);
      break;
    case 49:
      glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_49Indices);
      break;
    case 50:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_50Indices);
      break;
    case 51:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_51Indices);
      break;
    case 52:
      glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_52Indices);
      break;
    case 53:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_53Indices);
      break;
    case 54:
      glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_54Indices);
      break;
    case 55:
      glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_55Indices);
      break;
    case 56:
      glDrawElements(GL_TRIANGLES, 78, GL_UNSIGNED_BYTE, g_56Indices);
      break;
    case 57:
      glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_57Indices);
      break;
    case 58:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_58Indices);
      break;
    case 59:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_59Indices);
      break;
    case 60:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_60Indices);
      break;
    case 61:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_61Indices);
      break;
    case 62:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_62Indices);
      break;
    case 63:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_63Indices);
      break;
    case 64:
      glDrawElements(GL_TRIANGLES, 114, GL_UNSIGNED_BYTE, g_64Indices);
      break;
    case 65:
      glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_BYTE, g_65Indices);
      break;
    case 66:
      glDrawElements(GL_TRIANGLES, 84, GL_UNSIGNED_BYTE, g_66Indices);
      break;
    case 67:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_67Indices);
      break;
    case 68:
      glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_68Indices);
      break;
    case 69:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_69Indices);
      break;
    case 70:
      glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_70Indices);
      break;
    case 71:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_71Indices);
      break;
    case 72:
      glDrawElements(GL_TRIANGLES, 42, GL_UNSIGNED_BYTE, g_72Indices);
      break;
    case 73:
      glDrawElements(GL_TRIANGLES, 42, GL_UNSIGNED_BYTE, g_73Indices);
      break;
    case 74:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_74Indices);
      break;
    case 75:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_75Indices);
      break;
    case 76:
      glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_76Indices);
      break;
    case 77:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_77Indices);
      break;
    case 78:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_78Indices);
      break;
    case 79:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_79Indices);
      break;
    case 80:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_80Indices);
      break;
    case 81:
      glDrawElements(GL_TRIANGLES, 72, GL_UNSIGNED_BYTE, g_81Indices);
      break;
    case 82:
      glDrawElements(GL_TRIANGLES, 72, GL_UNSIGNED_BYTE, g_82Indices);
      break;
    case 83:
      glDrawElements(GL_TRIANGLES, 57, GL_UNSIGNED_BYTE, g_83Indices);
      break;
    case 84:
      glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_BYTE, g_84Indices);
      break;
    case 85:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_85Indices);
      break;
    case 86:
      glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_BYTE, g_86Indices);
      break;
    case 87:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_87Indices);
      break;
    case 88:
      glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_BYTE, g_88Indices);
      break;
    case 89:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_89Indices);
      break;
    case 90:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_90Indices);
      break;
    case 91:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_91Indices);
      break;
    case 92:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_92Indices);
      break;
    case 93:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_93Indices);
      break;
    case 94:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_94Indices);
      break;
    case 95:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_95Indices);
      break;
    case 96:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_96Indices);
      break;
    case 97:
      glDrawElements(GL_TRIANGLES, 72, GL_UNSIGNED_BYTE, g_97Indices);
      break;
    case 98:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_98Indices);
      break;
    case 99:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_99Indices);
      break;
    case 100:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_100Indices);
      break;
    case 101:
      glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_101Indices);
      break;
    case 102:
      glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_102Indices);
      break;
    case 103:
      glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_103Indices);
      break;
    case 104:
      glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_104Indices);
      break;
    case 105:
      glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_105Indices);
      break;
    case 106:
      glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_BYTE, g_106Indices);
      break;
    case 107:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_107Indices);
      break;
    case 108:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_108Indices);
      break;
    case 109:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_109Indices);
      break;
    case 110:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_110Indices);
      break;
    case 111:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_111Indices);
      break;
    case 112:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_112Indices);
      break;
    case 113:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_113Indices);
      break;
    case 114:
      glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_114Indices);
      break;
    case 115:
      glDrawElements(GL_TRIANGLES, 57, GL_UNSIGNED_BYTE, g_115Indices);
      break;
    case 116:
      glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_116Indices);
      break;
    case 117:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_117Indices);
      break;
    case 118:
      glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_BYTE, g_118Indices);
      break;
    case 119:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_119Indices);
      break;
    case 120:
      glDrawElements(GL_TRIANGLES, 90, GL_UNSIGNED_BYTE, g_120Indices);
      break;
    case 121:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_121Indices);
      break;
    case 122:
      glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_122Indices);
      break;
    case 123:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_123Indices);
      break;
    case 124:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_124Indices);
      break;
    case 125:
      glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_125Indices);
      break;
    case 126:
      glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_126Indices);
      break;
    case 127:
      glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_127Indices);
      break;
    case 163:
      glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_BYTE, g_163Indices);
      break;
    default:
      break;
  }

  glDisableClientState(GL_VERTEX_ARRAY);
}

void GLT_Print(const char *text)
{
  glEnableClientState(GL_VERTEX_ARRAY);
  glVertexPointer(2, GL_FLOAT, 0, g_vertices);

  while(*text != '\0')
  {
    switch((unsigned char)*text)
    {
      case 33:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_33Indices);
        break;
      case 34:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_34Indices);
        break;
      case 35:
        glDrawElements(GL_TRIANGLES, 96, GL_UNSIGNED_BYTE, g_35Indices);
        break;
      case 36:
        glDrawElements(GL_TRIANGLES, 114, GL_UNSIGNED_BYTE, g_36Indices);
        break;
      case 37:
        glDrawElements(GL_TRIANGLES, 102, GL_UNSIGNED_BYTE, g_37Indices);
        break;
      case 38:
        glDrawElements(GL_TRIANGLES, 102, GL_UNSIGNED_BYTE, g_38Indices);
        break;
      case 39:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_39Indices);
        break;
      case 40:
        glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_40Indices);
        break;
      case 41:
        glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_41Indices);
        break;
      case 42:
        glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_42Indices);
        break;
      case 43:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_43Indices);
        break;
      case 44:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_44Indices);
        break;
      case 45:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_45Indices);
        break;
      case 46:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_46Indices);
        break;
      case 47:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_47Indices);
        break;
      case 48:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_48Indices);
        break;
      case 49:
        glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_49Indices);
        break;
      case 50:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_50Indices);
        break;
      case 51:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_51Indices);
        break;
      case 52:
        glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_52Indices);
        break;
      case 53:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_53Indices);
        break;
      case 54:
        glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_54Indices);
        break;
      case 55:
        glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_55Indices);
        break;
      case 56:
        glDrawElements(GL_TRIANGLES, 78, GL_UNSIGNED_BYTE, g_56Indices);
        break;
      case 57:
        glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_57Indices);
        break;
      case 58:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_58Indices);
        break;
      case 59:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_59Indices);
        break;
      case 60:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_60Indices);
        break;
      case 61:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_61Indices);
        break;
      case 62:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_62Indices);
        break;
      case 63:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_63Indices);
        break;
      case 64:
        glDrawElements(GL_TRIANGLES, 114, GL_UNSIGNED_BYTE, g_64Indices);
        break;
      case 65:
        glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_BYTE, g_65Indices);
        break;
      case 66:
        glDrawElements(GL_TRIANGLES, 84, GL_UNSIGNED_BYTE, g_66Indices);
        break;
      case 67:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_67Indices);
        break;
      case 68:
        glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_68Indices);
        break;
      case 69:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_69Indices);
        break;
      case 70:
        glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_70Indices);
        break;
      case 71:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_71Indices);
        break;
      case 72:
        glDrawElements(GL_TRIANGLES, 42, GL_UNSIGNED_BYTE, g_72Indices);
        break;
      case 73:
        glDrawElements(GL_TRIANGLES, 42, GL_UNSIGNED_BYTE, g_73Indices);
        break;
      case 74:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_74Indices);
        break;
      case 75:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_75Indices);
        break;
      case 76:
        glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_76Indices);
        break;
      case 77:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_77Indices);
        break;
      case 78:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_78Indices);
        break;
      case 79:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_79Indices);
        break;
      case 80:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_80Indices);
        break;
      case 81:
        glDrawElements(GL_TRIANGLES, 72, GL_UNSIGNED_BYTE, g_81Indices);
        break;
      case 82:
        glDrawElements(GL_TRIANGLES, 72, GL_UNSIGNED_BYTE, g_82Indices);
        break;
      case 83:
        glDrawElements(GL_TRIANGLES, 57, GL_UNSIGNED_BYTE, g_83Indices);
        break;
      case 84:
        glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_BYTE, g_84Indices);
        break;
      case 85:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_85Indices);
        break;
      case 86:
        glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_BYTE, g_86Indices);
        break;
      case 87:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_87Indices);
        break;
      case 88:
        glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_BYTE, g_88Indices);
        break;
      case 89:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_89Indices);
        break;
      case 90:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_90Indices);
        break;
      case 91:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_91Indices);
        break;
      case 92:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_92Indices);
        break;
      case 93:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_93Indices);
        break;
      case 94:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_94Indices);
        break;
      case 95:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_95Indices);
        break;
      case 96:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_96Indices);
        break;
      case 97:
        glDrawElements(GL_TRIANGLES, 72, GL_UNSIGNED_BYTE, g_97Indices);
        break;
      case 98:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_98Indices);
        break;
      case 99:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_99Indices);
        break;
      case 100:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_100Indices);
        break;
      case 101:
        glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_101Indices);
        break;
      case 102:
        glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_102Indices);
        break;
      case 103:
        glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_BYTE, g_103Indices);
        break;
      case 104:
        glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_104Indices);
        break;
      case 105:
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_BYTE, g_105Indices);
        break;
      case 106:
        glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_BYTE, g_106Indices);
        break;
      case 107:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_107Indices);
        break;
      case 108:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_108Indices);
        break;
      case 109:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_109Indices);
        break;
      case 110:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_110Indices);
        break;
      case 111:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_111Indices);
        break;
      case 112:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_112Indices);
        break;
      case 113:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_113Indices);
        break;
      case 114:
        glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, g_114Indices);
        break;
      case 115:
        glDrawElements(GL_TRIANGLES, 57, GL_UNSIGNED_BYTE, g_115Indices);
        break;
      case 116:
        glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_BYTE, g_116Indices);
        break;
      case 117:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_117Indices);
        break;
      case 118:
        glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_BYTE, g_118Indices);
        break;
      case 119:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_119Indices);
        break;
      case 120:
        glDrawElements(GL_TRIANGLES, 90, GL_UNSIGNED_BYTE, g_120Indices);
        break;
      case 121:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_121Indices);
        break;
      case 122:
        glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_BYTE, g_122Indices);
        break;
      case 123:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_123Indices);
        break;
      case 124:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_124Indices);
        break;
      case 125:
        glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_BYTE, g_125Indices);
        break;
      case 126:
        glDrawElements(GL_TRIANGLES, 48, GL_UNSIGNED_BYTE, g_126Indices);
        break;
      case 127:
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, g_127Indices);
        break;
      case 163:
        glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_BYTE, g_163Indices);
        break;
      default:
        break;
    }

    glTranslatef(16.0f, 0.0f, 0.0f);
    text++;
  }

  glDisableClientState(GL_VERTEX_ARRAY);
}
