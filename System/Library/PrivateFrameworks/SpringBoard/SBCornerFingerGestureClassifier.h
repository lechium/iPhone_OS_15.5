//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBCornerFingerPanGestureSettings;

@interface SBCornerFingerGestureClassifier : NSObject
{
    SBCornerFingerPanGestureSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000382384
- (_Bool)classifySwipeWithOffsettedAngle:(double)arg1 distanceToCorner:(double)arg2 portrait:(_Bool)arg3;	// IMP=0x0000000000382090
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000382025

@end

