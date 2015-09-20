#ifndef OMALG_NONDETERMINISTIC_OMEGA_AUTOMATON
#define OMALG_NONDETERMINISTIC_OMEGA_AUTOMATON

#include <vector>
#include <set>

#include "OmegaAutomaton.h"

namespace omalg {

  class NondeterministicOmegaAutomaton: public virtual OmegaAutomaton {
	private:
		std::vector<std::vector<std::set<int> > > transitionRelation;
	protected:
		NondeterministicOmegaAutomaton(std::vector<std::vector<std::set<int> > > theTransitionRelation);
  public:
    virtual std::string description() const override;
  };
}

#endif
