//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

@interface NSCoder (Vision)
- (float)vn_decodeValidatedScoreForKey:(id)arg1;	// IMP=0x000000000006697d
- (void)vn_encodeValidatedScore:(float)arg1 forKey:(id)arg2;	// IMP=0x0000000000066854
- (float)vn_decodeValidatedConfidenceForKey:(id)arg1;	// IMP=0x0000000000066724
- (void)vn_encodeValidatedConfidence:(float)arg1 forKey:(id)arg2;	// IMP=0x00000000000665fb
- (struct __CVBuffer *)vn_decodePixelBufferForKey:(id)arg1;	// IMP=0x000000000006651f
- (void)vn_encodePixelBuffer:(struct __CVBuffer *)arg1 forKey:(id)arg2;	// IMP=0x000000000006648a
- (struct CGRect)vn_decodeRectForKey:(id)arg1;	// IMP=0x0000000000066383
- (void)vn_encodeRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x0000000000066256
- (struct CGSize)vn_decodeSizeForKey:(id)arg1;	// IMP=0x0000000000066159
- (void)vn_encodeSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x000000000006605b
- (struct CGPoint)vn_decodePointForKey:(id)arg1;	// IMP=0x0000000000065f5e
- (void)vn_encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x0000000000065e60
- (CDStruct_e83c9415)vn_decodeTimeRangeForKey:(id)arg1;	// IMP=0x0000000000065d6e
- (void)vn_encodeTimeRange:(CDStruct_e83c9415)arg1 forKey:(id)arg2;	// IMP=0x0000000000065ccf
- (MISSING_TYPE *)vn_decodeSimdFloat3ForKey:(id)arg1;	// IMP=0x00000000000659e4
- (void)vn_encodeSimdFloat3:(id)arg1 forKey: /* Error: Ran out of types for this method. */;	// IMP=0x000000000006592f
- (CDStruct_f1db2b5e)vn_decode4x4MatrixForKey:(id)arg1;	// IMP=0x00000000000656c9
- (void)vn_encode4x4Matrix:(CDStruct_f1db2b5e)arg1 forKey:(id)arg2;	// IMP=0x0000000000065575
- (CDStruct_8e0628e6)vn_decode3x3MatrixForKey:(id)arg1;	// IMP=0x000000000006529f
- (void)vn_encode3x3Matrix:(CDStruct_8e0628e6)arg1 forKey:(id)arg2;	// IMP=0x00000000000651c1
- (struct CGAffineTransform)vn_decodeCGAffineTransformForKey:(id)arg1;	// IMP=0x0000000000064f36
- (void)vn_encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;	// IMP=0x0000000000064e80
- (unsigned int)vn_decodeCodingVersionForKey:(id)arg1;	// IMP=0x0000000000064e6e
- (void)vn_encodeCodingVersion:(unsigned int)arg1 forKey:(id)arg2;	// IMP=0x0000000000064e5c
- (id)vn_decodeEntityUniqueIdentifierArrayForKey:(id)arg1;	// IMP=0x000000000023b5ca
- (id)vn_decodeEntityUniqueIdentifierForKey:(id)arg1;	// IMP=0x000000000023b55c
- (void)vn_encodeEntityUniqueIdentifierArray:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000023b54a
- (void)vn_encodeEntityUniqueIdentifier:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000023b538
- (id)vn_decodePersonUniqueIdentifierForKey:(id)arg1;	// IMP=0x0000000000246029
- (void)vn_encodePersonUniqueIdentifier:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000246017
@end

