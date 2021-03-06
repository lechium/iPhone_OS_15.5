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
@interface FTUserDataEntity : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct UserDataEntity *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000801c3
- (id)flatbuffData;	// IMP=0x000000000008004b
- (Offset_0b2b2f48)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000007fb69
@property(readonly, nonatomic) NSArray *attributes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f9ea
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserDataEntity *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000007f81c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserDataEntity *)arg2;	// IMP=0x000000000007f806
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000007f7eb
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000007f7d3

@end

