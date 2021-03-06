//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAudioPacket : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AudioPacket *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007d1cf
- (id)flatbuffData;	// IMP=0x000000000007d057
- (Offset_a6aee705)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000007ce5c
- (void)audio_bytes:(CDUnknownBlockType)arg1;	// IMP=0x000000000007cdf6
@property(readonly, nonatomic) NSData *audio_bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007cda9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioPacket *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000007cbdb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioPacket *)arg2;	// IMP=0x000000000007cbc5
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000007cbaa
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000007cb92

@end

