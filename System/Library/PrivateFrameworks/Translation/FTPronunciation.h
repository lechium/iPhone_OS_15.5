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
@interface FTPronunciation : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct Pronunciation *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000083858
- (id)flatbuffData;	// IMP=0x00000000000836e0
- (Offset_5121ad8d)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000835b3
@property(readonly, nonatomic) NSString *phonemes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000083543
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Pronunciation *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000083375
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Pronunciation *)arg2;	// IMP=0x000000000008335f
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000083344
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000008332c

@end
