//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class CADisplayLink, NSOperation, NSString, UITextRange;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView <_UIBasicAnimationFactory>
{
    UITextRange *_range;	// 8 = 0x8
    id _placeholder;	// 16 = 0x10
    _Bool _didHaveText;	// 24 = 0x18
    _Bool _willInsertResult;	// 25 = 0x19
    double _angle;	// 32 = 0x20
    double _diameter;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _shrinkStartTime;	// 64 = 0x40
    _Bool _shrinking;	// 72 = 0x48
    NSOperation *_afterShrinkCompletionInvocation;	// 80 = 0x50
    id <UITextCursorAssertion> _blinkAssertion;	// 88 = 0x58
}

+ (long long)fallbackPlaceholderLength;	// IMP=0x0000000000a05d7c
+ (id)activeInstance;	// IMP=0x0000000000a05d6f
+ (id)sharedInstance;	// IMP=0x0000000000a05d0f
+ (double)widthForLineHeight:(double)arg1;	// IMP=0x0000000000a05caf
+ (double)diameterForLineHeight:(double)arg1;	// IMP=0x0000000000a05c91
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(nonatomic) _Bool willInsertResult; // @synthesize willInsertResult=_willInsertResult;
- (id)_timingFunctionForAnimation;	// IMP=0x0000000000a078f2
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000a078d6
- (double)fadeOutDuration;	// IMP=0x0000000000a078a4
- (void)stopLandingForError;	// IMP=0x0000000000a075c5
- (void)errorShakeDidFinish;	// IMP=0x0000000000a07514
- (_Bool)hasActivePlaceholder;	// IMP=0x0000000000a074ff
- (void)stopLanding;	// IMP=0x0000000000a072bf
- (void)startLandingIfNecessary;	// IMP=0x0000000000a06e48
- (void)startDisplayLinkIfNecessary;	// IMP=0x0000000000a06bfa
- (void)showCursor;	// IMP=0x0000000000a06b42
- (void)hideCursor;	// IMP=0x0000000000a06a99
- (_Bool)delegateWasEmpty;	// IMP=0x0000000000a06a73
- (void)updatePosition;	// IMP=0x0000000000a0685b
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000a062e9
- (void)advanceLanding:(id)arg1;	// IMP=0x0000000000a0604e
- (void)shrinkWithCompletion:(id)arg1;	// IMP=0x0000000000a05f4d
- (void)rotateBy:(double)arg1;	// IMP=0x0000000000a05ee5
- (void)clearRotation;	// IMP=0x0000000000a05e87
- (void)dealloc;	// IMP=0x0000000000a05e49
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a05d95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

