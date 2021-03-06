//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MFPhonePen
{
    float m_PixelSize;	// 32 = 0x20
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4 LPToDPTransform:(struct CGAffineTransform)arg5;	// IMP=0x00000000000f64cc
- (void)strokePath:(id)arg1 in_path:(id)arg2;	// IMP=0x000000000037111e
- (void)applyLineCapStyleToPath:(id)arg1;	// IMP=0x00000000000f8a09
- (void)applyLineJoinStyleToPath:(id)arg1 in_path:(id)arg2;	// IMP=0x000000000037101a
- (void)applyDashedLinesToPath:(id)arg1;	// IMP=0x00000000000f890c
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;	// IMP=0x00000000000f65fb

@end

