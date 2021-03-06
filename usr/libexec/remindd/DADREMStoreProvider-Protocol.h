//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSString, OS_dispatch_queue, REMSaveRequest, REMStore;
@protocol REMDAAccountPropertiesObserving;

@protocol DADREMStoreProvider
- (NSString *)rd_base64EncodedHMACStringFromString:(NSString *)arg1 usingPersonIDSalt:(NSData *)arg2;
- (_Bool)rd_isPersonIDSaltInitiallyNilError:(NSError *)arg1;
- (void)rd_unobservePrimaryCloudKitAccountPersonIDSaltChanges:(id <REMDAAccountPropertiesObserving>)arg1;
- (id <REMDAAccountPropertiesObserving>)rd_observePrimaryCloudKitAccountPersonIDSaltChangesOnQueue:(OS_dispatch_queue *)arg1 successHandler:(void (^)(NSData *))arg2 errorHandler:(void (^)(NSError *))arg3;
- (_Bool)rem_supportsClearingOrphanedStores;
- (REMSaveRequest *)rem_saveRequestForDataAccess;
- (REMStore *)rem_storeForDataAccess;
@end

