//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVProviderDatasetBridge-Protocol.h>

@class CNContactStore, KVItemMapper, NSString;

@interface CKVContactStoreBridge : NSObject <CKVProviderDatasetBridge>
{
    CNContactStore *_contactStore;	// 8 = 0x8
    KVItemMapper *_itemMapper;	// 16 = 0x10
}

+ (id)_contactFetchKeys;	// IMP=0x00000000000c352f
- (void).cxx_destruct;	// IMP=0x00000000000c32b8
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2dc8
- (id)initWithContactStore:(id)arg1;	// IMP=0x00000000000c2bec
- (id)init;	// IMP=0x00000000000c2bac
- (id)originAppId;	// IMP=0x00000000000c2b9b
- (long long)itemType;	// IMP=0x00000000000c2b85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

