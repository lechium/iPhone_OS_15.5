//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MLAssetIO/NSCopying-Protocol.h>

@interface MIOImageSize : NSObject <NSCopying>
{
    struct ImageFeatureType_ImageSize _imageSizeParams;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000001a5af
- (void).cxx_destruct;	// IMP=0x000000000001a5a1
@property(readonly, nonatomic) long long pixelsHigh;
@property(readonly, nonatomic) long long pixelsWide;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a582
- (long long)compare:(id)arg1;	// IMP=0x000000000001a3d8
- (unsigned long long)hash;	// IMP=0x000000000001a39c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a2b3
- (id)description;	// IMP=0x000000000001a256
- (id)initWithSpecification:(const void *)arg1;	// IMP=0x000000000001a1e6

@end

