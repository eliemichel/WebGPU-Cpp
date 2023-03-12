//-----------------------------------
// https://github.com/pplux/wgpu.hpp
//-----------------------------------
#pragma once
#ifndef WEBGPU_H_
#error "You must include the WEBGPU header before this one"
#endif
#include <type_traits>
namespace wgpu {
    #define BASIC_CLASS(Type) \\
        struct Type : public WGPU ## Type{ \\
            typedef Type S; /* S == Self */ \\
            typedef WGPU ## Type W; /* W == WGPU Type */ \\
            operator const W*() const { return this; } \\
    
    #define CLASS(Type) \\
        BASIC_CLASS(Type) \\
        Type() : W() {} \\
    #define SUBCLASS(Type, WGPUSType_value) \\
        BASIC_CLASS(Type) \\
        Type() : W({nullptr, WGPUSType_value}) {} \\
    #define DESCRIPTOR(Type) \\
        BASIC_CLASS(Type) \\
        Type() : W() {} \\
        template<class T> \\
        S& nextInChain(const T *obj) \\
        { \\
            W::nextInChain = (const WGPUChainedStruct*) &(obj->chain); \\
            return *this; \\
        }\\
        template<class T> \\
        S& nextInChain(const T &obj) { return nextInChain(&obj); }
    #define PROP(Name) \\
        S& Name(decltype(W::Name) arg) { W::Name = arg; return *this; }\\
    #define LIST(List, Count) \\
        template<size_t N> \\
        S& List(std::remove_cv_t<std::remove_pointer_t<decltype(W::List)>> const (&args)[N]) { \\
            W::Count = (decltype(W::Count)) N; \\
            W::List = args; \\
            return *this; \\
        } \\
    #define END };
    // Manually Generated
    CLASS(Color)
        PROP(r)
        PROP(g)
        PROP(b)
        PROP(a)
        Color(double r, double g, double b, double a = 1.0) : 
            W({r,g,b,a}){}
    END
    CLASS(Origin3D)
        PROP(x)
        PROP(y)
        PROP(z)
        Origin3D(uint32_t x = 0.0, uint32_t y = 0.0, uint32_t z = 0.0) : 
            W({x,y,z}){}
    END
    // Automatically generated

{{content}}

    #undef CLASS
    #undef SUBCLASS
    #undef DESCRIPTOR
    #undef END
    #undef PROP
} // end wgpu namespace
