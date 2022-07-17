//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DABabysitter : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_buildVersion;	// 16 = 0x10
    NSMutableDictionary *_l_refreshingWaiters;	// 24 = 0x18
    NSMutableDictionary *_l_failedWaiters;	// 32 = 0x20
    NSMutableDictionary *_l_restrictedWaiters;	// 40 = 0x28
}

+ (id)sharedBabysitter;	// IMP=0x000000000002e47f
- (void).cxx_destruct;	// IMP=0x00000000000310ba
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *l_restrictedWaiters; // @synthesize l_restrictedWaiters=_l_restrictedWaiters;
@property(retain, nonatomic) NSMutableDictionary *l_failedWaiters; // @synthesize l_failedWaiters=_l_failedWaiters;
@property(retain, nonatomic) NSMutableDictionary *l_refreshingWaiters; // @synthesize l_refreshingWaiters=_l_refreshingWaiters;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (id)_populatedStringDictionaryWithWaitersDictionary:(id)arg1;	// IMP=0x0000000000030d96
- (void)statusReportWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030c62
- (void)_diagnosticReportWithWaiterID:(id)arg1 failureCount:(int)arg2;	// IMP=0x0000000000030c5c
- (void)giveAccountWithIDAnotherChance:(id)arg1;	// IMP=0x0000000000030c09
- (void)_l_giveAccountWithIDAnotherChance:(id)arg1;	// IMP=0x0000000000030b40
- (_Bool)accountShouldContinue:(id)arg1;	// IMP=0x0000000000030ac0
- (_Bool)accountWithIDShouldContinue:(id)arg1;	// IMP=0x0000000000030876
- (void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2;	// IMP=0x0000000000030728
- (id)tokenByRegisteringAccount:(id)arg1 forOperationWithName:(id)arg2;	// IMP=0x000000000003060c
- (_Bool)registerAccount:(id)arg1 forOperationWithName:(id)arg2;	// IMP=0x0000000000030564
- (void)_l_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;	// IMP=0x0000000000030239
- (void)_l_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2;	// IMP=0x0000000000030039
- (void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;	// IMP=0x000000000002ff66
- (void)_l_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;	// IMP=0x000000000002fd8d
- (void)dealloc;	// IMP=0x000000000002fd43
- (id)init;	// IMP=0x000000000002fcbc
- (id)_init;	// IMP=0x000000000002fc2d
- (void)_reloadBabysitterProperties;	// IMP=0x000000000002f967
- (void)_l_reloadBabysitterWaitersWithRefreshingWaitersPrefs:(id)arg1 failedWaitersPrefs:(id)arg2 restrictedWaitersPrefs:(id)arg3;	// IMP=0x000000000002e4e4

@end
