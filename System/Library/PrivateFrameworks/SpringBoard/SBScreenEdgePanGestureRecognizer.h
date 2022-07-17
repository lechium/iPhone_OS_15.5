//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScreenEdgePanGestureRecognizer.h>

@protocol SBSystemGestureRecognizerDelegate;

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer
{
    double _grabberActiveZoneWidth;	// 8 = 0x8
}

@property(nonatomic) double grabberActiveZoneWidth; // @synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth;
- (_Bool)isLocationWithinGrabberActiveZone;	// IMP=0x0000000000618697
- (long long)_touchInterfaceOrientation;	// IMP=0x000000000005229a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000061861c
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000007ee7e
- (void)sb_commonInitScreenEdgePanGestureRecognizer;	// IMP=0x000000000007eeca

// Remaining properties
@property(nonatomic) __weak id <SBSystemGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end
