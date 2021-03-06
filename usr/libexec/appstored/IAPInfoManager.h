//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IAPInfoDatabaseStore, NSString;
@protocol IAPInfoBagContract, OS_dispatch_queue;

@interface IAPInfoManager : NSObject
{
    id <IAPInfoBagContract> _bagContract;	// 8 = 0x8
    IAPInfoDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    _Bool _currentlyUpdating;	// 32 = 0x20
}

+ (double)_updatePollingFrequencyInterval;	// IMP=0x00200000001d2487
+ (double)_forcedRefreshInterval;	// IMP=0x00100000001d2271
+ (id)sharedInstance;	// IMP=0x00100000001cfab1
- (void).cxx_destruct;	// IMP=0x00200000001d4b07
- (_Bool)_updateDatabaseWithRequestResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d46ab
- (void)_sendUpdateRequestWithAccount:(id)arg1 token:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d3e5b
- (void)_sendItemsRequestWithAccount:(id)arg1 token:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d3896
- (void)_refreshIAPsForActiveAccountIfAllowedWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d3203
- (void)_forceRefreshIAPsForActiveAccountWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d2fba
- (void)_handleAccountChangedNotification;	// IMP=0x00100000001d2cac
- (id)_getUpdateRequestContextForAccount:(id)arg1 withToken:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001d2ac5
- (id)_getItemsRequestContextForAccount:(id)arg1 withToken:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001d282c
- (void)_beginObservingAccountChangeNotification;	// IMP=0x00100000001d2695
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00100000001d21ae
- (void)removeAllIAPsWithToken:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d1f02
- (void)refreshIAPsForActiveAccountIfNeededWithToken:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d19b2
- (void)refreshIAPsForActiveAccountWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d18d9
- (void)getIAPsForActiveAccountWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d1234
- (void)getIAPsForActiveAccountWithAppAdamIDs:(id)arg1 token:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d0a9c
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 token:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d0304
- (void)getIAPsForAccountID:(id)arg1 withToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cfcdd
- (id)init;	// IMP=0x00100000001cfb36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

