//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface NetworkActivityIndicator : NSObject
{
    NSMutableSet *_networkMonitors;	// 8 = 0x8
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _activityLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ca8d6
- (void)_hideStatusBarProgress;	// IMP=0x00100000000ca8b6
- (void)setStatusBarShowsMailProgress:(id)arg1;	// IMP=0x00100000000ca75c
- (void)setStatusBarShowsProgress:(_Bool)arg1;	// IMP=0x00100000000ca72f
- (void)networkActivityEnded:(id)arg1;	// IMP=0x00100000000ca617
- (void)networkActivityStarted:(id)arg1;	// IMP=0x00100000000ca4dc
- (void)dealloc;	// IMP=0x00100000000ca470
- (id)init;	// IMP=0x00100000000ca408

@end

