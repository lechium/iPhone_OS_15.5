//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary;

@interface CSDVoIPApplicationMonitor : NSObject
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    NSMutableDictionary *_bundleIdentifierToApplicationState;	// 16 = 0x10
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000014192b
@property(readonly, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(readonly, nonatomic) NSMutableDictionary *bundleIdentifierToApplicationState; // @synthesize bundleIdentifierToApplicationState=_bundleIdentifierToApplicationState;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
- (id)fetchApplicationStateForBundleIdentifier:(id)arg1;	// IMP=0x00100000001417c0
- (void)setApplicationState:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000141685
- (id)applicationStateForBundleIdentifier:(id)arg1;	// IMP=0x00100000001415bc
- (void)removeVoIPApplication:(id)arg1;	// IMP=0x0010000000141373
- (void)addVoIPApplication:(id)arg1;	// IMP=0x0010000000141115
- (_Bool)isRunningForegroundForVoIPApplication:(id)arg1;	// IMP=0x0010000000140fe9
- (void)dealloc;	// IMP=0x0010000000140fa7
- (id)init;	// IMP=0x0010000000140cdc

@end
