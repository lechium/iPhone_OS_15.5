//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTAlignment, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationResponse_TranslationToken : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TranslationToken *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009afc5
- (id)flatbuffData;	// IMP=0x000000000009ae4d
- (Offset_f50ee2c0)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000009ac82
@property(readonly, nonatomic) _Bool add_space_after;
@property(readonly, nonatomic) FTAlignment *mt_alignment;
@property(readonly, nonatomic) float confidence;
@property(readonly, nonatomic) NSString *token;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009aae2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationToken *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000009a914
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationToken *)arg2;	// IMP=0x000000000009a8fe
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000009a8e3
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000009a8cb

@end

