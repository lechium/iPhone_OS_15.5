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
@interface FTAcousticFeature : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AcousticFeature *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000073c61
- (id)flatbuffData;	// IMP=0x0000000000073ae9
- (Offset_b1e182a8)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000735bb
@property(readonly, nonatomic) float frame_duration;
@property(readonly, nonatomic) NSArray *acoustic_feature_per_frame;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073423
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AcousticFeature *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000073255
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AcousticFeature *)arg2;	// IMP=0x000000000007323f
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000073224
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000007320c

@end
