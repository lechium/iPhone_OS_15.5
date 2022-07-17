//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSURL;

@protocol STScreenTimeStateManager <NSObject>
@property(readonly) _Bool shouldRequestMoreTime;
@property(readonly, getter=isScreenTimeSyncingEnabled) _Bool screenTimeSyncingEnabled;
@property(readonly, getter=isScreenTimeEnabled) _Bool screenTimeEnabled;
- (NSNumber *)getIsExplicitContentRestrictedAndReturnError:(id *)arg1;
- (NSNumber *)shouldAllowOneMoreMinuteForCategoryIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSNumber *)shouldAllowOneMoreMinuteForWebDomain:(NSString *)arg1 error:(id *)arg2;
- (NSNumber *)shouldAllowOneMoreMinuteForBundleIdentifier:(NSString *)arg1 error:(id *)arg2;
- (void)permitWebFilterURL:(NSURL *)arg1 pageTitle:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)performMigrationFromMCXSettings:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)contactManagementStateForDSID:(NSNumber *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)setContactManagementState:(long long)arg1 forDSID:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSString *)getPrimaryiCloudCardDAVAccountIdentifierWithError:(id *)arg1;
- (void)communicationPoliciesForDSID:(NSNumber *)arg1 withCompletionHandler:(void (^)(long long, long long, NSError *))arg2;
- (NSNumber *)getNeedsToSetRestrictionsPasscodeAndReturnError:(id *)arg1;
- (_Bool)clearRestrictionsPasscodeWithError:(id *)arg1;
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)enableScreenTimeForDSID:(NSNumber *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
