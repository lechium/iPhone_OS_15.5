//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIKeyboardActivityObserving-Protocol.h>

@class NSCache, NSString, TIInputMode, TIMecabraEnvironment, TIMecabraWrapper, TIWordSearchOperationGetCandidates;

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving>
{
    id _userDictionaryObserver;	// 8 = 0x8
    id _dictionaryUpdateObserver;	// 16 = 0x10
    _Bool _autoCorrects;	// 24 = 0x18
    _Bool _shouldLearnAcceptedCandidate;	// 25 = 0x19
    _Bool _disablePersonalData;	// 26 = 0x1a
    TIInputMode *_inputMode;	// 32 = 0x20
    TIMecabraEnvironment *_mecabraEnvironment;	// 40 = 0x28
    TIMecabraWrapper *_mecabraWrapper;	// 48 = 0x30
    TIWordSearchOperationGetCandidates *_operation;	// 56 = 0x38
    NSCache *_candidatesCache;	// 64 = 0x40
}

+ (id)recipientRecords;	// IMP=0x00000000000e0c88
+ (id)sharedOperationQueue;	// IMP=0x00000000000e0c58
+ (id)mecabraLearningDictionaryDirectory;	// IMP=0x00000000000e0c00
+ (id)configureUserDictionaryObserver:(id)arg1 previousObserver:(id)arg2;	// IMP=0x00000000000e0a80
- (void).cxx_destruct;	// IMP=0x00000000000dffc9
@property(nonatomic) _Bool disablePersonalData; // @synthesize disablePersonalData=_disablePersonalData;
@property(retain, nonatomic) NSCache *candidatesCache; // @synthesize candidatesCache=_candidatesCache;
@property _Bool shouldLearnAcceptedCandidate; // @synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate;
@property _Bool autoCorrects; // @synthesize autoCorrects=_autoCorrects;
@property(retain) TIWordSearchOperationGetCandidates *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // @synthesize mecabraEnvironment=_mecabraEnvironment;
@property(readonly) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (void)revertInlineCandidate;	// IMP=0x00000000000dfeb7
- (void)setMecabraTextContentType:(int)arg1;	// IMP=0x00000000000dfe29
- (void)resetMecabraEnvironment;	// IMP=0x00000000000dfda1
- (void)commitPunctuationSurface:(id)arg1;	// IMP=0x00000000000dfcd9
- (void)commitSurface:(id)arg1;	// IMP=0x00000000000dfc11
- (void)declareEndOfSentence;	// IMP=0x00000000000dfb89
- (void)adjustEnvironmentOnAction:(long long)arg1;	// IMP=0x00000000000dfafa
- (void)clearLeftDocumentContext;	// IMP=0x00000000000dfa72
- (void)setLeftDocumentContext:(id)arg1 rightDocumentContext:(id)arg2;	// IMP=0x00000000000df989
- (void)flushDynamicData;	// IMP=0x00000000000df8ee
- (void)adaptOfflineToParagraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(double)arg3;	// IMP=0x00000000000df815
- (void)updateDictionaryPaths;	// IMP=0x00000000000df5da
- (void)updateUserWordEntries;	// IMP=0x00000000000df568
- (void)setLanguageModelAdaptationContext:(id)arg1;	// IMP=0x00000000000df4e6
- (void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg1 recipientIdentifier:(id)arg2;	// IMP=0x00000000000df272
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x00000000000df1d5
- (void)dynamicDictionariesRemoved:(id)arg1;	// IMP=0x00000000000df15c
- (void)clearObservers;	// IMP=0x00000000000df0b4
- (void)saveLearningDictionary;	// IMP=0x00000000000defe3
- (void)completeOperationsInQueue;	// IMP=0x00000000000def63
- (void)lastAcceptedCandidateCorrected;	// IMP=0x00000000000deef0
- (void)releaseBackgroundActivityAssertion;	// IMP=0x00000000000deeac
- (void)performOperationAsync:(id)arg1 withBackgroundActivityAssertion:(_Bool)arg2;	// IMP=0x00000000000deb44
- (void)performOperationAsync:(id)arg1;	// IMP=0x00000000000deb30
- (void)resetPreviousWord;	// IMP=0x00000000000dead5
- (_Bool)isCancelled;	// IMP=0x00000000000dea91
- (void)cancel;	// IMP=0x00000000000dea10
- (void)performAccept:(void *)arg1 isPartial:(_Bool)arg2;	// IMP=0x00000000000de978
- (_Bool)addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;	// IMP=0x00000000000de85f
- (void)_addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;	// IMP=0x00000000000de6d0
- (id)cachedCandidatesForOperation:(id)arg1;	// IMP=0x00000000000de62c
- (id)uncachedCandidatesForOperation:(id)arg1;	// IMP=0x00000000000de624
- (id)candidatesForOperation:(id)arg1;	// IMP=0x00000000000de501
- (id)candidatesCacheKeyForOperation:(id)arg1;	// IMP=0x00000000000de449
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;	// IMP=0x00000000000de2d6
- (void)keyboardActivityDidTransition:(id)arg1;	// IMP=0x00000000000de1b6
- (void)dealloc;	// IMP=0x00000000000de0fa
- (id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2;	// IMP=0x00000000000ddf98
- (id)initTIWordSearchWithInputMode:(id)arg1;	// IMP=0x00000000000ddf84
- (id)mecabraCreationOptionsDictionary;	// IMP=0x00000000000ddf7c
- (unsigned long long)mecabraCreationOptions;	// IMP=0x00000000000ddf74
@property(readonly, nonatomic) int mecabraLanguage;
- (int)mecabraInputMethodType;	// IMP=0x00000000000ddf3f
@property(readonly) struct __Mecabra *mecabra;
@property(retain) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void)clearLearningDictionary;	// IMP=0x00000000000ddc1d
- (void)updateMecabraState;	// IMP=0x00000000000ddc17
- (void)setDebuggingLogEnabled:(_Bool)arg1;	// IMP=0x00000000000ddb5f
- (void)clearCache;	// IMP=0x00000000000ddb22
- (void)endInputSession;	// IMP=0x00000000000ddb1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

