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
@interface FTTextToSpeechFeature : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechFeature *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b3a01
- (id)flatbuffData;	// IMP=0x00000000000b3889
- (Offset_fc1e4a4a)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000b23aa
@property(readonly, nonatomic) NSArray *neural_phoneme_sequence;
@property(readonly, nonatomic) NSArray *replacement;
@property(readonly, nonatomic) NSArray *prompts;
@property(readonly, nonatomic) NSArray *phoneme_sequence;
@property(readonly, nonatomic) NSArray *normalized_text;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b1c5b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechFeature *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000b1a8d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechFeature *)arg2;	// IMP=0x00000000000b1a77
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b1a5c
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b1a44

@end
