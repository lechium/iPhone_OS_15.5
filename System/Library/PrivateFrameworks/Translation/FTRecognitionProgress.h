//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTRecognitionProgress : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionProgress *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009dbab
- (id)flatbuffData;	// IMP=0x000000000009da33
- (Offset_5953e935)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000009d8e5
@property(readonly, nonatomic) NSString *speech_id;
@property(readonly, nonatomic) int processed_audio_duration_ms;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009d84a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionProgress *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000009d67c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionProgress *)arg2;	// IMP=0x000000000009d666
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000009d64b
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000009d633

@end

