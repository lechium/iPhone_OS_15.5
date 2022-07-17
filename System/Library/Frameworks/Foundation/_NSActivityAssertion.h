//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject, OS_os_transaction, OS_voucher;

__attribute__((visibility("hidden")))
@interface _NSActivityAssertion : NSObject
{
    unsigned long long _options;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    unsigned int _systemSleepAssertionID;	// 32 = 0x20
    NSObject<OS_voucher> *_voucher;	// 40 = 0x28
    NSObject<OS_voucher> *_previousVoucher;	// 48 = 0x30
    id <NSObject> _xpcBoost;	// 56 = 0x38
    id _processAssertion;	// 64 = 0x40
    CDUnknownBlockType _expirationHandler;	// 72 = 0x48
    struct os_unfair_lock_s _lock;	// 80 = 0x50
    _Atomic _Bool _ended;	// 84 = 0x54
    unsigned char _adoptPreviousVoucher;	// 85 = 0x55
}

+ (void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b9eab
+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b9d26
+ (void)_expireAllActivies;	// IMP=0x00000000000b8f68
+ (void)_dumpExpiringActivitives;	// IMP=0x00000000000b8df9
+ (id)_expiringActivities;	// IMP=0x00000000000b8da0
+ (id)_expirationHandlerExecutionQueue;	// IMP=0x00000000000b8d54
+ (id)_expiringTaskExecutionQueue;	// IMP=0x00000000000b8d08
+ (id)_expiringAssertionManagementQueue;	// IMP=0x00000000000b8cc1
- (void)_fireExpirationHandler;	// IMP=0x00000000000b9b0e
- (void)_reactivate;	// IMP=0x00000000000b9ada
- (void)_end;	// IMP=0x00000000000b98cc
- (id)debugDescription;	// IMP=0x00000000000b9841
- (void)dealloc;	// IMP=0x00000000000b97cc
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b92bf

@end
