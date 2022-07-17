//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTRecognitionSausage, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSiriTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SiriTranslationInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000096df9
- (id)flatbuffData;	// IMP=0x0000000000096c81
- (Offset_aedd1960)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000095d61
@property(readonly, nonatomic) NSArray *translation_phrase;
@property(readonly, nonatomic) NSArray *itn_alignments;
@property(readonly, nonatomic) NSString *post_itn_recognition;
@property(readonly, nonatomic) NSArray *post_itn_tokens;
@property(readonly, nonatomic) NSArray *raw_nbest_choices;
@property(readonly, nonatomic) FTRecognitionSausage *raw_sausage;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009563c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriTranslationInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000009546e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriTranslationInfo *)arg2;	// IMP=0x0000000000095458
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000009543d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000095425

@end
