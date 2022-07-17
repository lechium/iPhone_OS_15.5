//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSString;

@interface CNApplication : UIApplication
{
    _Atomic int _launchTaskCompletionMask;	// 8 = 0x8
    _Atomic _Bool _extendedLaunchFinished;	// 12 = 0xc
}

+ (void)prewarmResourcesForLaunch;	// IMP=0x0020000000008fc9
- (id)_extendLaunchTest;	// IMP=0x0020000000009153
- (void)checkInLaunchTasks:(unsigned long long)arg1;	// IMP=0x00100000000090ca
- (_Bool)areAllLaunchTasksComplete;	// IMP=0x00100000000090b4
- (_Bool)openURL:(id)arg1;	// IMP=0x0010000000008eed
- (id)init;	// IMP=0x0010000000008e5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
