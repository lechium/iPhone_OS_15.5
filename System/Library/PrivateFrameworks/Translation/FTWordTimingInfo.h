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
@interface FTWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct WordTimingInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b7b30
- (id)flatbuffData;	// IMP=0x00000000000b79b8
- (Offset_79ee9959)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000b77f7
@property(readonly, nonatomic) float timestamp;
@property(readonly, nonatomic) unsigned int length;
@property(readonly, nonatomic) unsigned int offset;
@property(readonly, nonatomic) unsigned int sample_idx;
@property(readonly, nonatomic) NSString *word;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b76d8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000b750a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo *)arg2;	// IMP=0x00000000000b74f4
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b74d9
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b74c1

@end
