////////////////////////////////////////////////////////////////////////////////
//
//  eASTKaonPhysics.hh 
//  Kaon hadronic physics constructor for eASTPhysicsList  
//
//    Jun.21.2018 : original implementation - Dennis H. Wright (SLAC)
//    May.06.2021 : migration to eAST - Makoto Asai (SLAC)
//                                                        
////////////////////////////////////////////////////////////////////////////////

#ifndef eASTKaonPhysics_h
#define eASTKaonPhysics_h 1

#include "G4VPhysicsConstructor.hh"

class G4TheoFSGenerator;
class G4FTFModel;
class G4ExcitedStringDecay;
class G4LundStringFragmentation;
class G4GeneratorPrecompoundInterface;


class eASTKaonPhysics: public G4VPhysicsConstructor
{
  public:
    eASTKaonPhysics();
    ~eASTKaonPhysics();

    virtual void ConstructParticle() override;
    virtual void ConstructProcess() override;
    virtual void TerminateWorker() override;

  private: 
    G4TheoFSGenerator* ftfp = nullptr;
    G4FTFModel* stringModel = nullptr;
    G4ExcitedStringDecay* stringDecay = nullptr;
    G4LundStringFragmentation* fragModel = nullptr;
    G4GeneratorPrecompoundInterface* preCompoundModel = nullptr;
 
};

#endif
