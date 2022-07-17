//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTTextToSpeechCacheMetaInfo, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechCacheContainer : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechCacheContainer *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bf3a1
- (id)flatbuffData;	// IMP=0x00000000000bf229
- (Offset_794948a1)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000becfc
@property(readonly, nonatomic) NSArray *cache_object;
@property(readonly, nonatomic) FTTextToSpeechCacheMetaInfo *cache_meta_info;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000beaac
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainer *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000be8de
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainer *)arg2;	// IMP=0x00000000000be8c8
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000be8ad
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000be895

@end
