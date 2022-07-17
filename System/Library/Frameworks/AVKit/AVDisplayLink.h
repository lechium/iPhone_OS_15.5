//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface AVDisplayLink : NSObject
{
    CDUnknownBlockType _linkFired;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    id _observer;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ddb5a
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType linkFired; // @synthesize linkFired=_linkFired;
@property(readonly, nonatomic) double runningTime;
- (void)linkFired:(id)arg1;	// IMP=0x00000000000dd9cf
- (void)invalidate;	// IMP=0x00000000000dd966
- (void)startDisplayLinkUpdatesForObserver:(id)arg1 framesPerSecond:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dd7fe

@end
