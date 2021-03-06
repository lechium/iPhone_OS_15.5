//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, UIPanGestureRecognizer;
@protocol DragGestureTracking;

__attribute__((visibility("hidden")))
@interface MapGestureCardDismissalPanMediator : NSObject
{
    UIPanGestureRecognizer *_gesture;	// 8 = 0x8
    id <DragGestureTracking> _tracker;	// 16 = 0x10
    CADisplayLink *_displayLink;	// 24 = 0x18
    double _translation;	// 32 = 0x20
    double _previousVelocity;	// 40 = 0x28
    double _peakVelocity;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000006adb9d
- (void)handleDisplayLink:(id)arg1;	// IMP=0x00100000006ad8ec
- (void)invalidate;	// IMP=0x00100000006ad897
- (void)dealloc;	// IMP=0x00100000006ad859
- (id)initWithPanGesture:(id)arg1 dragTracker:(id)arg2;	// IMP=0x00100000006ad6e8

@end

