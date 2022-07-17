//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CRMailAccountAnalyzer, MISSING_TYPE, NSString, NSUserDefaults;
@protocol CNCancelable, CRAccountAdaptorDelegate;

@interface CRAccountAdaptor : NSObject
{
    CRMailAccountAnalyzer *_analyzer;	// 8 = 0x8
    id <CNCancelable> _mailAccountListener;	// 16 = 0x10
    id <CNCancelable> _appleAccountListener;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSUserDefaults *_userDefaults;	// 40 = 0x28
    ACAccountStore *_accountStore;	// 48 = 0x30
    NSString *_iCloudAccountPersonID;	// 56 = 0x38
    _Bool _iCloudAccountWasLoggedIn;	// 64 = 0x40
    id <CRAccountAdaptorDelegate> _delegate;	// 72 = 0x48
}

@property(nonatomic) id <CRAccountAdaptorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)refresh;	// IMP=0x00100000000186c4
- (void)_delegateAccountChanges;	// IMP=0x001000000001850e
- (_Bool)isUsingiCloud;	// IMP=0x00100000000184df
- (id)_primaryiCloudAccountPersonID;	// IMP=0x00100000000184b0
- (void)_resetCachedAccountInfo;	// IMP=0x001000000001843a
- (id)_analyzeMailAccounts;	// IMP=0x0010000000018384
- (void)_runWithAnalyzerLock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000182ff
- (id)senderEmailAddresses;	// IMP=0x001000000001824a
- (_Bool)isSyncingDisabledForAccountWithAddress:(id)arg1;	// IMP=0x001000000001816c
- (void)dealloc;	// IMP=0x00100000000180dc
- (id)initWithUserDefaults:(id)arg1 accountStore:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000017e3f
- (MISSING_TYPE *)initWithDelegate: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000017ddf
- (id)init;	// IMP=0x0010000000017d7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
