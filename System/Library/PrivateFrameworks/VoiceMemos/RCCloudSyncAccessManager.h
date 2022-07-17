//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/ACMonitoredAccountStoreDelegateProtocol-Protocol.h>
#import <VoiceMemos/RCManagedConfigurationHelperDelegate-Protocol.h>

@class ACMonitoredAccountStore, NSString, RCManagedConfigurationHelper;
@protocol RCCloudSyncAccessManagerDelegate;

@interface RCCloudSyncAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate>
{
    ACMonitoredAccountStore *_accountStore;	// 8 = 0x8
    _Bool _monitoringAccountChanges;	// 16 = 0x10
    RCManagedConfigurationHelper *_managedConfigurationHelper;	// 24 = 0x18
    int _tccNotifyToken;	// 32 = 0x20
    id <RCCloudSyncAccessManagerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003fad5
@property(nonatomic) __weak id <RCCloudSyncAccessManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_availabilityChanged;	// IMP=0x000000000003f9f8
- (void)managedConfigurationUpdated:(_Bool)arg1;	// IMP=0x000000000003f9e6
- (void)accountWasRemoved:(id)arg1;	// IMP=0x000000000003f9d4
- (void)accountWasAdded:(id)arg1;	// IMP=0x000000000003f9c2
@property(nonatomic) int tccCloudAccess;
@property(readonly, nonatomic) _Bool cloudSyncIsAvailable;
- (void)dealloc;	// IMP=0x000000000003f729
- (void)startMonitoringAccountChanges;	// IMP=0x000000000003f52d
@property(readonly) ACMonitoredAccountStore *accountStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
