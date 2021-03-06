//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXMSemanticTextFactory, NSMeasurementFormatter, NSNumberFormatter;

@interface AXMTextLayoutManager : NSObject
{
    AXMSemanticTextFactory *_semanticTextFactory;	// 8 = 0x8
    NSNumberFormatter *_numberFormatter;	// 16 = 0x10
    NSMeasurementFormatter *_measurementFormatter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000053684
@property(retain, nonatomic) NSMeasurementFormatter *measurementFormatter; // @synthesize measurementFormatter=_measurementFormatter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory; // @synthesize semanticTextFactory=_semanticTextFactory;
- (id)processMeasurement:(id)arg1;	// IMP=0x0000000000053089
- (id)processFraction:(id)arg1;	// IMP=0x0000000000052e0c
- (id)processNutritionLabelText:(id)arg1;	// IMP=0x0000000000052adc
- (id)featureCellsForNutritionLabelRows:(id)arg1 withRequestHandler:(id)arg2 withCanvasSize:(struct CGSize)arg3;	// IMP=0x0000000000052055
- (id)textColumnsForTable:(id)arg1 sourceImage:(id)arg2 requestHandler:(id)arg3 canvasSize:(struct CGSize)arg4;	// IMP=0x0000000000051649
- (id)textRowsForTable:(id)arg1 sourceImage:(id)arg2 requestHandler:(id)arg3 canvasSize:(struct CGSize)arg4;	// IMP=0x0000000000050b6c
- (id)getReceiptRows:(id)arg1 preferredLocales:(id)arg2 canvasSize:(struct CGSize)arg3;	// IMP=0x000000000005009a
- (id)nutritionLabelRowsForContourResults:(id)arg1 normalizedNutritionLabelFrame:(struct CGRect)arg2 fullImageFrame:(struct CGRect)arg3 processedImageFrame:(struct CGRect)arg4;	// IMP=0x000000000004fcfb
- (_Bool)verifyTable:(id)arg1 sortedColumns:(id)arg2;	// IMP=0x000000000004f924
- (id)getTableColumns:(id)arg1;	// IMP=0x000000000004f434
- (id)getTableRows:(id)arg1;	// IMP=0x000000000004ef44
- (id)sortContourColumnResults:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3;	// IMP=0x000000000004ec1c
- (id)sortContourRowResults:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 minWidth:(double)arg4 minHeight:(double)arg5;	// IMP=0x000000000004e88c
- (_Bool)hasConsecutiveDigits:(id)arg1 withLength:(unsigned long long)arg2;	// IMP=0x000000000004e781
- (_Bool)hasConsecutiveCharacters:(id)arg1 withLength:(unsigned long long)arg2;	// IMP=0x000000000004e676
- (id)filterReceiptForGarbageText:(id)arg1;	// IMP=0x000000000004e27e
- (id)processReceiptText:(id)arg1 foundMerchantName:(_Bool *)arg2 preferredLocales:(id)arg3;	// IMP=0x000000000004d253
- (struct CGRect)imageRectForNormalizedRect:(struct CGRect)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3;	// IMP=0x000000000004d1f8
- (_Bool)isBoundary:(struct CGRect)arg1 withinBoundary:(struct CGRect)arg2 withNormalizedThreshold:(double)arg3;	// IMP=0x000000000004d0c3
- (_Bool)isBoundary:(struct CGRect)arg1 withinNormalizedDistance:(double)arg2 ofBoundary:(struct CGRect)arg3;	// IMP=0x000000000004d051
- (struct CGRect)detectCenterContourFromContours:(id)arg1 withImageExtent:(struct CGRect)arg2;	// IMP=0x000000000004cd25
- (id)largestDetectedContoursForImage:(id)arg1;	// IMP=0x000000000004c509
- (id)preprocessReceipt:(id)arg1 withTextSkew:(double)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 metrics:(id)arg5 requestHandler:(id)arg6 finalFrame:(struct CGRect *)arg7;	// IMP=0x000000000004c157
- (id)preprocessNutritionLabel:(id)arg1 finalFrame:(struct CGRect *)arg2;	// IMP=0x000000000004b9c6
- (id)preprocessTable:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 metrics:(id)arg4;	// IMP=0x000000000004aeb4
- (id)documentWithReceipt:(id)arg1 withTextSkew:(double)arg2 canvasSize:(struct CGSize)arg3 preferredLocales:(id)arg4 requestHandler:(id)arg5 metrics:(id)arg6 error:(id *)arg7;	// IMP=0x0000000000049eda
- (id)documentWithNutritionLabel:(id)arg1 canvasSize:(struct CGSize)arg2 requestHandler:(id)arg3 metrics:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000492de
- (id)documentWithTable:(id)arg1 canvasSize:(struct CGSize)arg2 preferredLocales:(id)arg3 requestHandler:(id)arg4 metrics:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000047aa3
- (id)extractDataFromEnvelopeWithFeatures:(id)arg1 preferredLocales:(id)arg2 canvasSize:(struct CGSize)arg3;	// IMP=0x0000000000046ced
- (id)envelopeWithTextFeatures:(id)arg1 canvasSize:(struct CGSize)arg2 preferredLocales:(id)arg3 applySemanticAnalysis:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000045f70
- (id)documentWithTextFeatures:(id)arg1 canvasSize:(struct CGSize)arg2 preferredLocales:(id)arg3 applySemanticAnalysis:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000000454b6
- (id)_assembleReceipt:(id)arg1;	// IMP=0x00000000000451da
- (id)_assembleNutritionLabelLayoutWithRows:(id)arg1;	// IMP=0x0000000000044efe
- (id)_assembleLayoutTable:(id)arg1 header:(id)arg2 columnItems:(id)arg3;	// IMP=0x0000000000044a14
- (id)_assembleLayoutRowFromCell:(id)arg1;	// IMP=0x0000000000044943
- (id)_assembleLayoutColumn:(id)arg1;	// IMP=0x000000000004468d
- (id)_assembleLayoutHeader:(id)arg1;	// IMP=0x000000000004442e
- (id)_assembleLayoutRow:(id)arg1;	// IMP=0x00000000000441cf
- (id)_assembleLayoutCellsWithFeatures:(id)arg1;	// IMP=0x000000000004400d
- (id)_assembleLayoutRegions:(id)arg1;	// IMP=0x00000000000438ee
- (id)_assembleLayoutLines:(id)arg1;	// IMP=0x0000000000043244
- (id)_assembleLayoutSequences:(id)arg1;	// IMP=0x0000000000043082
- (id)receiptRegularExpressions;	// IMP=0x0000000000042e20
- (id)measurementAbbreviationsToVerboseString;	// IMP=0x000000000004275a
- (id)fractionDenominatorValues;	// IMP=0x000000000004234b
- (id)fractionDenominatorValuesWithOneAsNumerator;	// IMP=0x0000000000041f3c
- (id)initWithSemanticTextFactory:(id)arg1;	// IMP=0x0000000000041e32

@end

