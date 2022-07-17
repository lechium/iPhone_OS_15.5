//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;
@protocol TRINotificationToken;

@interface PPBundleIdAllowancePolicy : NSObject
{
    _PASLock *_allowancePolicyLock;	// 8 = 0x8
    id <TRINotificationToken> _trialToken;	// 16 = 0x10
}

+ (id)defaultPolicy;	// IMP=0x0000000000014eeb
- (void).cxx_destruct;	// IMP=0x0000000000014c76
- (_Bool)bundleIdentifierIsAllowed:(id)arg1 blocklist:(id)arg2 allowlist:(id)arg3;	// IMP=0x0000000000014b73
- (_Bool)bundleIdentifierIsAllowedForSearchableItems:(id)arg1;	// IMP=0x0000000000014a1c
- (_Bool)bundleIdentifierIsAllowedForNotifications:(id)arg1;	// IMP=0x00000000000148c5
- (void)_resetGuardedData;	// IMP=0x00000000000148a8
- (void)_setGuardedDataWithNotificationBlocklist:(id)arg1 notificationAllowlist:(id)arg2 searchableItemBlocklist:(id)arg3 searchableItemAllowlist:(id)arg4;	// IMP=0x0000000000014792
- (id)_readAssetData:(id)arg1;	// IMP=0x0000000000014118
- (void)_loadAssetData;	// IMP=0x0000000000014017
- (id)initWithNotificationBlocklist:(id)arg1 notificationAllowlist:(id)arg2 searchableItemBlocklist:(id)arg3 searchableItemAllowlist:(id)arg4;	// IMP=0x0000000000013f0d
- (void)dealloc;	// IMP=0x0000000000013e97
- (id)init_;	// IMP=0x0000000000013d1e

@end
