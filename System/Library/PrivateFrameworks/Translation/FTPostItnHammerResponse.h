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
@interface FTPostItnHammerResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct PostItnHammerResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008b986
- (id)flatbuffData;	// IMP=0x000000000008b80e
- (Offset_d5684332)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000008b1bf
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008ae81
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PostItnHammerResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000008acb3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PostItnHammerResponse *)arg2;	// IMP=0x000000000008ac9d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000008ac82
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000008ac6a

@end

