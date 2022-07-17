//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFObject-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPen : NSObject <MFObject>
{
    int m_penStyle;	// 8 = 0x8
    int m_penWidth;	// 12 = 0xc
    OITSUColor *m_colour;	// 16 = 0x10
    double *m_userStyleArray;	// 24 = 0x18
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;	// IMP=0x000000000036bd78
+ (id)pen;	// IMP=0x00000000001582a8
- (void).cxx_destruct;	// IMP=0x000000000036be01
- (int)getStyle;	// IMP=0x00000000000f8a00
- (int)getWidth;	// IMP=0x000000000036bdf8
- (id)getColor;	// IMP=0x00000000000f88fe
- (int)selectInto:(id)arg1;	// IMP=0x00000000000f798c
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;	// IMP=0x00000000000f662a
- (id)init;	// IMP=0x00000000001582ba

@end
