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
@interface FTClientSetupInfo : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ClientSetupInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bfe12
- (id)flatbuffData;	// IMP=0x00000000000bfc9a
- (Offset_e54babbe)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000bfb22
@property(readonly, nonatomic) NSString *speech_id;
@property(readonly, nonatomic) _Bool endpoint_extra_delay;
@property(readonly, nonatomic) float endpoint_threshold;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bfa53
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ClientSetupInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000bf885
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ClientSetupInfo *)arg2;	// IMP=0x00000000000bf86f
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bf854
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bf83c

@end
