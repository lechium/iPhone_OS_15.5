//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, PCSLockAssertion, PCSMTT;
@protocol OS_os_transaction;

@interface PCSCKKSItemModifyContext : NSObject
{
    struct __CFDictionary *_rollAttributes;	// 8 = 0x8
    _Bool _sync;	// 16 = 0x10
    _Bool _roll;	// 17 = 0x11
    _Bool _returnedExistingIdentity;	// 18 = 0x12
    int _retryLeftCount;	// 20 = 0x14
    struct _PCSIdentitySetData *_set;	// 24 = 0x18
    struct __PCSLogContext *_log;	// 32 = 0x20
    long long _timeoutValue;	// 40 = 0x28
    NSString *_dsid;	// 48 = 0x30
    NSString *_service;	// 56 = 0x38
    struct _PCSIdentityData *_currentIdentity;	// 64 = 0x40
    NSData *_currentItemReference;	// 72 = 0x48
    NSData *_existingItemReference;	// 80 = 0x50
    NSData *_existingItemSHA1;	// 88 = 0x58
    struct _PCSIdentityData *_rollIdentity;	// 96 = 0x60
    NSData *_rollItemReference;	// 104 = 0x68
    NSData *_rollItemSHA1;	// 112 = 0x70
    NSDate *_server_NextRollDate;	// 120 = 0x78
    PCSMTT *_mtt;	// 128 = 0x80
    NSObject<OS_os_transaction> *_transaction;	// 136 = 0x88
    PCSLockAssertion *_lockAssertion;	// 144 = 0x90
    id _activityAssertion;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000003627e
@property(retain) id activityAssertion; // @synthesize activityAssertion=_activityAssertion;
@property(retain) PCSLockAssertion *lockAssertion; // @synthesize lockAssertion=_lockAssertion;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool returnedExistingIdentity; // @synthesize returnedExistingIdentity=_returnedExistingIdentity;
@property(readonly) PCSMTT *mtt; // @synthesize mtt=_mtt;
@property int retryLeftCount; // @synthesize retryLeftCount=_retryLeftCount;
@property _Bool roll; // @synthesize roll=_roll;
@property _Bool sync; // @synthesize sync=_sync;
@property(retain) NSDate *server_NextRollDate; // @synthesize server_NextRollDate=_server_NextRollDate;
@property(retain) NSData *rollItemSHA1; // @synthesize rollItemSHA1=_rollItemSHA1;
@property(retain) NSData *rollItemReference; // @synthesize rollItemReference=_rollItemReference;
@property struct _PCSIdentityData *rollIdentity; // @synthesize rollIdentity=_rollIdentity;
@property(retain) NSData *existingItemSHA1; // @synthesize existingItemSHA1=_existingItemSHA1;
@property(retain) NSData *existingItemReference; // @synthesize existingItemReference=_existingItemReference;
@property(retain) NSData *currentItemReference; // @synthesize currentItemReference=_currentItemReference;
@property struct _PCSIdentityData *currentIdentity; // @synthesize currentIdentity=_currentIdentity;
@property(retain) NSString *service; // @synthesize service=_service;
@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property long long timeoutValue; // @synthesize timeoutValue=_timeoutValue;
@property struct __PCSLogContext *log; // @synthesize log=_log;
@property struct _PCSIdentitySetData *set; // @synthesize set=_set;
- (void)dealloc;	// IMP=0x0000000000035fdd
- (void)resetIdentities;	// IMP=0x0000000000035f57
- (id)init;	// IMP=0x0000000000035ed2

@end

