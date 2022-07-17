//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSAccount, SSAppPurchaseHistoryDatabase, SSDatabaseCache;

@interface SSAppPurchaseHistoryCache : NSObject
{
    SSAccount *_account;	// 8 = 0x8
    SSDatabaseCache *_databaseCache;	// 16 = 0x10
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000015c789
- (unsigned long long)purge:(unsigned long long)arg1;	// IMP=0x000000000015c6af
- (unsigned long long)purgeableSpace;	// IMP=0x000000000015c5f4
- (id)imageDataForAdamID:(id)arg1;	// IMP=0x000000000015c51e
- (_Bool)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3;	// IMP=0x000000000015c3ae
- (void)clearCacheForAdamID:(id)arg1;	// IMP=0x000000000015c332
- (id)allUncachedImages;	// IMP=0x000000000015c31e
- (id)allUncachedImages:(id)arg1;	// IMP=0x000000000015ba1f
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000015b9c5
- (id)init;	// IMP=0x000000000015b90e

@end
