//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

@interface GKComposedImageBrush
{
    UIImage *_maskImage;	// 24 = 0x18
    UIImage *_backgroundImage;	// 32 = 0x20
    UIImage *_overlayImage;	// 40 = 0x28
    struct UIEdgeInsets _maskInsets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000094cb
@property(nonatomic) struct UIEdgeInsets maskInsets; // @synthesize maskInsets=_maskInsets;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;	// IMP=0x00000000000090ff
- (double)scaleForInput:(id)arg1;	// IMP=0x0000000000008f71
- (struct CGSize)sizeForInput:(id)arg1;	// IMP=0x0000000000008dd9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008cc7

@end

