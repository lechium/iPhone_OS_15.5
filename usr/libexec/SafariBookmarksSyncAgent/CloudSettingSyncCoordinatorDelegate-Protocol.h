//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CKRecord, CKRecordID, CloudSettingSyncCoordinator;

@protocol CloudSettingSyncCoordinatorDelegate <NSObject>
- (void)performInitialSyncDown;
- (void)cloudSettingSyncCoordinator:(CloudSettingSyncCoordinator *)arg1 didDeleteRemoteRecordWithID:(CKRecordID *)arg2;
- (void)cloudSettingSyncCoordinator:(CloudSettingSyncCoordinator *)arg1 storeRemoteCloudSettingsUpdateWithRecord:(CKRecord *)arg2;
- (void)cloudSettingSyncCoordinator:(CloudSettingSyncCoordinator *)arg1 didReceiveRemoteCloudSettingsUpdateWithRecord:(CKRecord *)arg2;

@optional
- (void)pcsIdentitiesDidChangeForCloudSettingSyncCoordinator:(CloudSettingSyncCoordinator *)arg1;
@end
