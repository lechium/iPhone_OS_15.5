//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSString;

@protocol BCSCacheClearing <NSObject>
- (void)clearExpiredCachesForType:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)clearCachesForType:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

