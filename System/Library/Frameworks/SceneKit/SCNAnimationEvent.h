//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SCNAnimationEvent : NSObject
{
    double _eventTime;	// 8 = 0x8
    CDUnknownBlockType _eventBlock;	// 16 = 0x10
}

+ (id)animationEventWithKeyTime:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a80f7
- (void)setEventBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a80cb
- (CDUnknownBlockType)eventBlock;	// IMP=0x00000000001a80c1
- (void)setTime:(double)arg1;	// IMP=0x00000000001a80b6
- (double)time;	// IMP=0x00000000001a80ab
- (void)dealloc;	// IMP=0x00000000001a806c
- (id)init;	// IMP=0x00000000001a803d

@end
