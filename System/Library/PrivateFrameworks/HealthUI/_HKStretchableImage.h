//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface _HKStretchableImage : NSObject
{
    UIImage *_topImage;	// 8 = 0x8
    UIImage *_centerImage;	// 16 = 0x10
    UIImage *_bottomImage;	// 24 = 0x18
    UIImage *_singlePointImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000019263d
@property(retain, nonatomic) UIImage *singlePointImage; // @synthesize singlePointImage=_singlePointImage;
@property(retain, nonatomic) UIImage *bottomImage; // @synthesize bottomImage=_bottomImage;
@property(retain, nonatomic) UIImage *centerImage; // @synthesize centerImage=_centerImage;
@property(retain, nonatomic) UIImage *topImage; // @synthesize topImage=_topImage;
- (double)_desiredWidth;	// IMP=0x000000000019258d
- (void)renderInContext:(struct CGContext *)arg1 topCenter:(struct CGPoint)arg2 bottomCenter:(struct CGPoint)arg3 contextBounds:(struct CGRect)arg4 alpha:(double)arg5;	// IMP=0x0000000000192445
- (void)_renderSingleImageInContext:(struct CGContext *)arg1 point:(struct CGPoint)arg2 contextBounds:(struct CGRect)arg3 alpha:(double)arg4;	// IMP=0x0000000000192378
- (void)_renderStretchedInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2 contextBounds:(struct CGRect)arg3 alpha:(double)arg4;	// IMP=0x0000000000191dc0

@end
