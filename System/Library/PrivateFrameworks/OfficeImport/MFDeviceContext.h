//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class MFBrush, MFFont, MFPalette, MFPath, MFPen, MFTransform, NSMutableArray, OITSUColor;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFDeviceContext : NSObject <NSCopying>
{
    NSObject<MFDeviceDriver> *m_driver;	// 8 = 0x8
    _Bool m_textUpdateCP;	// 16 = 0x10
    double m_miterLimit;	// 24 = 0x18
    int m_textHorizontalAlign;	// 32 = 0x20
    int m_textVerticalAlign;	// 36 = 0x24
    int m_textDirection;	// 40 = 0x28
    MFFont *m_font;	// 48 = 0x30
    OITSUColor *m_textColour;	// 56 = 0x38
    int m_textBreakExtra;	// 64 = 0x40
    int m_textBreakCount;	// 68 = 0x44
    int m_textCharExtra;	// 72 = 0x48
    OITSUColor *m_bkColour;	// 80 = 0x50
    int m_bkMode;	// 88 = 0x58
    struct CGPoint m_brushOrg;	// 96 = 0x60
    struct CGPoint m_penPos;	// 112 = 0x70
    int m_arcDirection;	// 128 = 0x80
    int m_polyFillMode;	// 132 = 0x84
    MFTransform *m_transform;	// 136 = 0x88
    MFPen *m_pen;	// 144 = 0x90
    MFBrush *m_brush;	// 152 = 0x98
    MFPalette *m_selectedPalette;	// 160 = 0xa0
    int m_rop2;	// 168 = 0xa8
    int m_stretchMode;	// 172 = 0xac
    NSMutableArray *m_clippingPaths;	// 176 = 0xb0
    _Bool m_clippingIsRestarted;	// 184 = 0xb8
    MFPath *m_path;	// 192 = 0xc0
}

+ (id)deviceContextWithDriver:(id)arg1;	// IMP=0x0000000000365096
- (void).cxx_destruct;	// IMP=0x0000000000365124
@property(nonatomic) _Bool clippingIsRestarted; // @synthesize clippingIsRestarted=m_clippingIsRestarted;
@property(readonly, nonatomic) NSMutableArray *clippingPaths; // @synthesize clippingPaths=m_clippingPaths;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f7dda
- (void)setRop2:(int)arg1;	// IMP=0x00000000000f79ca
- (int)getRop2;	// IMP=0x00000000000f79be
- (void)setBrush:(id)arg1;	// IMP=0x00000000000f7978
- (id)getBrush;	// IMP=0x00000000000f7b3b
- (void)setPen:(id)arg1;	// IMP=0x00000000000f79aa
- (id)getPen;	// IMP=0x00000000000f869c
- (void)setSelectedPalette:(id)arg1;	// IMP=0x00000000000f8688
- (id)getSelectedPalette;	// IMP=0x00000000000f8677
- (void)setPath:(id)arg1;	// IMP=0x00000000000f87d1
- (id)getPath;	// IMP=0x00000000000f78ac
- (id)getCurrentTransform;	// IMP=0x00000000000f6e71
- (void)setCurrentTransform:(id)arg1;	// IMP=0x00000000000f8663
- (int)getStretchBltMode;	// IMP=0x00000000000f8387
- (void)setStretchBltMode:(int)arg1;	// IMP=0x00000000000f8393
- (int)getPolyFillMode;	// IMP=0x00000000000f7b4c
- (void)setPolyFillMode:(int)arg1;	// IMP=0x00000000000f837b
- (int)getArcDirection;	// IMP=0x00000000000f8363
- (void)setArcDirection:(int)arg1;	// IMP=0x00000000000f836f
- (id)getFont;	// IMP=0x00000000000f743c
- (void)setFont:(id)arg1;	// IMP=0x00000000000f72e6
- (struct CGPoint)getBrushOrg;	// IMP=0x00000000000f8343
- (void)setBrushOrg:(struct CGPoint)arg1;	// IMP=0x00000000000f8353
- (int)getBkMode;	// IMP=0x00000000000f7919
- (void)setBkMode:(int)arg1;	// IMP=0x00000000000f7310
- (id)getBkColour;	// IMP=0x00000000000f8324
- (void)setBkColour:(id)arg1;	// IMP=0x00000000000f8332
- (int)getTextCharExtra;	// IMP=0x00000000000f78c6
- (void)setTextCharExtra:(int)arg1;	// IMP=0x00000000000f831b
- (int)getTextBreakCount;	// IMP=0x00000000000f8312
- (int)getTextBreakExtra;	// IMP=0x00000000000f8309
- (void)setTextJustification:(int)arg1 in_breakCount:(int)arg2;	// IMP=0x00000000003650f3
- (id)getTextColour;	// IMP=0x00000000000f7937
- (void)setTextColour:(id)arg1;	// IMP=0x00000000000f742b
- (int)getTextDirection;	// IMP=0x00000000000f82f7
- (void)setTextDirection:(int)arg1;	// IMP=0x00000000000f8300
- (int)getTextVerticalAlign;	// IMP=0x00000000000f78cf
- (void)setTextVerticalAlign:(int)arg1;	// IMP=0x00000000000f82ee
- (int)getTextHorizontalAlign;	// IMP=0x00000000000f78d8
- (void)setTextHorizontalAlign:(int)arg1;	// IMP=0x00000000000f82e5
- (double)getMiterLimit;	// IMP=0x00000000000f82cf
- (void)setMiterLimit:(double)arg1;	// IMP=0x00000000000f82da
- (_Bool)getTextUpdateCP;	// IMP=0x00000000000f78bd
- (void)setTextUpdateCP:(_Bool)arg1;	// IMP=0x00000000000f82c6
- (void)setPenPosition:(struct CGPoint)arg1;	// IMP=0x00000000000f82b6
- (struct CGPoint)getPenPosition;	// IMP=0x00000000000f82a6
- (id)initWithDriver:(id)arg1;	// IMP=0x00000000000f5e99

@end

