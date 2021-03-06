//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject
{
    NSString *m_softwareLayout;	// 8 = 0x8
    struct USet *m_precomposedCharacterSet;	// 16 = 0x10
    struct USet *m_acceptableCharacterSet;	// 24 = 0x18
    NSMutableDictionary *m_compositionMaps;	// 32 = 0x20
    NSMutableDictionary *m_reverseCompositionMaps;	// 40 = 0x28
    _Bool _useRelaxedOVSPolicy;	// 48 = 0x30
    _Bool _skipCandidateQualityFilter;	// 49 = 0x31
    TIInputMode *_inputMode;	// 56 = 0x38
    long long _currentUserInterfaceIdiom;	// 64 = 0x40
}

+ (id)createSpecializationForInputMode:(id)arg1;	// IMP=0x000000000006e98c
+ (struct USet *)createAcceptableCharacterSetForKeyboardLocale:(id)arg1;	// IMP=0x00000000000708ef
+ (id)findPrefixMatchesFor:(id)arg1 fromIndex:(unsigned long long)arg2 usingCompositionMap:(id)arg3 matchesInputAsPrefix:(_Bool)arg4;	// IMP=0x0000000000070659
- (void).cxx_destruct;	// IMP=0x000000000006e8bc
@property(nonatomic) _Bool skipCandidateQualityFilter; // @synthesize skipCandidateQualityFilter=_skipCandidateQualityFilter;
@property(nonatomic) _Bool useRelaxedOVSPolicy; // @synthesize useRelaxedOVSPolicy=_useRelaxedOVSPolicy;
@property(nonatomic) long long currentUserInterfaceIdiom; // @synthesize currentUserInterfaceIdiom=_currentUserInterfaceIdiom;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (_Bool)shouldConvertEagerly;	// IMP=0x000000000006e87c
- (id)replacementForDoubleSpace;	// IMP=0x000000000006e80a
- (id)accentKeyStringForKeyboardState:(id)arg1;	// IMP=0x000000000006e802
- (id)layoutTags;	// IMP=0x000000000006e7b2
- (id)allAccentKeyStrings;	// IMP=0x000000000006e762
- (id)wordSeparator;	// IMP=0x000000000006e755
- (_Bool)shouldLearnLowercaseAtBeginningOfSentence;	// IMP=0x000000000006e74d
- (_Bool)shouldAddModifierSymbolsToWordCharacters;	// IMP=0x000000000006e745
- (_Bool)supportsLearning;	// IMP=0x000000000006e73d
- (_Bool)shouldExtendPriorWord;	// IMP=0x000000000006e735
- (id)keyboardBehaviors;	// IMP=0x000000000006e72d
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1;	// IMP=0x000000000006e634
- (void)dealloc;	// IMP=0x000000000006e5c9
- (id)initWithInputMode:(id)arg1;	// IMP=0x000000000006e55e
- (_Bool)shouldConvertAutocorrectionCandidatesToFullWidth;	// IMP=0x0000000000070510
- (id)dictionaryInputMode;	// IMP=0x00000000000704fe
- (_Bool)allowsAutocorrectionOfValidWords;	// IMP=0x00000000000704f6
- (_Bool)shouldConvertCandidateToExternal;	// IMP=0x00000000000704ee
- (const struct USet *)precomposedCharacterSet;	// IMP=0x00000000000704b1
- (_Bool)canHandleKeyHitTest;	// IMP=0x00000000000704a9
- (_Bool)dictionaryUsesExternalEncoding;	// IMP=0x00000000000704a1
- (struct USet *)createAcceptableCharacterSet;	// IMP=0x0000000000070429
- (_Bool)acceptsCharacter:(unsigned int)arg1;	// IMP=0x00000000000703ea
- (unsigned long long)maxPriorWordTokensAfterTrimming;	// IMP=0x00000000000703df
- (id)terminatorsDeletingAutospace;	// IMP=0x00000000000703af
- (id)wordCharacters;	// IMP=0x0000000000070338
- (id)sentenceTrailingCharacters;	// IMP=0x00000000000702c6
- (id)sentenceDelimitingCharacters;	// IMP=0x0000000000070254
- (id)sentencePrefixingCharacters;	// IMP=0x00000000000701e2
- (id)nonstopPunctuationCharacters;	// IMP=0x0000000000070170
- (id)internalStringToExternal:(id)arg1;	// IMP=0x000000000007000e
- (id)externalStringToInternal:(id)arg1;	// IMP=0x000000000006fc10
- (_Bool)shouldClearInput:(id)arg1;	// IMP=0x000000000006f974
- (id)findPrefixMatchesFor:(id)arg1 fromIndex:(unsigned long long)arg2 usingCompositionMap:(id)arg3 matchesInputAsPrefix:(_Bool)arg4;	// IMP=0x000000000006f703
- (id)getComposedStringFor:(id)arg1 usingMap:(id)arg2 byConvertingEagerly:(_Bool)arg3;	// IMP=0x000000000006f41c
- (id)getComposedStringFor:(id)arg1 usingMap:(id)arg2;	// IMP=0x000000000006f38d
- (id)compositionMapForLayout:(id)arg1 reverse:(_Bool)arg2;	// IMP=0x000000000006ee4a
- (_Bool)doesComposeText;	// IMP=0x000000000006ee06
- (void)specializeInputManager:(void *)arg1 forLayoutState:(id)arg2;	// IMP=0x000000000006edd1
- (void *)createInputManager;	// IMP=0x000000000006ecd6

@end

