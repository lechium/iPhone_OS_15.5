//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UITapTapHoldGestureRecognizer
{
    _Bool _isWaitingForHoldToAction;	// 8 = 0x8
    _Bool _isInHoldToAction;	// 9 = 0x9
    _Bool _isWaitingForTooSlowForDoubleTap;	// 10 = 0xa
    int _currentNumberOfPresses;	// 12 = 0xc
    long long _gestureType;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    double _pressEventBeginTimestamp;	// 32 = 0x20
}

@property(nonatomic) _Bool isWaitingForTooSlowForDoubleTap; // @synthesize isWaitingForTooSlowForDoubleTap=_isWaitingForTooSlowForDoubleTap;
@property(nonatomic) _Bool isInHoldToAction; // @synthesize isInHoldToAction=_isInHoldToAction;
@property(nonatomic) _Bool isWaitingForHoldToAction; // @synthesize isWaitingForHoldToAction=_isWaitingForHoldToAction;
@property(nonatomic) double pressEventBeginTimestamp; // @synthesize pressEventBeginTimestamp=_pressEventBeginTimestamp;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int currentNumberOfPresses; // @synthesize currentNumberOfPresses=_currentNumberOfPresses;
@property(nonatomic) long long gestureType; // @synthesize gestureType=_gestureType;
- (_Bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009ec651
- (void)cancelPendingHoldToAction;	// IMP=0x00000000009ec60e
- (void)scheduleHoldToAction;	// IMP=0x00000000009ec5d5
- (void)holdToAction:(id)arg1;	// IMP=0x00000000009ec550
- (void)cancelPendingTooSlowForDoubleTap;	// IMP=0x00000000009ec50d
- (void)scheduleTooSlowForDoubleTap;	// IMP=0x00000000009ec4df
- (void)tooSlowForDoubleTap:(id)arg1;	// IMP=0x00000000009ec49c
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009ec38e
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009ec2ec
- (void)reset;	// IMP=0x00000000009ec25a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000009ec22b

@end

