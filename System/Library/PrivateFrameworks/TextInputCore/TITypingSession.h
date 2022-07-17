//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>
#import <TextInputCore/TIKeyboardInteractionProtocol-Protocol.h>

@class NSDate, NSLocale, NSMutableArray, NSMutableDictionary, NSString, TIFeatureUsageMetricsCache, TIKeyboardInput, TIKeyboardState, TIKeyboardTouchEvent, TITypingSessionParams, TIWordEntry;

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol>
{
    _Bool _didReceiveSecureFieldEvent;	// 8 = 0x8
    _Bool _includeInputToLastWord;	// 9 = 0x9
    int _candidatesAccepted;	// 12 = 0xc
    int _candidatesAcceptedWithText;	// 16 = 0x10
    NSString *_layoutName;	// 24 = 0x18
    NSString *_startContext;	// 32 = 0x20
    NSMutableArray *_layouts;	// 40 = 0x28
    NSLocale *_locale;	// 48 = 0x30
    NSDate *_startTime;	// 56 = 0x38
    NSDate *_endTime;	// 64 = 0x40
    NSString *_applicationID;	// 72 = 0x48
    TITypingSessionParams *_sessionParams;	// 80 = 0x50
    TIFeatureUsageMetricsCache *_featureUsageMetricsCache;	// 88 = 0x58
    NSMutableArray *_userActionHistory;	// 96 = 0x60
    TIWordEntry *_currentWord;	// 104 = 0x68
    TIKeyboardInput *_lastInput;	// 112 = 0x70
    TIKeyboardState *_savedDeleteInputKeyboardState;	// 120 = 0x78
    unsigned long long _currentLayoutID;	// 128 = 0x80
    TIWordEntry *_lastWord;	// 136 = 0x88
    TIKeyboardTouchEvent *_timeCalibrationTouch;	// 144 = 0x90
    double _calibratedTimeBase;	// 152 = 0x98
    NSMutableDictionary *_touchesHistory;	// 160 = 0xa0
    long long _lastActivePathIndex;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c31a5
- (void).cxx_destruct;	// IMP=0x00000000001c3088
@property(nonatomic) long long lastActivePathIndex; // @synthesize lastActivePathIndex=_lastActivePathIndex;
@property(retain, nonatomic) NSMutableDictionary *touchesHistory; // @synthesize touchesHistory=_touchesHistory;
@property double calibratedTimeBase; // @synthesize calibratedTimeBase=_calibratedTimeBase;
@property(retain) TIKeyboardTouchEvent *timeCalibrationTouch; // @synthesize timeCalibrationTouch=_timeCalibrationTouch;
@property(nonatomic) _Bool includeInputToLastWord; // @synthesize includeInputToLastWord=_includeInputToLastWord;
@property(retain, nonatomic) TIWordEntry *lastWord; // @synthesize lastWord=_lastWord;
@property(nonatomic) unsigned long long currentLayoutID; // @synthesize currentLayoutID=_currentLayoutID;
@property(retain, nonatomic) TIKeyboardState *savedDeleteInputKeyboardState; // @synthesize savedDeleteInputKeyboardState=_savedDeleteInputKeyboardState;
@property(retain, nonatomic) TIKeyboardInput *lastInput; // @synthesize lastInput=_lastInput;
@property(retain, nonatomic) TIWordEntry *currentWord; // @synthesize currentWord=_currentWord;
@property(retain, nonatomic) NSMutableArray *userActionHistory; // @synthesize userActionHistory=_userActionHistory;
@property(nonatomic) int candidatesAcceptedWithText; // @synthesize candidatesAcceptedWithText=_candidatesAcceptedWithText;
@property(nonatomic) int candidatesAccepted; // @synthesize candidatesAccepted=_candidatesAccepted;
@property(retain, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache; // @synthesize featureUsageMetricsCache=_featureUsageMetricsCache;
@property(retain, nonatomic) TITypingSessionParams *sessionParams; // @synthesize sessionParams=_sessionParams;
@property(nonatomic) _Bool didReceiveSecureFieldEvent; // @synthesize didReceiveSecureFieldEvent=_didReceiveSecureFieldEvent;
@property(copy, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(copy, nonatomic) NSString *startContext; // @synthesize startContext=_startContext;
@property(copy, nonatomic) NSString *layoutName; // @synthesize layoutName=_layoutName;
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;	// IMP=0x00000000001c2dbb
- (void)contextDidChange:(id)arg1 wordDelete:(_Bool)arg2 cursorMoved:(_Bool)arg3 extendsPriorWord:(_Bool)arg4 inWord:(id)arg5 range:(struct _NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;	// IMP=0x00000000001c28bd
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(_Bool)arg6 useCandidateSelection:(_Bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;	// IMP=0x00000000001c0e33
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;	// IMP=0x00000000001c0d3a
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;	// IMP=0x00000000001c0b50
- (void)addTouchEvent:(id)arg1;	// IMP=0x00000000001c04a5
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;	// IMP=0x00000000001c03ba
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;	// IMP=0x00000000001c0232
- (_Bool)testForRapidDeleteContextChange:(id)arg1;	// IMP=0x00000000001bfe65
- (_Bool)isCurrentWordEmpty;	// IMP=0x00000000001bfe1c
- (double)calibratedCurrentTimestamp;	// IMP=0x00000000001bfca8
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001bfb1c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001bf7be
- (id)initWithLocale:(id)arg1 keyboardLayout:(id)arg2;	// IMP=0x00000000001bf635
- (id)init;	// IMP=0x00000000001bf5d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
