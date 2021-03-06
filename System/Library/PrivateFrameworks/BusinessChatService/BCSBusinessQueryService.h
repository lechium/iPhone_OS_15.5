//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol BCSXPCDaemonConnectionProtocol;

@interface BCSBusinessQueryService : NSObject
{
    NSDate *_lastTimeoutDate;	// 8 = 0x8
    id <BCSXPCDaemonConnectionProtocol> _connection;	// 16 = 0x10
    NSString *_clientBundleIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001532d
- (void)_deleteInMemoryCache;	// IMP=0x00000000000151b9
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015001
- (void)clearExpiredCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014e66
- (void)clearCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014ccb
- (void)prefetchBloomFilterAndConfigCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014b3a
- (void)fetchLinkItemWithHash:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014861
- (void)_isBusinessRegisteredForURL:(id)arg1 chopURL:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001462c
- (void)isBusinessRegisteredForURL:(id)arg1 chopURL:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000143f4
- (void)isBusinessRegisteredForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014345
- (void)fetchLinkItemWithURL:(id)arg1 chopURL:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001406b
- (void)fetchLinkItemWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014051
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013e37
- (void)fetchIsBusinessPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013cc9
- (void)isBusinessRegisteredForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013aae
- (void)fetchBusinessItemForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013a85
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000139e5
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000137ce
- (id)businessItemForPhoneNumber:(id)arg1 isChatSuggestVisible:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000012e1e
- (id)businessItemForPhoneNumber:(id)arg1 isMessageable:(_Bool *)arg2 isChatSuggestVisible:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000012dfe
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1;	// IMP=0x0000000000012c94
- (id)init;	// IMP=0x0000000000012be9
- (id)initWithConnection:(id)arg1 clientBundleIdentifier:(id)arg2;	// IMP=0x0000000000012b2c

@end

