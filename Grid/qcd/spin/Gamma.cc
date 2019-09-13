// code generated by the Mathematica notebook gamma-gen/gamma-gen.nb

#include <Grid/Grid.h>

NAMESPACE_BEGIN(Grid);

const std::array<const Gamma, 4> Gamma::gmu = {{
    Gamma(Gamma::Algebra::GammaX),
    Gamma(Gamma::Algebra::GammaY),
    Gamma(Gamma::Algebra::GammaZ),
    Gamma(Gamma::Algebra::GammaT)}};

const std::array<const Gamma, 16> Gamma::gall = {{
  Gamma(Gamma::Algebra::Identity),
  Gamma(Gamma::Algebra::Gamma5),
  Gamma(Gamma::Algebra::GammaX),
  Gamma(Gamma::Algebra::GammaY),
  Gamma(Gamma::Algebra::GammaZ),
  Gamma(Gamma::Algebra::GammaT),
  Gamma(Gamma::Algebra::GammaXGamma5),
  Gamma(Gamma::Algebra::GammaYGamma5),
  Gamma(Gamma::Algebra::GammaZGamma5),
  Gamma(Gamma::Algebra::GammaTGamma5),
  Gamma(Gamma::Algebra::SigmaXT),      
  Gamma(Gamma::Algebra::SigmaXY),      
  Gamma(Gamma::Algebra::SigmaXZ),      
  Gamma(Gamma::Algebra::SigmaYT),
  Gamma(Gamma::Algebra::SigmaYZ),
  Gamma(Gamma::Algebra::SigmaZT)}};

const std::array<const char *, Gamma::nGamma> Gamma::name = {{
    "-Gamma5      ",
    "Gamma5       ",
    "-GammaT      ",
    "GammaT       ",
    "-GammaTGamma5",
    "GammaTGamma5 ",
    "-GammaX      ",
    "GammaX       ",
    "-GammaXGamma5",
    "GammaXGamma5 ",
    "-GammaY      ",
    "GammaY       ",
    "-GammaYGamma5",
    "GammaYGamma5 ",
    "-GammaZ      ",
    "GammaZ       ",
    "-GammaZGamma5",
    "GammaZGamma5 ",
    "-Identity    ",
    "Identity     ",
    "-SigmaXT     ",
    "SigmaXT      ",
    "-SigmaXY     ",
    "SigmaXY      ",
    "-SigmaXZ     ",
    "SigmaXZ      ",
    "-SigmaYT     ",
    "SigmaYT      ",
    "-SigmaYZ     ",
    "SigmaYZ      ",
    "-SigmaZT     ",
    "SigmaZT      "}};

const std::array<Gamma::Algebra, Gamma::nGamma> Gamma::adj = {{
    Gamma::Algebra::MinusGamma5,
    Gamma::Algebra::Gamma5,
    Gamma::Algebra::MinusGammaT,
    Gamma::Algebra::GammaT,
    Gamma::Algebra::GammaTGamma5,
    Gamma::Algebra::MinusGammaTGamma5,
    Gamma::Algebra::MinusGammaX,
    Gamma::Algebra::GammaX,
    Gamma::Algebra::GammaXGamma5,
    Gamma::Algebra::MinusGammaXGamma5,
    Gamma::Algebra::MinusGammaY,
    Gamma::Algebra::GammaY,
    Gamma::Algebra::GammaYGamma5,
    Gamma::Algebra::MinusGammaYGamma5,
    Gamma::Algebra::MinusGammaZ,
    Gamma::Algebra::GammaZ,
    Gamma::Algebra::GammaZGamma5,
    Gamma::Algebra::MinusGammaZGamma5,
    Gamma::Algebra::MinusIdentity,
    Gamma::Algebra::Identity,
    Gamma::Algebra::SigmaXT,
    Gamma::Algebra::MinusSigmaXT,
    Gamma::Algebra::SigmaXY,
    Gamma::Algebra::MinusSigmaXY,
    Gamma::Algebra::SigmaXZ,
    Gamma::Algebra::MinusSigmaXZ,
    Gamma::Algebra::SigmaYT,
    Gamma::Algebra::MinusSigmaYT,
    Gamma::Algebra::SigmaYZ,
    Gamma::Algebra::MinusSigmaYZ,
    Gamma::Algebra::SigmaZT,
    Gamma::Algebra::MinusSigmaZT}};

const std::array<std::array<Gamma::Algebra, Gamma::nGamma>, Gamma::nGamma> Gamma::mul = {{
    {{Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY}}
    ,
    {{Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY}}
    ,
    {{Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ}}
    ,
    {{Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ}}
    ,
    {{Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5}}
    ,
    {{Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5}}
    ,
    {{Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5}}
    ,
    {{Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5}}
    ,
    {{Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY}}
    ,
    {{Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY}}
    ,
    {{Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5}}
    ,
    {{Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5}}
    ,
    {{Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX}}
    ,
    {{Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX}}
    ,
    {{Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT}}
    ,
    {{Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT}}
    ,
    {{Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5}}
    ,
    {{Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5}}
    ,
    {{Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT}}
    ,
    {{Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT}}
    ,
    {{Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ}}
    ,
    {{Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ}}
    ,
    {{Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5}}
    ,
    {{Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5}}
    ,
    {{Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT}}
    ,
    {{Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT}}
    ,
    {{Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ}}
    ,
    {{Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ}}
    ,
    {{Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT}}
    ,
    {{Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT}}
    ,
    {{Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::SigmaXY,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusIdentity,
      Gamma::Algebra::Identity}}
    ,
    {{Gamma::Algebra::SigmaXY,
      Gamma::Algebra::MinusSigmaXY,
      Gamma::Algebra::MinusGammaZ,
      Gamma::Algebra::GammaZ,
      Gamma::Algebra::MinusGammaZGamma5,
      Gamma::Algebra::GammaZGamma5,
      Gamma::Algebra::GammaYGamma5,
      Gamma::Algebra::MinusGammaYGamma5,
      Gamma::Algebra::GammaY,
      Gamma::Algebra::MinusGammaY,
      Gamma::Algebra::MinusGammaXGamma5,
      Gamma::Algebra::GammaXGamma5,
      Gamma::Algebra::MinusGammaX,
      Gamma::Algebra::GammaX,
      Gamma::Algebra::GammaT,
      Gamma::Algebra::MinusGammaT,
      Gamma::Algebra::GammaTGamma5,
      Gamma::Algebra::MinusGammaTGamma5,
      Gamma::Algebra::MinusSigmaZT,
      Gamma::Algebra::SigmaZT,
      Gamma::Algebra::MinusSigmaXZ,
      Gamma::Algebra::SigmaXZ,
      Gamma::Algebra::MinusGamma5,
      Gamma::Algebra::Gamma5,
      Gamma::Algebra::SigmaXT,
      Gamma::Algebra::MinusSigmaXT,
      Gamma::Algebra::MinusSigmaYZ,
      Gamma::Algebra::SigmaYZ,
      Gamma::Algebra::SigmaYT,
      Gamma::Algebra::MinusSigmaYT,
      Gamma::Algebra::Identity,
      Gamma::Algebra::MinusIdentity}}
  }};

NAMESPACE_END(Grid);
