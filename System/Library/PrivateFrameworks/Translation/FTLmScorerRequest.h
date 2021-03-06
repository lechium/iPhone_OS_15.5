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
@interface FTLmScorerRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LmScorerRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a28b2
- (id)flatbuffData;	// IMP=0x00000000000a273a
- (Offset_faaa60fe)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000a2527
@property(readonly, nonatomic) NSString *transcript;
@property(readonly, nonatomic) NSString *task_name;
@property(readonly, nonatomic) NSString *language;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a23ed
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000a221f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerRequest *)arg2;	// IMP=0x00000000000a2209
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000a21ee
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000a21d6

@end

