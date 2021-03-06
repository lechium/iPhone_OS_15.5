//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage, UITraitCollection;

@interface CPImageSetAssetRegistration : NSObject
{
    UITraitCollection *_baseTraitCollection;	// 8 = 0x8
    UITraitCollection *_lightTraitCollection;	// 16 = 0x10
    UITraitCollection *_darkTraitCollection;	// 24 = 0x18
    UIImage *_combinedImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000013456
@property(readonly, nonatomic) UIImage *combinedImage; // @synthesize combinedImage=_combinedImage;
@property(readonly, nonatomic) UITraitCollection *darkTraitCollection; // @synthesize darkTraitCollection=_darkTraitCollection;
@property(readonly, nonatomic) UITraitCollection *lightTraitCollection; // @synthesize lightTraitCollection=_lightTraitCollection;
@property(readonly, nonatomic) UITraitCollection *baseTraitCollection; // @synthesize baseTraitCollection=_baseTraitCollection;
- (void)dealloc;	// IMP=0x000000000001330c
- (id)initWithLightImage:(id)arg1 darkImage:(id)arg2 baseTraitCollection:(id)arg3;	// IMP=0x00000000000130a3

@end

