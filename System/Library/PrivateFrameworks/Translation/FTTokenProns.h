//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTokenProns : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TokenProns *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009049f
- (id)flatbuffData;	// IMP=0x0000000000090327
- (Offset_5b0c17b4)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000008f677
@property(readonly, nonatomic) NSArray *normalized_prons;
@property(readonly, nonatomic) NSArray *prons;
@property(readonly, nonatomic) NSArray *sanitized_sequences;
@property(readonly, nonatomic) NSString *orthography;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008f1ab
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000008efdd
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns *)arg2;	// IMP=0x000000000008efc7
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000008efac
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000008ef94

@end

