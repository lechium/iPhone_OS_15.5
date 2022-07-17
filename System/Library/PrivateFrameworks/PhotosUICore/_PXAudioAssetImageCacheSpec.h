//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class PHImageRequestOptions;
@protocol PXDisplayAsset;

@interface _PXAudioAssetImageCacheSpec : NSObject <NSCopying>
{
    id <PXDisplayAsset> _asset;	// 8 = 0x8
    long long _contentMode;	// 16 = 0x10
    PHImageRequestOptions *_options;	// 24 = 0x18
    struct CGSize _targetSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000023dba2
@property(readonly, copy, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (id)init;	// IMP=0x000000000023dafa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023daef
- (id)description;	// IMP=0x000000000023d9b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023d7e9
- (unsigned long long)hash;	// IMP=0x000000000023d794
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;	// IMP=0x000000000023d6bf

@end
