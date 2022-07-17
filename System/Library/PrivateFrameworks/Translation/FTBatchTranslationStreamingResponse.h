//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTBatchTranslationResponse, FTFinalBlazarResponse, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchTranslationStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000de84d
- (id)flatbuffData;	// IMP=0x00000000000de6d5
- (Offset_149a05be)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000de4f7
@property(readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(readonly, nonatomic) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000de2ee
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000de120
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationStreamingResponse *)arg2;	// IMP=0x00000000000de10a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000de0ef
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000de0d7

@end
