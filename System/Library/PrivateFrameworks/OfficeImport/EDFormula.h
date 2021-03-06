//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDFormulaBuilding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDFormula : NSObject <EDFormulaBuilding>
{
    struct __CFData *mPackedData;	// 8 = 0x8
}

+ (id)formula;	// IMP=0x0000000000139d0e
- (_Bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;	// IMP=0x00000000003a9eeb
- (_Bool)uppercaseArgAtIndex:(unsigned int)arg1;	// IMP=0x00000000003a9ee3
- (_Bool)fixTableOfConstantsRefs;	// IMP=0x00000000003a9edb
- (_Bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;	// IMP=0x00000000003a9ed3
- (_Bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;	// IMP=0x00000000003a9ecb
- (_Bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;	// IMP=0x00000000003a9ec3
- (void)markLastTokenAsSpanningRefVertically:(_Bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;	// IMP=0x00000000003a9ebd
- (void)markLastTokenAsDuration;	// IMP=0x00000000003a9eb7
- (_Bool)convertToIntersect:(unsigned int)arg1;	// IMP=0x00000000003a9eaf
@property(readonly, copy) NSString *description;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(_Bool *)arg1 withEDLinks:(id)arg2;	// IMP=0x00000000003a9d38
- (_Bool)convertLastRefsToArea;	// IMP=0x00000000003a9c04
- (_Bool)convertToList:(unsigned int)arg1 withFinalParen:(_Bool)arg2;	// IMP=0x00000000003a9848
- (_Bool)convertToList:(unsigned int)arg1;	// IMP=0x00000000003a9831
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;	// IMP=0x0000000000246e2c
- (_Bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;	// IMP=0x0000000000246d96
- (_Bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;	// IMP=0x00000000003a9733
- (id)saveArgs:(unsigned int)arg1 andDelete:(_Bool)arg2;	// IMP=0x00000000003a95e8
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg1;	// IMP=0x00000000003a9509
- (_Bool)isBaseFormula;	// IMP=0x00000000003a9501
- (_Bool)isSharedFormula;	// IMP=0x00000000003a94f9
- (void)updateCleanedWithEvaluationStack:(_Bool)arg1;	// IMP=0x000000000018ffa9
- (_Bool)isCleanedWithEvaluationStack;	// IMP=0x000000000018ff84
- (void)updateContainsRelativeReferences:(_Bool)arg1;	// IMP=0x000000000014ce64
- (_Bool)isContainsRelativeReferences;	// IMP=0x000000000014d720
- (void)setCleaned:(_Bool)arg1;	// IMP=0x000000000014d023
- (_Bool)isCleaned;	// IMP=0x000000000014fc51
- (_Bool)isSupportedFormula;	// IMP=0x000000000014fc2d
- (void)setWarningParameter:(id)arg1;	// IMP=0x0000000000230574
- (id)warningParameter;	// IMP=0x00000000003a94aa
- (void)setWarning:(int)arg1;	// IMP=0x0000000000151375
- (id)warning;	// IMP=0x000000000014d373
- (int)warningType;	// IMP=0x000000000014d3ab
- (void)setOriginalFormulaString:(id)arg1;	// IMP=0x00000000001fa180
- (id)originalFormulaString;	// IMP=0x0000000000211839
- (_Bool)convertTokensToSharedAtRow:(unsigned int)arg1 column:(unsigned int)arg2;	// IMP=0x00000000003a9351
- (void *)xlPtgs;	// IMP=0x00000000003a90fc
- (void)populateXlPtg:(struct XlPtg *)arg1 index:(unsigned int)arg2;	// IMP=0x00000000003a9041
- (_Bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned int)arg3;	// IMP=0x000000000018fbf6
- (_Bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2;	// IMP=0x00000000003a8e38
- (_Bool)removeTokenAtIndex:(unsigned int)arg1;	// IMP=0x0000000000240792
- (void)removeAllTokens;	// IMP=0x0000000000182f06
- (_Bool)copyTokenFromXlPtg:(struct XlPtg *)arg1;	// IMP=0x000000000013b836
- (_Bool)copyTokenAtIndex:(unsigned int)arg1 fromFormula:(id)arg2;	// IMP=0x00000000001f9dea
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;	// IMP=0x000000000013bad9
- (char *)setExtendedDataAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int)arg3;	// IMP=0x000000000013bc04
- (_Bool)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;	// IMP=0x000000000013b976
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;	// IMP=0x00000000001f9cb8
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;	// IMP=0x00000000001fa626
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg1;	// IMP=0x00000000003a8dcd
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg1 length:(unsigned int *)arg2;	// IMP=0x000000000014cb81
- (char *)extendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int *)arg3;	// IMP=0x0000000000246e75
- (void)replaceTokenTypeAtIndex:(unsigned int)arg1 withType:(int)arg2;	// IMP=0x00000000003a8da1
- (int)tokenTypeAtIndex:(unsigned int)arg1;	// IMP=0x000000000014ca82
- (unsigned int)tokenCount;	// IMP=0x000000000014ca5b
- (_Bool)setupTokensWithTokensCount:(unsigned int)arg1 tokensWithDataCount:(unsigned int)arg2 extendedDataLength:(unsigned int)arg3 extendedDataCount:(unsigned int)arg4;	// IMP=0x0000000000139dab
- (void)dealloc;	// IMP=0x000000000014d7e8
- (id)initWithFormula:(id)arg1;	// IMP=0x000000000014d744
- (id)init;	// IMP=0x0000000000139d30
- (struct EDToken *)tokenAtIndex:(unsigned int)arg1;	// IMP=0x000000000013bdf3
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;	// IMP=0x00000000003a9f61
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;	// IMP=0x00000000003a9ef9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

