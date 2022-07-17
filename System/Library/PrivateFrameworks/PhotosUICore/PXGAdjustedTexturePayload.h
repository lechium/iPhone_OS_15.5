//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class PXGImageTexture;
@protocol PXGDisplayAssetAdjustment;

@interface PXGAdjustedTexturePayload : NSObject <NSCopying>
{
    PXGImageTexture *_texture;	// 8 = 0x8
    id <PXGDisplayAssetAdjustment> _adjustment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007d5c7b
@property(readonly, nonatomic) id <PXGDisplayAssetAdjustment> adjustment; // @synthesize adjustment=_adjustment;
@property(readonly, nonatomic) PXGImageTexture *texture; // @synthesize texture=_texture;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007d5ac1
- (unsigned long long)hash;	// IMP=0x00000000007d5a0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007d5a02
- (id)initWithTexture:(id)arg1 adjustment:(id)arg2;	// IMP=0x00000000007d594b
- (id)init;	// IMP=0x00000000007d58a9

@end
