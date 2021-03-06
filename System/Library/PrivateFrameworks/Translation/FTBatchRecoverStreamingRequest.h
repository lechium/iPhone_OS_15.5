//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTStartBatchRecoverRequest, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTBatchRecoverStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchRecoverStreamingRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d43df
- (id)flatbuffData;	// IMP=0x00000000000d4267
- (Offset_74b58d8f)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d40ff
@property(readonly, nonatomic) FTStartBatchRecoverRequest *contentAsFTStartBatchRecoverRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d3fde
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d3e10
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverStreamingRequest *)arg2;	// IMP=0x00000000000d3dfa
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d3ddf
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d3dc7

@end

