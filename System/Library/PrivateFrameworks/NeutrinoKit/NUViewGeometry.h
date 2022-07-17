//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NUViewGeometry : NSObject
{
    _Bool _flipped;	// 8 = 0x8
    double _backingScale;	// 16 = 0x10
    double _angle;	// 24 = 0x18
    double _maximumScale;	// 32 = 0x20
    struct CGSize _imageSize;	// 40 = 0x28
    struct CGPoint _origin;	// 56 = 0x38
    struct UIEdgeInsets _contentInsets;	// 72 = 0x48
    struct CGRect _cropRect;	// 104 = 0x68
}

@property(nonatomic) double maximumScale; // @synthesize maximumScale=_maximumScale;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic, getter=isFlipped) _Bool flipped; // @synthesize flipped=_flipped;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(readonly, nonatomic) struct CGRect boundingCropRect;
- (struct UIEdgeInsets)contentInsetsWithScale:(double)arg1;	// IMP=0x0000000000019305
- (struct CGRect)insetBoundsForCrop:(struct CGRect)arg1 inBounds:(struct CGRect)arg2 inFrame:(struct CGRect)arg3;	// IMP=0x00000000000191b5
- (struct CGRect)proposedBoundsForBounds:(struct CGRect)arg1 inFrame:(struct CGRect)arg2;	// IMP=0x0000000000018cb2
@property(readonly, nonatomic) struct CGRect imageBounds;
@property(readonly, nonatomic) struct CGSize viewImageSize;
- (id)init;	// IMP=0x0000000000018c3e

@end
