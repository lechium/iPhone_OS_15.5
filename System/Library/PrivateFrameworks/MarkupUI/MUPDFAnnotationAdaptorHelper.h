//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPDFAnnotationAdaptorHelper : NSObject
{
}

+ (_Bool)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFAnnotation:(struct CGPDFAnnotation *)arg2;	// IMP=0x000000000001a302
+ (id)_colorFromAppearanceTokens:(id)arg1;	// IMP=0x000000000001a0b1
+ (id)_fontNameFromAppearanceTokens:(id)arg1;	// IMP=0x0000000000019f4e
+ (double)_pointSizeFromAppearanceTokens:(id)arg1;	// IMP=0x0000000000019e48
+ (id)_tokenizeAppearanceString:(id)arg1;	// IMP=0x0000000000019d01
+ (id)_getColorFromAppearanceString:(struct CGPDFString *)arg1;	// IMP=0x0000000000019c7f
+ (id)_getFontFromAppearanceString:(struct CGPDFString *)arg1 ofPDFPage:(struct CGPDFPage *)arg2;	// IMP=0x0000000000019872
+ (id)_colorFromPDFArray:(struct CGPDFArray *)arg1;	// IMP=0x00000000000196f8
+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary *)arg2;	// IMP=0x00000000000194ca
+ (id)newAKAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation *)arg1;	// IMP=0x0000000000019280
+ (void)addQuaddingOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x000000000001913a
+ (void)addDefaultAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0000000000018962
+ (void)addAppearanceStreamOfAnnotation:(id)arg1 forPage:(struct CGPDFPage *)arg2 toDictionary:(id)arg3;	// IMP=0x000000000001869d
+ (void)addRGBColor:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3;	// IMP=0x00000000000184e0
+ (void)addBorderStyleOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0000000000018266
+ (void)addString:(id)arg1 toDictionary:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000018184
+ (void)addTextOfAnnotation:(id)arg1 toDictionary:(id)arg2 forKey:(id)arg3 canUsePlaceholder:(_Bool)arg4;	// IMP=0x0000000000018098
+ (void)addContentsStringOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0000000000017f36
+ (void)addFlagsOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0000000000017eb4
+ (void)addTextLabelOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0000000000017eae
+ (void)addModificationDateOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0000000000017e09
+ (void)addBoundsOfAnnotation:(id)arg1 forPage:(struct CGPDFPage *)arg2 toDictionary:(id)arg3;	// IMP=0x0000000000017b9f
+ (void)readQuaddingFromPDFDictionary:(struct CGPDFDictionary *)arg1 toDictionary:(id)arg2;	// IMP=0x0000000000017a9a
+ (void)readDefaultAppearanceStringFromPDFDictionary:(struct CGPDFDictionary *)arg1 ofPage:(struct CGPDFPage *)arg2 toDictionary:(id)arg3;	// IMP=0x00000000000179a6
+ (id)getFullFieldNameFromAnnotationDictionary:(struct CGPDFDictionary *)arg1;	// IMP=0x00000000000177e4
+ (id)getTextStringForKey:(const char *)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2;	// IMP=0x00000000000177a0
+ (id)getRGBColorForKey:(const char *)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2;	// IMP=0x000000000001774c
+ (void)migrateAKTextAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;	// IMP=0x00000000000173d8
+ (void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;	// IMP=0x000000000001736a
+ (void)migrateAKFilledAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;	// IMP=0x00000000000172d9
+ (void)migrateAKStrokedAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;	// IMP=0x00000000000171b5
+ (void)migrateAppearanceStreamFromCGPDFAnnotationDict:(struct CGPDFDictionary *)arg1 toAKAnnotation:(id)arg2 compensatingForPageRotation:(unsigned long long)arg3;	// IMP=0x0000000000016b12

@end
