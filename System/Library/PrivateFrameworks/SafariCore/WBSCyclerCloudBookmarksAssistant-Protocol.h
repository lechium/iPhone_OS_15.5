//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariCore/NSObject-Protocol.h>

@protocol WBSCyclerCloudBookmarksAssistant <NSObject>
- (void)migrateToCloudKitWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)clearLocalDataIncludingMigrationState:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)resetToDAVDatabaseWithCompletionHandler:(void (^)(NSError *))arg1;
@end

