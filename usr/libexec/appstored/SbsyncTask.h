//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSURLSession, NSNumber, NSString;

@interface SbsyncTask
{
    _Bool _displayingDialog;	// 8 = 0x8
    long long _syncType;	// 16 = 0x10
    long long _initialSubscriptionStatus;	// 24 = 0x18
    _Bool _userInitiated;	// 32 = 0x20
    ACAccount *_account;	// 40 = 0x28
    NSString *_logUUID;	// 48 = 0x30
    double _timeout;	// 56 = 0x38
    long long _subscriptionStatus;	// 64 = 0x40
    NSNumber *_subscriptionDuration;	// 72 = 0x48
    double _startTime;	// 80 = 0x50
    AMSURLSession *_urlSession;	// 88 = 0x58
}

+ (id)_subscriptionStatusReturningError:(id *)arg1;	// IMP=0x002000000010899c
+ (long long)_subscriptionStatusForAccountID:(id)arg1 dictionary:(id)arg2 returningError:(id *)arg3;	// IMP=0x0010000000108994
+ (_Bool)_importSubscriptionKeyBagData:(id)arg1 accountID:(id)arg2 logKey:(id)arg3 subscriptionStatus:(long long *)arg4 returningError:(id *)arg5;	// IMP=0x001000000010861c
+ (id)sbsyncDataForAccountID:(id)arg1 sbsyncType:(long long)arg2 logKey:(id)arg3 returningError:(id *)arg4;	// IMP=0x0010000000108251
+ (id)sbsyncDataForAccountID:(id)arg1 sbsyncType:(long long)arg2 returningError:(id *)arg3;	// IMP=0x001000000010822e
+ (long long)subscriptionStatusForAccountID:(id)arg1 returningError:(id *)arg2;	// IMP=0x00100000001081a7
+ (_Bool)importSubscriptionKeyBagData:(id)arg1 subscriptionStatus:(long long *)arg2 returningError:(id *)arg3;	// IMP=0x00100000001080ca
- (void).cxx_destruct;	// IMP=0x0020000000108ade
@property(retain, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(copy, nonatomic) NSNumber *subscriptionDuration; // @synthesize subscriptionDuration=_subscriptionDuration;
@property(readonly, nonatomic) long long subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_requestURL:(id *)arg1;	// IMP=0x00100000001088e7
- (id)_newBaseRequestBodyDictionaryWithError:(id *)arg1;	// IMP=0x0010000000108714
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001082b0
- (void)main;	// IMP=0x0010000000106ffd
- (id)initWithSyncType:(long long)arg1;	// IMP=0x0010000000106e95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

