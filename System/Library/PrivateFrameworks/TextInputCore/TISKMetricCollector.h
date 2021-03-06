//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypingSessionAggregatedEventObserver-Protocol.h>

@class NLTagger, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, TIInputMode, TIKeyboardInput, TITypingSession, TIUserModelDataStore;
@protocol OS_dispatch_queue, TISensorWriterWrapper;

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver>
{
    TIInputMode *_inputMode;	// 8 = 0x8
    NSMutableDictionary *_touchToEventMap;	// 16 = 0x10
    NSMutableArray *_events;	// 24 = 0x18
    NSArray *_sortedEvents;	// 32 = 0x20
    NSMutableArray *_touches;	// 40 = 0x28
    NSMutableArray *_layoutIDs;	// 48 = 0x30
    NSMutableArray *_taps;	// 56 = 0x38
    long long _wordPosition;	// 64 = 0x40
    TIKeyboardInput *_lastInput;	// 72 = 0x48
    long long _currentWordPosition;	// 80 = 0x50
    long long _eventOrder;	// 88 = 0x58
    NSMutableArray *_currentSessionSamplesArray;	// 96 = 0x60
    unsigned long long _aggregatedWordThreshold;	// 104 = 0x68
    _Bool _isLoaded;	// 112 = 0x70
    TIUserModelDataStore *_userModelDataStore;	// 120 = 0x78
    _Bool _accentedLanguage;	// 128 = 0x80
    NSMutableArray *_accentedLayoutsMap;	// 136 = 0x88
    NSString *_identifier;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_workQueue;	// 152 = 0x98
    int _tccNotifyToken;	// 160 = 0xa0
    _Bool _isTCCAuthorized;	// 164 = 0xa4
    _Bool _skipTCCAuthorization;	// 165 = 0xa5
    NSDictionary *_wordBucketDictionary;	// 168 = 0xa8
    NSDictionary *_emojiBuckets;	// 176 = 0xb0
    NLTagger *_tagger;	// 184 = 0xb8
    NSString *_previousWord;	// 192 = 0xc0
    unsigned long long _wordAccumulationThreshold;	// 200 = 0xc8
    id <TISensorWriterWrapper> _dataWriter;	// 208 = 0xd0
    NSMutableArray *_savedSessionSamplesArray;	// 216 = 0xd8
    TITypingSession *_typingSession;	// 224 = 0xe0
}

+ (_Bool)isSensorKitSupported:(id)arg1;	// IMP=0x000000000000b2a2
+ (id)makeMetricCollector:(id)arg1 wordsThreshold:(unsigned long long)arg2 isTesting:(_Bool)arg3;	// IMP=0x000000000000b0a3
- (void).cxx_destruct;	// IMP=0x000000000000a5ac
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(retain, nonatomic) TITypingSession *typingSession; // @synthesize typingSession=_typingSession;
@property(retain, nonatomic) NSMutableArray *currentSessionSamplesArray; // @synthesize currentSessionSamplesArray=_currentSessionSamplesArray;
@property(retain, nonatomic) NSMutableArray *savedSessionSamplesArray; // @synthesize savedSessionSamplesArray=_savedSessionSamplesArray;
@property(retain, nonatomic) id <TISensorWriterWrapper> dataWriter; // @synthesize dataWriter=_dataWriter;
@property(nonatomic) unsigned long long wordAccumulationThreshold; // @synthesize wordAccumulationThreshold=_wordAccumulationThreshold;
- (void)removeSamplesWithNegativeDurationForTypingSession:(id)arg1;	// IMP=0x000000000000a41e
- (void)_persistSavedSessionSampleArray;	// IMP=0x000000000000a1e1
- (id)_retrieveSavedSessionSampleArray;	// IMP=0x0000000000009deb
- (void)_loadStatsFromDataStore;	// IMP=0x0000000000009d53
- (void)handleTypingSession:(id)arg1;	// IMP=0x0000000000009915
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;	// IMP=0x0000000000009786
- (void)_reportRipeBuckets;	// IMP=0x000000000000962e
- (void)_mergeStats:(id)arg1;	// IMP=0x000000000000928a
- (double)totalTimeSpanFromLastTap;	// IMP=0x0000000000009085
- (double)totalTimeSpan;	// IMP=0x0000000000008eba
- (id)privateEventsDescription;	// IMP=0x0000000000008cf4
- (id)eventsDescription:(_Bool)arg1;	// IMP=0x0000000000008a1d
- (id)eventsDescription;	// IMP=0x0000000000008a09
- (void)_coalesceTaps;	// IMP=0x00000000000084a5
- (id)_mapIDToLayout:(unsigned long long)arg1;	// IMP=0x0000000000008413
- (id)_insertEmojiSwitchEvents:(id)arg1;	// IMP=0x000000000000797f
- (void)_mapTapsToEvents;	// IMP=0x00000000000072c4
- (void)_metricWalk;	// IMP=0x0000000000006f21
- (id)getWordBucketCategoryForWord:(id)arg1;	// IMP=0x0000000000006d48
- (id)lemmatizeWord:(id)arg1;	// IMP=0x0000000000006cfe
- (void)loadEmojiBucketDictionaryIfNecessary;	// IMP=0x0000000000006cae
- (void)loadWordBucketDictionaryIfNecessary;	// IMP=0x0000000000006c5e
- (void)_haltSessionTypingTimer:(id)arg1 event:(id)arg2;	// IMP=0x0000000000006c33
- (void)_processEvents;	// IMP=0x00000000000065dd
- (void)_consumePathsAndPredictions:(id)arg1 emojiSearchMode:(_Bool)arg2;	// IMP=0x0000000000006049
- (void)_consumeInputsAndTouches:(id)arg1 occurenceTime:(double)arg2 emojiSearchMode:(_Bool)arg3;	// IMP=0x0000000000005ab5
- (void)_consumeDeleteWordEvent:(id)arg1;	// IMP=0x0000000000005954
- (void)_consumeWordEntry:(id)arg1;	// IMP=0x0000000000005815
- (void)_consumeUserAction:(id)arg1;	// IMP=0x0000000000005711
- (id)_consumeTypingSession:(id)arg1;	// IMP=0x0000000000005241
- (void)setupSessionSamplesForLayouts;	// IMP=0x0000000000004cc1
- (id)_findSessionWithLayoutOfSameDimentions:(id)arg1 layout:(id)arg2;	// IMP=0x0000000000004a66
- (void)_clear;	// IMP=0x00000000000049f0
- (void)_resetConsumeState;	// IMP=0x0000000000004909
- (id)consumeTypingSession:(id)arg1;	// IMP=0x00000000000048f7
- (void)_setupTCCAuthNotification;	// IMP=0x0000000000004746
- (void)testTCCAuthorization;	// IMP=0x00000000000044d5
- (void)dealloc;	// IMP=0x0000000000004494
- (id)loadDataWithFilename:(id)arg1;	// IMP=0x00000000000043c7
- (id)init:(id)arg1 wordsThreshold:(unsigned long long)arg2 accentedLanguage:(_Bool)arg3 skipTCCAuthorization:(_Bool)arg4;	// IMP=0x0000000000004028
- (id)init:(id)arg1 wordsThreshold:(unsigned long long)arg2 accentedLanguage:(_Bool)arg3;	// IMP=0x0000000000004013
- (id)init:(id)arg1 wordsThreshold:(unsigned long long)arg2;	// IMP=0x0000000000003ffb
- (id)init:(id)arg1;	// IMP=0x0000000000003fe1
- (void)placeTaskOnWorkQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b3fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

