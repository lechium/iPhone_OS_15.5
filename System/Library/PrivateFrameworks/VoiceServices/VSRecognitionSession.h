//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, VSKeepAlive, VSRecognitionAction, VSSpeechSynthesizer;
@protocol VSRecognitionSessionDelegate;

@interface VSRecognitionSession : NSObject
{
    NSString *_modelIdentifier;	// 8 = 0x8
    VSKeepAlive *_keepAlive;	// 16 = 0x10
    id <VSRecognitionSessionDelegate> _delegate;	// 24 = 0x18
    VSRecognitionAction *_currentAction;	// 32 = 0x20
    NSArray *_topLevelKeywords;	// 40 = 0x28
    id _handlingThread;	// 48 = 0x30
    VSSpeechSynthesizer *_synthesizer;	// 56 = 0x38
    NSString *_languageID;	// 64 = 0x40
    NSString *_debugDumpPath;	// 72 = 0x48
    NSString *_audioInputPath;	// 80 = 0x50
    double _levelInterval;	// 88 = 0x58
    unsigned long long _keywordPhase;	// 96 = 0x60
    struct {
        unsigned int delegateWillBegin:1;
        unsigned int delegateBegin:1;
        unsigned int delegateOpenURL:1;
        unsigned int delegateOpenURLAsync:1;
        unsigned int delegateFinishedSpeaking:1;
        unsigned int delegateComplete:1;
        unsigned int debugDumpEnabled:1;
        unsigned int preferredEngine:2;
        unsigned int performHandlerActions:1;
        unsigned int allowSensitiveActions:1;
        unsigned int bluetoothAllowed:1;
        unsigned int resetNextAction:1;
        unsigned int isSpeaking:1;
        unsigned int actionBegan:1;
        unsigned int actionBeginning:1;
        unsigned int actionBeginDeferred:1;
        unsigned int invalid:1;
        unsigned int observeKeywordChange:1;
    } _sessionFlags;	// 104 = 0x68
}

- (void)setPerformRecognitionHandlerActions:(_Bool)arg1;	// IMP=0x0000000000023826
- (_Bool)setPreferredEngine:(int)arg1;	// IMP=0x00000000000237b7
- (_Bool)setNextRecognitionRequiresReset:(_Bool)arg1;	// IMP=0x0000000000023752
- (_Bool)setNextRecognitionAudioInputPath:(id)arg1;	// IMP=0x00000000000236f8
- (id)debugDumpPath;	// IMP=0x00000000000236ee
- (_Bool)setDebugDumpEnabled:(_Bool)arg1;	// IMP=0x0000000000023633
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;	// IMP=0x0000000000023604
- (void)_notifyDelegateFinishedSpeakingWithError:(id)arg1;	// IMP=0x00000000000235e0
- (id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2;	// IMP=0x00000000000234f7
- (id)_beginSpeakingAttributedString:(id)arg1;	// IMP=0x00000000000234a3
- (id)beginSpeakingString:(id)arg1;	// IMP=0x000000000002344f
- (id)beginSpeakingFeedbackString;	// IMP=0x00000000000233a8
- (void)_keywordIndexChanged;	// IMP=0x000000000002331a
- (id)_keywordsForModelIdentifier:(id)arg1;	// IMP=0x0000000000023279
- (id)_topLevelKeywords;	// IMP=0x00000000000231e8
- (id)_createPhaseSortedKeywordsFromArray:(id)arg1;	// IMP=0x0000000000022fd6
- (struct __CFDictionary *)_createKeywordIndex;	// IMP=0x0000000000022f1f
- (long long)keywordCount;	// IMP=0x0000000000022ef4
- (id)keywordAtIndex:(long long)arg1;	// IMP=0x0000000000022ec3
- (void)setKeywordPhase:(unsigned long long)arg1;	// IMP=0x0000000000022e97
- (float)inputLevelDB;	// IMP=0x0000000000022e6b
- (float)inputLevel;	// IMP=0x0000000000022e3f
- (void)setInputLevelUpdateInterval:(double)arg1;	// IMP=0x0000000000022dee
- (id)displayStatusString;	// IMP=0x0000000000022dd8
- (id)displayResultString;	// IMP=0x0000000000022dc2
- (id)spokenFeedbackAttributedString;	// IMP=0x0000000000022dac
- (id)spokenFeedbackString;	// IMP=0x0000000000022d96
- (void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3;	// IMP=0x0000000000022d56
- (id)_recognitionResultHandlingThread;	// IMP=0x0000000000022d16
- (id)_currentRecognizeAction;	// IMP=0x0000000000022ce0
- (void)_setAction:(id)arg1;	// IMP=0x0000000000022b53
- (void)_notifyDelegateOpenURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022af5
- (void)_notifyDelegateActionStarted;	// IMP=0x0000000000022ad4
- (_Bool)_actionStarted:(id)arg1;	// IMP=0x0000000000022a6e
- (void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3;	// IMP=0x0000000000022893
- (id)cancel;	// IMP=0x000000000002287f
- (id)cancelMaintainingKeepAlive:(_Bool)arg1;	// IMP=0x00000000000227af
- (_Bool)setBluetoothInputAllowed:(_Bool)arg1;	// IMP=0x000000000002273d
- (_Bool)sensitiveActionsEnabled;	// IMP=0x000000000002272f
- (void)setSensitiveActionsEnabled:(_Bool)arg1;	// IMP=0x0000000000022719
- (_Bool)nextActionWillRecognize;	// IMP=0x00000000000226f6
- (_Bool)nextActionWillTerminateSession;	// IMP=0x00000000000226da
- (_Bool)isBusy;	// IMP=0x00000000000226c2
- (_Bool)hasDeferredAction;	// IMP=0x00000000000226b7
- (_Bool)isValid;	// IMP=0x00000000000226aa
- (_Bool)isFinished;	// IMP=0x000000000002269c
- (_Bool)isActivelyRecognizing;	// IMP=0x0000000000022671
- (_Bool)isRecognizing;	// IMP=0x0000000000022646
- (id)reset;	// IMP=0x00000000000225af
- (id)beginNextAction;	// IMP=0x00000000000223e3
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000222f7
- (void)dealloc;	// IMP=0x0000000000022225
- (id)initWithModelIdentifier:(id)arg1;	// IMP=0x00000000000221c5
- (id)init;	// IMP=0x0000000000022179
- (void)_init;	// IMP=0x0000000000022149

@end
