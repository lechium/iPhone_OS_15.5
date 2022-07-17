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
@interface FTRequestStatsResponse_BoolStat : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BoolStat *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000720da
- (id)flatbuffData;	// IMP=0x0000000000071f62
- (Offset_3d0cfb4c)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000071e0f
@property(readonly, nonatomic) _Bool value;
@property(readonly, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071d6e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BoolStat *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000071ba0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BoolStat *)arg2;	// IMP=0x0000000000071b8a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000071b6f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000071b57

@end
