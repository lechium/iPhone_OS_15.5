//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SBDeviceApplicationSceneStatusBarStateObserver;

@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject
{
    struct SBDeviceApplicationSceneStatusBarStateObserverFlags _flags;	// 8 = 0x8
    id <SBDeviceApplicationSceneStatusBarStateObserver> _observer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000671978
@property(readonly, nonatomic) struct SBDeviceApplicationSceneStatusBarStateObserverFlags flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) __weak id <SBDeviceApplicationSceneStatusBarStateObserver> observer; // @synthesize observer=_observer;
- (id)initWithObserver:(id)arg1 andFlags:(struct SBDeviceApplicationSceneStatusBarStateObserverFlags)arg2;	// IMP=0x00000000006718ea

@end

