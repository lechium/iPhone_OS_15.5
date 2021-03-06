//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFDeviceDriver-Protocol.h>

__attribute__((visibility("hidden")))
@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver>
{
    struct CGRect m_canvas;	// 8 = 0x8
    struct CGAffineTransform m_canvasTransform;	// 40 = 0x28
    struct CGRect m_viewBox;	// 88 = 0x58
    struct CGAffineTransform m_viewBoxTransform;	// 120 = 0x78
    struct CGAffineTransform m_worldToDeviceTransform;	// 168 = 0xa8
    struct CGAffineTransform m_combinedTransform;	// 216 = 0xd8
}

+ (int)getROP:(id)arg1;	// IMP=0x00000000000f7b58
- (id)createBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char *)arg6 in_bitmapSize:(unsigned int)arg7;	// IMP=0x000000000037032d
- (id)createDIBitmap:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char *)arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;	// IMP=0x0000000000370298
- (id)createDIBitmap:(id)arg1 in_dib:(const char *)arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;	// IMP=0x0000000000370217
- (id)createRegionWithPath:(id)arg1;	// IMP=0x00000000001ded25
- (id)createRegionWithRects:(id)arg1 in_dc:(id)arg2;	// IMP=0x000000000037016a
- (id)createPath;	// IMP=0x00000000000f67f3
- (id)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22;	// IMP=0x0000000000370052
- (id)createFont:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;	// IMP=0x000000000036ffb9
- (id)createFont:(int)arg1;	// IMP=0x00000000000f6296
- (id)createPen:(int)arg1 in_width:(int)arg2 in_colour:(id)arg3 in_userStyleArray:(double *)arg4;	// IMP=0x000000000036ff59
- (id)createPen;	// IMP=0x000000000015828f
- (id)createNullBrush;	// IMP=0x00000000000f8aa1
- (id)createSolidBrush:(id)arg1;	// IMP=0x00000000000f66c7
- (id)createPatternBrush:(id)arg1 usePaletteForBilevel:(_Bool)arg2;	// IMP=0x00000000001d9f6c
- (id)createHatchBrush:(id)arg1 in_hatchstyle:(int)arg2;	// IMP=0x000000000036ff30
- (int)plgBlt:(id)arg1 in_destinationParallelogram:(struct CGPoint *)arg2 in_sourceImage:(id)arg3 in_xSrc:(int)arg4 in_ySrc:(int)arg5 in_widthSrc:(int)arg6 in_heightSrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12;	// IMP=0x000000000036ff28
- (int)maskBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_maskImage:(id)arg9 in_xMask:(int)arg10 in_yMask:(int)arg11 in_rop:(unsigned int)arg12 in_xform:(struct CGAffineTransform *)arg13 in_colour:(unsigned int)arg14;	// IMP=0x000000000036fee7
- (int)alphaBlend:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_widthSrc:(int)arg9 in_heightSrc:(int)arg10 in_sourceConstantOpacity:(unsigned char)arg11 in_useSourceAlphaChannel:(_Bool)arg12 in_xform:(struct CGAffineTransform *)arg13 in_colour:(unsigned int)arg14;	// IMP=0x000000000036f823
- (int)stretchBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_widthSrc:(int)arg9 in_heightSrc:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x000000000036f5a7
- (int)bitBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_rop:(unsigned int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11;	// IMP=0x000000000036f563
- (int)patBlt:(id)arg1 in_x:(int)arg2 in_y:(int)arg3 in_width:(int)arg4 in_height:(int)arg5 in_rop:(unsigned int)arg6;	// IMP=0x000000000036f3af
- (int)setMetaRgn;	// IMP=0x00000000001deb9f
- (int)intersectClipRect:(struct CGRect)arg1;	// IMP=0x00000000000f87fb
- (int)excludeClipRect:(struct CGRect)arg1;	// IMP=0x0000000000166fe9
- (int)activateTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000000f6fe4
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;	// IMP=0x000000000036f29f
- (void)updateViewBoxTransform;	// IMP=0x00000000000f701a
- (void)applyTransformsToCurrentContext;	// IMP=0x000000000036f158
- (int)bezier:(id)arg1 x:(int)arg2 y:(int)arg3 x2:(int)arg4 y2:(int)arg5 x3:(int)arg6 y3:(int)arg7 x4:(int)arg8 y4:(int)arg9;	// IMP=0x000000000036f06e
- (int)bezierTo:(id)arg1 x:(int)arg2 y:(int)arg3 x2:(int)arg4 y2:(int)arg5 x3:(int)arg6 y3:(int)arg7;	// IMP=0x000000000036ef5a
- (int)ellipse:(id)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;	// IMP=0x000000000036ee3d
- (int)roundRect:(id)arg1 left:(int)arg2 top:(int)arg3 right:(int)arg4 bottom:(int)arg5 rx:(double)arg6 ry:(double)arg7;	// IMP=0x000000000036eb0a
- (int)fillRectangle:(id)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;	// IMP=0x000000000036e9e8
- (int)rectangle:(id)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;	// IMP=0x000000000036e8c3
- (int)lineTo:(id)arg1 x:(double)arg2 y:(double)arg3;	// IMP=0x000000000036e730
- (int)polyPolygon:(id)arg1 in_points:(struct CGPoint *)arg2 in_polyCounts:(int *)arg3 in_count:(int)arg4;	// IMP=0x000000000036e626
- (int)polygon:(id)arg1 in_points:(struct CGPoint *)arg2 in_count:(int)arg3;	// IMP=0x000000000036e563
- (int)polyPolyline:(id)arg1 in_points:(struct CGPoint *)arg2 in_polyCounts:(int *)arg3 in_count:(int)arg4;	// IMP=0x000000000036e4ae
- (int)polyline:(id)arg1 in_points:(struct CGPoint *)arg2 in_count:(int)arg3;	// IMP=0x000000000036e3fe
- (int)chord:(id)arg1 leftRect:(int)arg2 topRect:(int)arg3 rightRect:(int)arg4 bottomRect:(int)arg5 xStartArc:(int)arg6 yStartArc:(int)arg7 xEndArc:(int)arg8 yEndArc:(int)arg9;	// IMP=0x000000000036e2bf
- (int)pie:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;	// IMP=0x000000000036e128
- (int)angleArc:(id)arg1 x:(int)arg2 y:(int)arg3 radius:(unsigned int)arg4 startAngle:(double)arg5 sweepAngle:(double)arg6;	// IMP=0x000000000036dfc2
- (int)arcTo:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;	// IMP=0x000000000036de5b
- (int)arc:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;	// IMP=0x000000000036dd2f
- (int)extTextOut:(id)arg1 px:(int *)arg2 py:(int *)arg3 in_text:(id)arg4 options:(int)arg5 left:(int)arg6 top:(int)arg7 right:(int)arg8 bottom:(int)arg9 spacingValues:(int *)arg10 numValues:(int)arg11;	// IMP=0x000000000036cd87
- (int)textOut:(id)arg1 px:(int *)arg2 py:(int *)arg3 in_text:(id)arg4;	// IMP=0x000000000036cd62
- (void)drawBezierPath:(id)arg1 dc:(id)arg2 fill:(_Bool)arg3 stroke:(_Bool)arg4;	// IMP=0x00000000000f79d6
- (struct CGRect)getCanvas;	// IMP=0x00000000001571c8
- (id)initWithCanvas:(struct CGRect)arg1;	// IMP=0x00000000000f5d8e

@end

