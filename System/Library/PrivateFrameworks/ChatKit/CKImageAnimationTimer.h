//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSDate, NSMutableSet;

@interface CKImageAnimationTimer : NSObject
{
    unsigned long long _frame;	// 8 = 0x8
    _Bool _shouldStopWhenBackgrounded;	// 16 = 0x10
    NSMutableSet *_observers;	// 24 = 0x18
    CADisplayLink *_displayLink;	// 32 = 0x20
    NSDate *_startTime;	// 40 = 0x28
}

+ (id)sharedTimer;	// IMP=0x0000000000420860
- (void).cxx_destruct;	// IMP=0x0000000000420f77
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool shouldStopWhenBackgrounded; // @synthesize shouldStopWhenBackgrounded=_shouldStopWhenBackgrounded;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
- (void)updateDisplayLink;	// IMP=0x0000000000420c33
- (void)animationTimerFired;	// IMP=0x0000000000420a1c
- (void)removeAnimationTimerObserver:(id)arg1;	// IMP=0x000000000042099d
- (void)addAnimationTimerObserver:(id)arg1;	// IMP=0x00000000004208bf
- (unsigned long long)frame;	// IMP=0x00000000004208b5
- (id)init;	// IMP=0x000000000042073d
- (void)dealloc;	// IMP=0x00000000004206ba
- (_Bool)__im_ff_psEnabled;	// IMP=0x000000000042066f

@end
