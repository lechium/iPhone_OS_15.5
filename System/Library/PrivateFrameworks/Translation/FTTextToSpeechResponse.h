//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTAudioDescription, FTTextToSpeechFeature, FTTextToSpeechMeta, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b8f6b
- (id)flatbuffData;	// IMP=0x00000000000b8df3
- (Offset_84bb9af3)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000b848c
@property(readonly, nonatomic) FTTextToSpeechFeature *feature;
@property(readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property(readonly, nonatomic) NSArray *word_timing_info;
@property(readonly, nonatomic) FTAudioDescription *playback_description;
@property(readonly, nonatomic) FTAudioDescription *decoder_description;
- (void)audio:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b7f6e
@property(readonly, nonatomic) NSData *audio;
@property(readonly, nonatomic) int sample_rate;
@property(readonly, nonatomic) long long audio_type;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b7d6f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000b7ba1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResponse *)arg2;	// IMP=0x00000000000b7b8b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b7b70
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b7b58

@end

