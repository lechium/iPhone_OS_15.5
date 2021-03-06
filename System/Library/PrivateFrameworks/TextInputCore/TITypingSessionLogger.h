//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>
#import <TextInputCore/TIKeyboardInteractionProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol TIKeyboardInteractionProtocol;

@interface TITypingSessionLogger : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol>
{
    id <TIKeyboardInteractionProtocol> _typingSession;	// 8 = 0x8
    NSMutableArray *_typingEvents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a39b
- (void).cxx_destruct;	// IMP=0x0000000000028199
@property(readonly) NSArray *typingEvents; // @synthesize typingEvents=_typingEvents;
- (id)logDetailsForKeyboardState:(id)arg1;	// IMP=0x0000000000027fef
- (void)sendTo:(id)arg1;	// IMP=0x0000000000027eac
- (_Bool)shouldPrintEvent:(id)arg1;	// IMP=0x0000000000027da2
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000027c04
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000027a55
- (void)contextDidChange:(id)arg1 wordDelete:(_Bool)arg2 cursorMoved:(_Bool)arg3 extendsPriorWord:(_Bool)arg4 inWord:(id)arg5 range:(struct _NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;	// IMP=0x000000000002780a
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(_Bool)arg6 useCandidateSelection:(_Bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;	// IMP=0x00000000000275b5
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;	// IMP=0x00000000000273bc
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000027324
- (void)addTouchEvent:(id)arg1;	// IMP=0x0000000000027292
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;	// IMP=0x00000000000270f4
@property(readonly) unsigned long long eventCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000270bb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026f04
- (id)initWithTypingSession:(id)arg1;	// IMP=0x0000000000026e6f
- (id)typingSession;	// IMP=0x0000000000026e61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

