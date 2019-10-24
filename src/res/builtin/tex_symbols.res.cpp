#include "atom/atom_basic.h"

#define sym(type, name) \
  { #name, sptr < SymbolAtom > (new SymbolAtom(#name, type, false)) }

#define del(type, name) \
  { #name, sptr < SymbolAtom > (new SymbolAtom(#name, type, true)) }

#define ord TYPE_ORDINARY
#define rel TYPE_RELATION
#define acc TYPE_ACCENT
#define bin TYPE_BINARY_OPERATOR
#define op TYPE_BIG_OPERATOR
#define open TYPE_OPENING
#define close TYPE_CLOSING
#define punct TYPE_PUNCTUATION

/**
 * BUILTIN SYMBOLS
 * Page 445 in the [The TeXBook]
 */
map<string, sptr<SymbolAtom>> SymbolAtom::_symbols = {
    sym(ord, ae),
    sym(ord, AE),
    sym(ord, OE),
    sym(ord, oe),
    sym(ord, ss),
    sym(ord, o),
    sym(ord, O),
    sym(ord, i),
    sym(ord, j),
    sym(ord, euler),
    sym(ord, textapos),
    sym(ord, mathlapos),
    sym(ord, mathcedilla),
    sym(acc, ogonek),
    sym(ord, polishlcross),
    sym(ord, lq),
    sym(ord, rq),
    sym(ord, textdbend),
    sym(ord, dbend),
    sym(rel, shortleftarrow),
    sym(rel, shortrightarrow),
    sym(rel, shortuparrow),
    sym(rel, shortdownarrow),
    sym(bin, Yup),
    sym(bin, Ydown),
    sym(bin, Yleft),
    sym(bin, Yright),
    sym(bin, varcurlyvee),
    sym(bin, varcurlywedge),
    sym(bin, minuso),
    sym(bin, baro),
    sym(bin, sslash),
    sym(bin, bbslash),
    sym(bin, moo),
    sym(bin, varotimes),
    sym(bin, varoast),
    sym(bin, varobar),
    sym(bin, varodot),
    sym(bin, varoslash),
    sym(bin, varobslash),
    sym(bin, varocircle),
    sym(bin, varoplus),
    sym(bin, varominus),
    sym(bin, boxast),
    sym(bin, boxbar),
    sym(bin, boxdot),
    sym(bin, boxslash),
    sym(bin, boxbslash),
    sym(bin, boxcircle),
    sym(bin, boxbox),
    sym(bin, boxempty),
    sym(ord, lightning),
    sym(bin, merge),
    sym(bin, vartimes),
    sym(bin, fatsemi),
    sym(rel, sswarrow),
    sym(rel, ssearrow),
    sym(rel, curlywedgeuparrow),
    sym(rel, curlywedgedownarrow),
    sym(bin, fatslash),
    sym(bin, fatbslash),
    sym(bin, lbag),
    sym(bin, rbag),
    sym(bin, varbigcirc),
    sym(rel, leftrightarroweq),
    sym(rel, curlyveedownarrow),
    sym(rel, curlyveeuparrow),
    sym(rel, nnwarrow),
    sym(rel, nnearrow),
    sym(bin, leftslice),
    sym(bin, rightslice),
    sym(bin, varolessthan),
    sym(bin, varogreaterthan),
    sym(bin, varovee),
    sym(bin, varowedge),
    sym(bin, talloblong),
    sym(bin, interleave),
    sym(bin, obar),
    sym(bin, obslash),
    sym(bin, olessthan),
    sym(bin, ogreaterthan),
    sym(bin, ovee),
    sym(bin, owedge),
    sym(bin, oblong),
    sym(rel, inplus),
    sym(rel, niplus),
    sym(bin, nplus),
    sym(rel, subsetplus),
    sym(rel, supsetplus),
    sym(rel, subsetpluseq),
    sym(rel, supsetpluseq),
    sym(open, Lbag),
    sym(close, Rbag),
    sym(open, llbracket),
    sym(close, rrbracket),
    sym(open, llparenthesis),
    sym(close, rrparenthesis),
    sym(open, binampersand),
    sym(close, bindnasrepma),
    sym(rel, trianglelefteqslant),
    sym(rel, trianglerighteqslant),
    sym(rel, ntrianglelefteqslant),
    sym(rel, ntrianglerighteqslant),
    sym(open, llfloor),
    sym(close, rrfloor),
    sym(open, llceil),
    sym(close, rrceil),
    sym(rel, arrownot),
    sym(rel, Arrownot),
    sym(rel, Mapstochar),
    sym(rel, mapsfromchar),
    sym(rel, Mapsfromchar),
    sym(bin, leftrightarrowtriangle),
    sym(rel, leftarrowtriangle),
    sym(rel, rightarrowtriangle),
    sym(op, bigtriangledown),
    sym(op, bigtriangleup),
    sym(op, bigcurlyvee),
    sym(op, bigcurlywedge),
    sym(op, bigsqcap),
    sym(op, bigbox),
    sym(op, bigparallel),
    sym(op, biginterleave),
    sym(op, bignplus),
    sym(open, ulcorner),
    sym(close, urcorner),
    sym(open, llcorner),
    sym(close, lrcorner),
    sym(ord, maltese),
    sym(ord, textregistered),
    sym(ord, lhook),
    sym(ord, rhook),
    sym(rel, mapstochar),
    sym(ord, angle),
    sym(ord, hbar),
    sym(rel, sqsubset),
    sym(rel, sqsupset),
    sym(ord, mho),
    sym(ord, square),
    sym(ord, lozenge),
    sym(rel, vartriangleright),
    sym(rel, vartriangleleft),
    sym(rel, trianglerighteq),
    sym(rel, trianglelefteq),
    sym(rel, rightsquigarrow),
    sym(rel, lhd),
    sym(rel, unlhd),
    sym(rel, rhd),
    sym(rel, unrhd),
    sym(ord, Box),

    sym(bin, boxdot),
    sym(bin, boxplus),
    sym(bin, boxtimes),
    sym(ord, square),
    sym(ord, blacksquare),
    sym(bin, centerdot),
    sym(ord, lozenge),
    sym(ord, blacklozenge),
    sym(rel, circlearrowright),
    sym(rel, circlearrowleft),
    sym(rel, leftrightharpoons),
    sym(rel, rightleftharpoons),
    sym(bin, boxminus),
    sym(rel, Vdash),
    sym(rel, Vvdash),
    sym(rel, vDash),
    sym(rel, twoheadrightarrow),
    sym(rel, twoheadleftarrow),
    sym(rel, leftleftarrows),
    sym(rel, rightrightarrows),
    sym(rel, upuparrows),
    sym(rel, downdownarrows),
    sym(rel, upharpoonright),
    sym(rel, downharpoonright),
    sym(rel, upharpoonleft),
    sym(rel, downharpoonleft),
    sym(rel, rightarrowtail),
    sym(rel, leftarrowtail),
    sym(rel, leftrightarrows),
    sym(rel, rightleftarrows),
    sym(rel, Lsh),
    sym(rel, Rsh),
    sym(rel, rightsquigarrow),
    sym(rel, leftrightsquigarrow),
    sym(rel, looparrowleft),
    sym(rel, looparrowright),
    sym(rel, circeq),
    sym(rel, succsim),
    sym(rel, gtrsim),
    sym(rel, gtrapprox),
    sym(rel, multimap),
    sym(rel, therefore),
    sym(rel, because),
    sym(rel, doteqdot),
    sym(rel, triangleq),
    sym(rel, precsim),
    sym(rel, lesssim),
    sym(rel, lessapprox),
    sym(rel, eqslantless),
    sym(rel, eqslantgtr),
    sym(rel, curlyeqprec),
    sym(rel, curlyeqsucc),
    sym(rel, preccurlyeq),
    sym(rel, leqq),
    sym(rel, leqslant),
    sym(rel, lessgtr),
    sym(ord, backprime),
    sym(rel, risingdotseq),
    sym(rel, fallingdotseq),
    sym(rel, succcurlyeq),
    sym(rel, geqq),
    sym(rel, geqslant),
    sym(rel, gtrless),
    sym(rel, vartriangleright),
    sym(rel, vartriangleleft),
    sym(rel, trianglerighteq),
    sym(rel, trianglelefteq),
    sym(ord, bigstar),
    sym(rel, between),
    sym(ord, blacktriangledown),
    sym(rel, blacktriangleright),
    sym(rel, blacktriangleleft),
    sym(rel, vartriangle),
    sym(ord, blacktriangle),
    sym(ord, triangledown),
    sym(rel, eqcirc),
    sym(rel, lesseqgtr),
    sym(rel, gtreqless),
    sym(rel, lesseqqgtr),
    sym(rel, gtreqqless),
    sym(rel, Rrightarrow),
    sym(rel, Lleftarrow),
    sym(bin, veebar),
    sym(bin, barwedge),
    sym(bin, doublebarwedge),
    sym(ord, measuredangle),
    sym(ord, sphericalangle),
    sym(rel, varpropto),
    sym(rel, smallsmile),
    sym(rel, smallfrown),
    sym(rel, Subset),
    sym(rel, Supset),
    sym(bin, Cup),
    sym(bin, Cap),
    sym(bin, curlywedge),
    sym(bin, curlyvee),
    sym(bin, leftthreetimes),
    sym(bin, rightthreetimes),
    sym(rel, subseteqq),
    sym(rel, supseteqq),
    sym(rel, bumpeq),
    sym(rel, Bumpeq),
    sym(rel, lll),
    sym(rel, ggg),
    sym(ord, circledS),
    sym(rel, pitchfork),
    sym(bin, dotplus),
    sym(rel, backsim),
    sym(rel, backsimeq),
    sym(ord, complement),
    sym(bin, intercal),
    sym(bin, circledcirc),
    sym(bin, circledast),
    sym(bin, circleddash),
    sym(rel, lvertneqq),
    sym(rel, gvertneqq),
    sym(rel, nleq),
    sym(rel, ngeq),
    sym(rel, nless),
    sym(rel, ngtr),
    sym(rel, nprec),
    sym(rel, nsucc),
    sym(rel, lneqq),
    sym(rel, gneqq),
    sym(rel, nleqslant),
    sym(rel, ngeqslant),
    sym(rel, lneq),
    sym(rel, gneq),
    sym(rel, npreceq),
    sym(rel, nsucceq),
    sym(rel, precnsim),
    sym(rel, succnsim),
    sym(rel, lnsim),
    sym(rel, gnsim),
    sym(rel, nleqq),
    sym(rel, ngeqq),
    sym(rel, precneqq),
    sym(rel, succneqq),
    sym(rel, precnapprox),
    sym(rel, succnapprox),
    sym(rel, lnapprox),
    sym(rel, gnapprox),
    sym(rel, nsim),
    sym(rel, ncong),
    sym(ord, diagup),
    sym(ord, diagdown),
    sym(rel, varsubsetneq),
    sym(rel, varsupsetneq),
    sym(rel, nsubseteqq),
    sym(rel, nsupseteqq),
    sym(rel, subsetneqq),
    sym(rel, supsetneqq),
    sym(rel, varsubsetneqq),
    sym(rel, varsupsetneqq),
    sym(rel, subsetneq),
    sym(rel, supsetneq),
    sym(rel, nsubseteq),
    sym(rel, nsupseteq),
    sym(rel, nparallel),
    sym(rel, nmid),
    sym(rel, nshortmid),
    sym(rel, nshortparallel),
    sym(rel, nvdash),
    sym(rel, nVdash),
    sym(rel, nvDash),
    sym(rel, nVDash),
    sym(rel, ntrianglerighteq),
    sym(rel, ntrianglelefteq),
    sym(rel, ntriangleleft),
    sym(rel, ntriangleright),
    sym(rel, nleftarrow),
    sym(rel, nrightarrow),
    sym(rel, nLeftarrow),
    sym(rel, nRightarrow),
    sym(rel, nLeftrightarrow),
    sym(rel, nleftrightarrow),
    sym(bin, divideontimes),
    sym(ord, varnothing),
    sym(ord, nexists),
    sym(ord, Finv),
    sym(ord, Game),
    sym(ord, eth),
    sym(rel, eqsim),
    sym(ord, beth),
    sym(ord, gimel),
    sym(ord, daleth),
    sym(bin, lessdot),
    sym(bin, gtrdot),
    sym(bin, ltimes),
    sym(bin, rtimes),
    sym(rel, shortmid),
    sym(rel, shortparallel),
    sym(bin, smallsetminus),
    sym(rel, thicksim),
    sym(rel, thickapprox),
    sym(rel, approxeq),
    sym(rel, succapprox),
    sym(rel, precapprox),
    sym(rel, curvearrowleft),
    sym(rel, curvearrowright),
    sym(ord, digamma),
    sym(ord, varkappa),
    sym(ord, Bbbk),
    sym(ord, hslash),
    sym(rel, backepsilon),
    sym(rel, Diamond),
    sym(rel, leadsto),
    // miscellaneous symbols
    sym(punct, guillemotleft),
    sym(punct, guillemotright),
    sym(punct, guilsinglleft),
    sym(punct, guilsinglright),
    sym(punct, fg),
    sym(punct, og),
    sym(ord, textperthousand),
    sym(ord, textpertenthousand),
    sym(ord, textminus),
    sym(ord, textendash),
    sym(ord, textemdash),
    sym(ord, S),
    sym(ord, P),
    sym(punct, comma),
    sym(punct, ldotp),
    sym(punct, cdotp),
    sym(ord, normaldot),
    sym(punct, textnormaldot),
    sym(ord, slash),
    sym(punct, semicolon),
    sym(ord, faculty),
    sym(ord, question),
    sym(ord, questiondown),
    sym(ord, mathsharp),
    sym(ord, textdollar),
    sym(ord, textpercent),
    sym(ord, textampersand),
    sym(ord, textfractionsolidus),
    sym(ord, matharobase),
    sym(ord, underscore),
    sym(ord, checkmark),
    sym(ord, mathsterling),
    sym(ord, yen),
    // math accents
    sym(acc, acute),
    sym(acc, grave),
    sym(acc, ddot),
    sym(acc, doubleacute),
    sym(acc, tilde),
    sym(acc, mathring),
    sym(acc, mathring),
    sym(acc, bar),
    sym(acc, breve),
    sym(acc, check),
    sym(acc, hat),
    sym(acc, vec),
    sym(acc, dot),
    sym(acc, widehat),
    sym(acc, widetilde),
    sym(acc, tie),
    // delimiters that can change size
    del(open, lbrace),
    del(close, rbrace),
    del(open, lbrack),
    del(close, rbrack),
    del(close, rsqbrack),
    del(open, lsqbrack),
    del(open, langle),
    del(close, rangle),
    del(open, lfloor),
    del(close, rfloor),
    del(open, lceil),
    del(close, rceil),
    del(rel, uparrow),
    del(rel, Uparrow),
    del(rel, downarrow),
    del(rel, Downarrow),
    del(rel, updownarrow),
    del(rel, Updownarrow),
    del(ord, vert),
    del(ord, Vert),
    del(open, slashdel),
    del(rel, Relbar),
    del(open, lgroup),
    del(close, rgroup),
    del(ord, bracevert),
    del(open, lmoustache),
    del(close, rmoustache),
    // lowercase Greek letters
    sym(ord, alpha),
    sym(ord, beta),
    sym(ord, gamma),
    sym(ord, delta),
    sym(ord, epsilon),
    sym(ord, varepsilon),
    sym(ord, zeta),
    sym(ord, eta),
    sym(ord, theta),
    sym(ord, vartheta),
    sym(ord, iota),
    sym(ord, kappa),
    sym(ord, lambda),
    sym(ord, mu),
    sym(ord, nu),
    sym(ord, xi),
    sym(ord, omicron),
    sym(ord, pi),
    sym(ord, varpi),
    sym(ord, rho),
    sym(ord, varrho),
    sym(ord, sigma),
    sym(ord, varsigma),
    sym(ord, tau),
    sym(ord, upsilon),
    sym(ord, phi),
    sym(ord, varphi),
    sym(ord, chi),
    sym(ord, psi),
    sym(ord, omega),
    // uppercase Greek letters
    sym(ord, Gamma),
    sym(ord, Delta),
    sym(ord, Theta),
    sym(ord, Lambda),
    sym(ord, Xi),
    sym(ord, Pi),
    sym(ord, Sigma),
    sym(ord, Upsilon),
    sym(ord, Phi),
    sym(ord, Psi),
    sym(ord, Omega),
    sym(ord, varGamma),
    sym(ord, varDelta),
    sym(ord, varTheta),
    sym(ord, varLambda),
    sym(ord, varXi),
    sym(ord, varPi),
    sym(ord, varSigma),
    sym(ord, varUpsilon),
    sym(ord, varPhi),
    sym(ord, varPsi),
    sym(ord, varOmega),
    // miscellaneous symbols of type "ord"
    sym(ord, aleph),
    sym(ord, imath),
    sym(ord, jmath),
    sym(ord, ell),
    sym(ord, wp),
    sym(ord, Re),
    sym(ord, Im),
    sym(ord, partial),
    sym(ord, infty),
    sym(ord, prime),
    sym(ord, emptyset),
    sym(ord, nabla),
    sym(ord, surdsign),
    sym(ord, top),
    sym(ord, bot),
    sym(ord, |),
    sym(ord, triangle),
    del(ord, backslash),
    sym(ord, forall),
    sym(ord, exists),
    sym(ord, neg),
    sym(ord, lnot),
    sym(ord, flat),
    sym(ord, natural),
    sym(ord, sharp),
    sym(ord, clubsuit),
    sym(ord, diamondsuit),
    sym(ord, heartsuit),
    sym(ord, spadesuit),
    sym(ord, lacc),
    sym(ord, racc),
    // "large" operators
    sym(op, bigcap),
    sym(op, bigcup),
    sym(op, bigodot),
    sym(op, bigoplus),
    sym(op, bigotimes),
    sym(op, bigsqcup),
    sym(op, biguplus),
    sym(op, bigvee),
    sym(op, bigwedge),
    sym(op, coprod),
    sym(op, int),
    sym(op, oint),
    sym(op, sum),
    sym(op, prod),
    sym(op, smallint),
    // binary operators
    sym(bin, minus),
    sym(bin, plus),
    sym(bin, pm),
    sym(bin, mp),
    sym(bin, setminus),
    sym(bin, cdot),
    sym(bin, times),
    sym(bin, ast),
    sym(bin, star),
    sym(bin, diamond),
    sym(bin, circ),
    sym(bin, bullet),
    sym(bin, div),
    sym(bin, cap),
    sym(bin, cup),
    sym(bin, uplus),
    sym(bin, sqcap),
    sym(bin, sqcup),
    sym(bin, triangleleft),
    sym(bin, triangleright),
    sym(bin, wr),
    sym(bin, bigcirc),
    sym(bin, vee),
    sym(bin, lor),
    sym(bin, land),
    sym(bin, wedge),
    sym(bin, oplus),
    sym(bin, ominus),
    sym(bin, otimes),
    sym(bin, oslash),
    sym(bin, odot),
    sym(bin, dagger),
    sym(bin, ddagger),
    sym(bin, amalg),
    // relations
    sym(rel, equals),
    sym(rel, gt),
    sym(rel, lt),
    sym(rel, leq),
    sym(rel, le),
    sym(rel, prec),
    sym(rel, preceq),
    sym(rel, ll),
    sym(rel, subset),
    sym(rel, subseteq),
    sym(rel, sqsubseteq),
    sym(rel, in),
    sym(rel, vdash),
    sym(rel, smile),
    sym(rel, frown),
    sym(rel, geq),
    sym(rel, ge),
    sym(rel, succ),
    sym(rel, succeq),
    sym(rel, gg),
    sym(rel, supset),
    sym(rel, supseteq),
    sym(rel, sqsupseteq),
    sym(rel, ni),
    sym(rel, owns),
    sym(rel, dashv),
    sym(rel, mid),
    sym(rel, parallel),
    sym(rel, equiv),
    sym(rel, sim),
    sym(rel, simeq),
    sym(rel, asymp),
    sym(rel, approx),
    sym(rel, propto),
    sym(rel, perp),
    // special relation symbol with "width=0" (to overlap other relational symbols)
    sym(rel, not),
    // arrows = pointing relations
    sym(rel, colon),
    sym(rel, nearrow),
    sym(rel, searrow),
    sym(rel, swarrow),
    sym(rel, nwarrow),
    sym(rel, leftarrow),
    sym(rel, gets),
    sym(rel, Leftarrow),
    sym(rel, rightarrow),
    sym(rel, to),
    sym(rel, Rightarrow),
    sym(rel, leftrightarrow),
    sym(rel, Leftrightarrow),
    sym(rel, leftharpoonup),
    sym(rel, leftharpoondown),
    sym(rel, rightharpoonup),
    sym(rel, rightharpoondown),
    // specials
    sym(ord, textmu),
    sym(ord, texteuro),
    sym(ord, euro),
    sym(ord, android),
    sym(ord, dT),
    sym(ord, dE),
    sym(ord, dX),
    sym(ord, varparallel),
    sym(ord, nvarparallel),
    sym(ord, varparalleleq),
    sym(ord, parallelogram)};
