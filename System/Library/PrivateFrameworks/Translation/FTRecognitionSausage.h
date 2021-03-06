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
@interface FTRecognitionSausage : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionSausage *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006bb49
- (id)flatbuffData;	// IMP=0x000000000006b9d1
- (Offset_d0166a8b)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000006b4ef
@property(readonly, nonatomic) NSArray *positional_tok_phrase_alt;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006b370
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionSausage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000006b1a2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionSausage *)arg2;	// IMP=0x000000000006b18c
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000006b171
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000006b159

@end

