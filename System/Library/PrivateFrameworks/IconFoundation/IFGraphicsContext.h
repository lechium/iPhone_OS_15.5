//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFColor, IFImage, NSData;

@interface IFGraphicsContext : NSObject
{
    struct CGContext *_cgContext;	// 8 = 0x8
    unsigned long long _preset;	// 16 = 0x10
}

+ (id)bitmapContextWithSize:(struct CGSize)arg1 scale:(double)arg2 preset:(unsigned long long)arg3;	// IMP=0x000000000000c965
@property(readonly, nonatomic) unsigned long long preset; // @synthesize preset=_preset;
@property(readonly, nonatomic) struct CGContext *cgContext; // @synthesize cgContext=_cgContext;
- (void)popState;	// IMP=0x000000000000d7e2
- (void)pushState;	// IMP=0x000000000000d7d4
@property(nonatomic) struct CGAffineTransform transform;
- (void)clipToMaskCGImage:(struct CGImage *)arg1 inRect:(struct CGRect)arg2;	// IMP=0x000000000000d799
@property(readonly, nonatomic) struct CGRect bounds;
- (void)clear;	// IMP=0x000000000000d76f
- (void)fillPath:(struct CGPath *)arg1;	// IMP=0x000000000000d737
- (void)strokePath:(struct CGPath *)arg1;	// IMP=0x000000000000d6ff
- (void)fillRect:(struct CGRect)arg1;	// IMP=0x000000000000d6f1
- (void)strokeRect:(struct CGRect)arg1;	// IMP=0x000000000000d6e3
- (void)drawText:(id)arg1 fontName:(id)arg2 fontSize:(double)arg3 inRect:(struct CGRect)arg4;	// IMP=0x000000000000d3b6
- (void)drawSymbolImage:(id)arg1 centeredInRect:(struct CGRect)arg2;	// IMP=0x000000000000d111
- (void)drawCGImage:(struct CGImage *)arg1 centeredInRect:(struct CGRect)arg2;	// IMP=0x000000000000cfeb
- (void)drawCGImage:(struct CGImage *)arg1 inRect:(struct CGRect)arg2;	// IMP=0x000000000000cfda
@property(nonatomic) int blendMode;
@property(nonatomic) double lineWidth;
@property(retain, nonatomic) IFColor *strokeColor;
@property(retain, nonatomic) IFColor *fillColor;
@property(readonly, nonatomic) NSData *data;
- (id)imageFromRect:(struct CGRect)arg1;	// IMP=0x000000000000cd59
@property(readonly, nonatomic) IFImage *image;
@property(readonly, nonatomic) double scale;
- (struct CGSize)size;	// IMP=0x000000000000cc06
- (void)dealloc;	// IMP=0x000000000000cbc7
- (id)initWithCGContext:(struct CGContext *)arg1 preset:(unsigned long long)arg2;	// IMP=0x000000000000cb6d

@end

