//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SBFullScreenSwitcherSceneLiveContentOverlay;

@interface SBFullScreenLiveContentOverlayContext : NSObject
{
    long long _overlayType;	// 8 = 0x8
    id <SBFullScreenSwitcherSceneLiveContentOverlay> _overlay;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000279e86
@property(readonly, nonatomic) id <SBFullScreenSwitcherSceneLiveContentOverlay> overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
- (id)initWithOverlay:(id)arg1;	// IMP=0x0000000000279df3

@end
