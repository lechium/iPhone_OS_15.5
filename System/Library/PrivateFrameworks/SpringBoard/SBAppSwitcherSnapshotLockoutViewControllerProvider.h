//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject
{
    NSMutableArray *_availableControllers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000067a899
- (void)_receivedMemoryWarning:(id)arg1;	// IMP=0x00000000000d4bfb
- (void)recycleBlockingViewController:(id)arg1;	// IMP=0x000000000067a883
- (id)blockingViewControllerForBundleIdentifier:(id)arg1 screenTimePolicy:(long long)arg2;	// IMP=0x000000000067a7a9
- (void)dealloc;	// IMP=0x000000000067a727
- (id)init;	// IMP=0x000000000067a674

@end

