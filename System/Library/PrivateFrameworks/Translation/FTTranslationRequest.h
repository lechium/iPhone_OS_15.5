//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTSiriPayloadTranslationInfo, FTSiriTranslationInfo, FTSpeechTranslationInfo, FTWebTranslationInfo, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TranslationRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000994df
- (id)flatbuffData;	// IMP=0x0000000000099367
- (Offset_5dffcd6c)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000989c9
@property(readonly, nonatomic) NSString *app_id;
@property(readonly, nonatomic) long long opt_in_status;
@property(readonly, nonatomic) _Bool disable_log;
@property(readonly, nonatomic) FTWebTranslationInfo *web_translation_info;
@property(readonly, nonatomic) NSString *sequence_id;
@property(readonly, nonatomic) FTSiriPayloadTranslationInfo *siri_payload_translation_info;
@property(readonly, nonatomic) FTSpeechTranslationInfo *speech_translation_info;
@property(readonly, nonatomic) FTSiriTranslationInfo *siri_translation_info;
@property(readonly, nonatomic) NSArray *translation_phrase;
@property(readonly, nonatomic) NSString *target_language;
@property(readonly, nonatomic) NSString *source_language;
@property(readonly, nonatomic) NSString *task;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000981d1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000098003
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationRequest *)arg2;	// IMP=0x0000000000097fed
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000097fd2
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000097fba

@end

