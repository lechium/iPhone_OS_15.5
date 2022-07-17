//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechCacheObject : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechCacheObject *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000be86d
- (id)flatbuffData;	// IMP=0x00000000000be6f5
- (Offset_00a5d9ba)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000be1cd
@property(readonly, nonatomic) NSArray *word_timing_info;
- (void)audio:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bdff3
@property(readonly, nonatomic) NSData *audio;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bdfa6
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheObject *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000bddd8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheObject *)arg2;	// IMP=0x00000000000bddc2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bdda7
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bdd8f

@end
