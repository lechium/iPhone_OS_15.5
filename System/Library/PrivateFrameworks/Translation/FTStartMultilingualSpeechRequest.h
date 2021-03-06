//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTStartSpeechRequest, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTStartMultilingualSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StartMultilingualSpeechRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cbaa3
- (id)flatbuffData;	// IMP=0x00000000000cb92b
- (Offset_0fc89d0c)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000cb3ff
@property(readonly, nonatomic) NSArray *language_parameters_by_id;
@property(readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cb1af
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartMultilingualSpeechRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000cafe1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartMultilingualSpeechRequest *)arg2;	// IMP=0x00000000000cafcb
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cafb0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000caf98

@end

