//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class STCachingCodableStore;

@interface STPersistentTransportServiceMessageLedger : NSObject
{
    STCachingCodableStore *_keyValueStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005915c
@property(readonly) STCachingCodableStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
- (id)addressesFromItem:(id)arg1 inState:(long long)arg2;	// IMP=0x0010000000058ffe
- (void)_enumerateItemsWithState:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058e39
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058e22
- (void)enumerateItemsWithState:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058da1
- (id)fetchItemWithMessageIdentifier:(id)arg1;	// IMP=0x0010000000058cff
- (void)removeItemWithMessageIdentifier:(id)arg1;	// IMP=0x0010000000058c6f
- (void)setItem:(id)arg1 forMessageIdentifier:(id)arg2;	// IMP=0x0010000000058bc7
- (id)initWithKeyValueStore:(id)arg1;	// IMP=0x0010000000058b27

@end

