//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer, AVSpeechUtterance, AXDispatchTimer, AXLanguageTag, AXLanguageTaggedContent, NSArray, NSMutableArray, NSString;
@protocol AXOratorDelegate;

@interface AXOrator : NSObject <AVSpeechSynthesizerDelegate>
{
    AVSpeechUtterance *_statusUtterance;	// 8 = 0x8
    _Bool _contentIsSpeakable;	// 16 = 0x10
    AXDispatchTimer *_audioSessionTimer;	// 24 = 0x18
    _Bool _spellOutContent;	// 32 = 0x20
    _Bool _supportsAccurateWordCallbacks;	// 33 = 0x21
    _Bool _skipLuthorRules;	// 34 = 0x22
    _Bool _shouldSpeakNextItemOnResume;	// 35 = 0x23
    _Bool _preferredLanguageWasSpecified;	// 36 = 0x24
    _Bool _isProcessingContentForSpeech;	// 37 = 0x25
    id <AXOratorDelegate> _delegate;	// 40 = 0x28
    long long _speakingContext;	// 48 = 0x30
    AXLanguageTaggedContent *_selectedContent;	// 56 = 0x38
    double _audioSessionInactiveTimeout;	// 64 = 0x40
    AXLanguageTaggedContent *_speakingContent;	// 72 = 0x48
    NSArray *_speakingContentTokenRanges;	// 80 = 0x50
    unsigned long long _numberOfTokensToSkip;	// 88 = 0x58
    AVSpeechSynthesizer *_speechSynthesizer;	// 96 = 0x60
    NSMutableArray *_speechSequenceItems;	// 104 = 0x68
    NSString *_lastUtteranceLanguageCode;	// 112 = 0x70
    AVSpeechUtterance *_lastUtterance;	// 120 = 0x78
    AXLanguageTag *_lastUtteranceLanguageTag;	// 128 = 0x80
    NSString *_currentLanguageCode;	// 136 = 0x88
    NSMutableArray *_additionalContentToProcess;	// 144 = 0x90
    struct _NSRange _lastSpokenSubstringRange;	// 152 = 0x98
    struct _NSRange _lastUtteranceSubstringRange;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000005e592
@property(retain, nonatomic) NSMutableArray *additionalContentToProcess; // @synthesize additionalContentToProcess=_additionalContentToProcess;
@property(nonatomic) _Bool isProcessingContentForSpeech; // @synthesize isProcessingContentForSpeech=_isProcessingContentForSpeech;
@property(nonatomic) _Bool preferredLanguageWasSpecified; // @synthesize preferredLanguageWasSpecified=_preferredLanguageWasSpecified;
@property(retain, nonatomic) NSString *currentLanguageCode; // @synthesize currentLanguageCode=_currentLanguageCode;
@property(nonatomic) _Bool shouldSpeakNextItemOnResume; // @synthesize shouldSpeakNextItemOnResume=_shouldSpeakNextItemOnResume;
@property(retain, nonatomic) AXLanguageTag *lastUtteranceLanguageTag; // @synthesize lastUtteranceLanguageTag=_lastUtteranceLanguageTag;
@property(retain, nonatomic) AVSpeechUtterance *lastUtterance; // @synthesize lastUtterance=_lastUtterance;
@property(nonatomic) struct _NSRange lastUtteranceSubstringRange; // @synthesize lastUtteranceSubstringRange=_lastUtteranceSubstringRange;
@property(retain, nonatomic) NSString *lastUtteranceLanguageCode; // @synthesize lastUtteranceLanguageCode=_lastUtteranceLanguageCode;
@property(retain, nonatomic) NSMutableArray *speechSequenceItems; // @synthesize speechSequenceItems=_speechSequenceItems;
@property(retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
@property(nonatomic) unsigned long long numberOfTokensToSkip; // @synthesize numberOfTokensToSkip=_numberOfTokensToSkip;
@property(retain, nonatomic) NSArray *speakingContentTokenRanges; // @synthesize speakingContentTokenRanges=_speakingContentTokenRanges;
@property(retain, nonatomic) AXLanguageTaggedContent *speakingContent; // @synthesize speakingContent=_speakingContent;
@property(nonatomic) double audioSessionInactiveTimeout; // @synthesize audioSessionInactiveTimeout=_audioSessionInactiveTimeout;
@property(nonatomic) _Bool skipLuthorRules; // @synthesize skipLuthorRules=_skipLuthorRules;
@property(nonatomic) _Bool supportsAccurateWordCallbacks; // @synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks;
@property(nonatomic) _Bool spellOutContent; // @synthesize spellOutContent=_spellOutContent;
@property(retain, nonatomic) AXLanguageTaggedContent *selectedContent; // @synthesize selectedContent=_selectedContent;
@property(nonatomic) long long speakingContext; // @synthesize speakingContext=_speakingContext;
@property(nonatomic) struct _NSRange lastSpokenSubstringRange; // @synthesize lastSpokenSubstringRange=_lastSpokenSubstringRange;
@property(nonatomic) __weak id <AXOratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;	// IMP=0x000000000005df94
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;	// IMP=0x000000000005dea4
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;	// IMP=0x000000000005ddff
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;	// IMP=0x000000000005dd59
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;	// IMP=0x000000000005dcb3
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;	// IMP=0x000000000005da22
- (_Bool)_successWithCode:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000005d9bf
- (_Bool)_canSpeakTaggedContent:(id)arg1;	// IMP=0x000000000005d888
- (void)_updateAudioSessionCategory;	// IMP=0x000000000005d7a4
- (void)_clearAllContentState;	// IMP=0x000000000005d691
- (void)_tokenizeContentIfNeeded;	// IMP=0x000000000005d15e
- (_Bool)_skipByUnit:(_Bool)arg1 boundary:(unsigned long long)arg2;	// IMP=0x000000000005ce48
- (void)_speakNextTokenFromCurrentTokenIndex:(long long)arg1 forward:(_Bool)arg2 boundary:(unsigned long long)arg3;	// IMP=0x000000000005c907
- (long long)_currentTokenIndex:(_Bool)arg1;	// IMP=0x000000000005c5a8
- (void)_respeakUtteranceIfNeeded;	// IMP=0x000000000005c17e
- (id)_speechSequenceItemsStartingAtContentLocation:(unsigned long long)arg1;	// IMP=0x000000000005bf22
- (_Bool)_changeSpeakingSpeed:(double)arg1 usingLanugageSpecificRate:(_Bool)arg2;	// IMP=0x000000000005bd5b
- (_Bool)_useLanguageSpecificSpeakingRate;	// IMP=0x000000000005bc41
- (void)_speakNextItemInSequence;	// IMP=0x000000000005b071
- (void)_processAdditionalContentInPreparationForSpeech;	// IMP=0x000000000005af47
- (id)_getLangCodeForItem:(id)arg1;	// IMP=0x000000000005ad2a
- (void)_updateSequenceForSpellOutBehavior;	// IMP=0x000000000005aa42
- (void)_startSpeakingSequence;	// IMP=0x000000000005a94e
- (void)clearSelectedContent;	// IMP=0x000000000005a93a
- (_Bool)canResumeWithContent:(id)arg1;	// IMP=0x000000000005a82e
- (_Bool)contentIsSpeakable;	// IMP=0x000000000005a825
- (void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2;	// IMP=0x000000000005a381
- (_Bool)rewindWithBoundary:(unsigned long long)arg1;	// IMP=0x000000000005a36a
- (_Bool)fastForwardWithBoundary:(unsigned long long)arg1;	// IMP=0x000000000005a350
- (_Bool)speakSlower;	// IMP=0x000000000005a2da
- (_Bool)speakFaster;	// IMP=0x000000000005a264
- (_Bool)setSpeakingRate:(double)arg1;	// IMP=0x000000000005a221
- (double)currentSpeechRateForAdjustment;	// IMP=0x000000000005a14e
- (_Bool)isSpeaking;	// IMP=0x000000000005a0c9
- (_Bool)isPaused;	// IMP=0x000000000005a085
- (float)speechRate;	// IMP=0x000000000005a02e
- (_Bool)resumeSpeakingAfterDelay:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000059dfa
- (_Bool)resumeSpeaking:(id *)arg1;	// IMP=0x0000000000059de5
- (_Bool)stopSpeaking:(id *)arg1;	// IMP=0x0000000000059d55
- (_Bool)pauseSpeaking:(id *)arg1;	// IMP=0x0000000000059ca2
- (_Bool)startSpeakingWithPreferredLanguage:(id)arg1 delayBeforeStart:(double)arg2 error:(id *)arg3;	// IMP=0x00000000000598a3
- (_Bool)startSpeakingWithPreferredLanguage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005988e
@property(readonly, nonatomic) NSString *currentVoiceIdentifier;
- (void)addAdditionalContentToSpeechQueue:(id)arg1;	// IMP=0x0000000000059473
@property(copy, nonatomic) NSString *content;
- (id)init;	// IMP=0x0000000000059110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

