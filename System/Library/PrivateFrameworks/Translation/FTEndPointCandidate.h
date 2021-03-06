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
@interface FTEndPointCandidate : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct EndPointCandidate *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009d089
- (id)flatbuffData;	// IMP=0x000000000009cf11
- (Offset_d4bcbfdd)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000009cc92
@property(readonly, nonatomic) int processed_audio_duration_ms;
@property(readonly, nonatomic) int end_point_likelihood;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009cad7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointCandidate *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000009c909
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointCandidate *)arg2;	// IMP=0x000000000009c8f3
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000009c8d8
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000009c8c0

@end

