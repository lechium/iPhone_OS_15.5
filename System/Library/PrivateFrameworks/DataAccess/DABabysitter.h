//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DABabysitter : NSObject
{
    NSString *_buildVersion;	// 8 = 0x8
    NSMutableDictionary *_refreshingWaiters;	// 16 = 0x10
    NSMutableDictionary *_failedWaiters;	// 24 = 0x18
    NSMutableDictionary *_restrictedWaiters;	// 32 = 0x20
}

+ (id)sharedBabysitter;	// IMP=0x0000000000044df9
- (void).cxx_destruct;	// IMP=0x0000000000047065
@property(retain, nonatomic) NSMutableDictionary *restrictedWaiters; // @synthesize restrictedWaiters=_restrictedWaiters;
@property(retain, nonatomic) NSMutableDictionary *failedWaiters; // @synthesize failedWaiters=_failedWaiters;
@property(retain, nonatomic) NSMutableDictionary *refreshingWaiters; // @synthesize refreshingWaiters=_refreshingWaiters;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (void)giveAccountWithIDAnotherChance:(id)arg1;	// IMP=0x0000000000046ee4
- (_Bool)accountShouldContinue:(id)arg1;	// IMP=0x0000000000046e5b
- (_Bool)accountWithIDShouldContinue:(id)arg1;	// IMP=0x0000000000046c1d
- (void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2;	// IMP=0x0000000000046b73
- (_Bool)registerAccount:(id)arg1 forOperationWithName:(id)arg2;	// IMP=0x0000000000046abe
- (void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;	// IMP=0x000000000004675a
- (void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2;	// IMP=0x000000000004655a
- (void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;	// IMP=0x0000000000046338
- (void)dealloc;	// IMP=0x00000000000462ee
- (id)init;	// IMP=0x0000000000046267
- (id)_init;	// IMP=0x00000000000461df
- (void)_reloadBabysitterProperties;	// IMP=0x0000000000044e5e

@end

