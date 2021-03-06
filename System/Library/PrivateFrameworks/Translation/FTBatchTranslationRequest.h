//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchTranslationRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ce263
- (id)flatbuffData;	// IMP=0x00000000000ce0eb
- (Offset_670edf35)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000cd843
@property(readonly, nonatomic) long long opt_in_status;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *app_id;
@property(readonly, nonatomic) NSArray *paragraphs;
@property(readonly, nonatomic) NSString *target_language;
@property(readonly, nonatomic) NSString *source_language;
@property(readonly, nonatomic) NSString *task;
@property(readonly, nonatomic) NSString *request_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd3d4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000cd206
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationRequest *)arg2;	// IMP=0x00000000000cd1f0
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cd1d5
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cd1bd

@end

