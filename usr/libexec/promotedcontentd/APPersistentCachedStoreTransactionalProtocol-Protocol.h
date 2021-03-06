//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "APPersistentCachedStoreProtocol-Protocol.h"

@class APCacheableBaseObject, NSString;
@protocol APPersistentCachedStoreTransactionProtocol;

@protocol APPersistentCachedStoreTransactionalProtocol <APPersistentCachedStoreProtocol>
- (void)executeBlock:(void (^)(void))arg1;
- (void)touchObjectForKey:(NSString *)arg1 transaction:(id <APPersistentCachedStoreTransactionProtocol>)arg2;
- (void)removeObjectForKey:(NSString *)arg1 transaction:(id <APPersistentCachedStoreTransactionProtocol>)arg2;
- (void)setObject:(APCacheableBaseObject *)arg1 forKey:(NSString *)arg2 transaction:(id <APPersistentCachedStoreTransactionProtocol>)arg3;
- (id <APPersistentCachedStoreTransactionProtocol>)createTransaction;
@end

