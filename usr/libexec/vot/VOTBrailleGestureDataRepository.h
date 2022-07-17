//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, VOTBrailleGestureHalfPattern;

@interface VOTBrailleGestureDataRepository : NSObject
{
    NSString *_recordedDriftsFilePath;	// 8 = 0x8
    NSString *_calibratedDotPositionsFilePath;	// 16 = 0x10
    long long _typingMode;	// 24 = 0x18
    struct CGSize _keyboardSize;	// 32 = 0x20
    _Bool _shouldUseEightDotBraille;	// 48 = 0x30
    _Bool _areDotNumberPositionsCalibrated;	// 49 = 0x31
    VOTBrailleGestureHalfPattern *_leftDotPositions;	// 56 = 0x38
    VOTBrailleGestureHalfPattern *_rightDotPositions;	// 64 = 0x40
    NSMutableArray *_leftDrifts;	// 72 = 0x48
    NSMutableArray *_rightDrifts;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000010d60e
@property(retain, nonatomic) NSMutableArray *rightDrifts; // @synthesize rightDrifts=_rightDrifts;
@property(retain, nonatomic) NSMutableArray *leftDrifts; // @synthesize leftDrifts=_leftDrifts;
@property(retain, nonatomic) VOTBrailleGestureHalfPattern *rightDotPositions; // @synthesize rightDotPositions=_rightDotPositions;
@property(retain, nonatomic) VOTBrailleGestureHalfPattern *leftDotPositions; // @synthesize leftDotPositions=_leftDotPositions;
- (void)_loadAllDataFromFiles;	// IMP=0x001000000010cce5
- (id)_loadDataFromFile:(id)arg1;	// IMP=0x001000000010cc16
- (void)_repairFileProtectionClassOnPathIfNecessary:(id)arg1;	// IMP=0x001000000010c9b6
- (id)_arrayOfDictionariesFromPointValues:(id)arg1;	// IMP=0x001000000010c80c
- (id)_mutableArrayOfPointValuesFromDictionaries:(id)arg1;	// IMP=0x001000000010c662
- (id)_mutableArrayOfZeroPointValues:(unsigned long long)arg1;	// IMP=0x001000000010c5a6
- (void)_generateInitialData;	// IMP=0x001000000010c581
- (void)_generateScreenAwayInitialData;	// IMP=0x001000000010c2b4
- (void)_getMiddleDotsForSixDotTableTopInitialDataForLeft:(struct CGPoint *)arg1 right:(struct CGPoint *)arg2 angleFromXAxisToLineOfHand:(double)arg3 topLeftDot:(struct CGPoint)arg4;	// IMP=0x001000000010c23d
- (void)_getEightDotTableTopMiddleLeftDot:(struct CGPoint *)arg1 middleRightDot:(struct CGPoint *)arg2 bottomLeftDot:(struct CGPoint *)arg3 bottomRightDot:(struct CGPoint *)arg4 angleFromXAxisToLineOfHand:(double)arg5 topLeftDot:(struct CGPoint)arg6;	// IMP=0x001000000010c15f
- (void)_generateTableTopInitialData;	// IMP=0x001000000010bb88
- (id)_recordedDriftsFilePath;	// IMP=0x001000000010bab5
- (id)_calibratedDotPositionsFilePath;	// IMP=0x001000000010b9e2
- (id);	// IMP=0x001000000010b7d7
- (id)_filenameSuffix;	// IMP=0x001000000010b76c
- (void)_deleteCalibratedData;	// IMP=0x001000000010b627
- (void)_resetLearnedData;	// IMP=0x001000000010b4a4
- (unsigned long long)_totalNumberOfDots;	// IMP=0x001000000010b493
- (id)_adjustPointValue:(id)arg1 withDrift:(struct CGPoint)arg2;	// IMP=0x001000000010b431
- (struct CGPoint)_averageRightDrift;	// IMP=0x001000000010b3cd
- (struct CGPoint)_averageLeftDrift;	// IMP=0x001000000010b369
- (struct CGPoint)_averageRecentDriftFromDrifts:(id)arg1;	// IMP=0x001000000010b29f
- (void)_removeInstanceOfDriftFromArray:(id)arg1;	// IMP=0x001000000010b1d7
- (void)_addInstanceOfDrift:(struct CGPoint)arg1 toArray:(id)arg2 forPattern:(id)arg3;	// IMP=0x001000000010b025
- (struct CGPoint)_driftOfHalfPattern:(id)arg1 relativeToDotPositions:(id)arg2;	// IMP=0x001000000010ad4e
- (struct CGPoint)_driftByAddingDisplacementOfPointValue:(id)arg1 fromPointValue:(id)arg2 toDrift:(struct CGPoint)arg3;	// IMP=0x001000000010ac75
- (_Bool)areDotNumberPositionsCalibrated;	// IMP=0x001000000010ac6c
- (void)calibrateWithDotNumberPositions:(id)arg1;	// IMP=0x001000000010a862
- (_Bool)_allDotsAreOnScreen:(id)arg1 withDrift:(struct CGPoint)arg2;	// IMP=0x001000000010a5a8
- (void)_appendDots:(id)arg1 toPositionsArray:(id)arg2 withDrift:(struct CGPoint)arg3;	// IMP=0x001000000010a3e7
- (void)_orderedLeftDots:(id *)arg1 rightDots:(id *)arg2;	// IMP=0x001000000010a2db
- (id)dotNumberPositions;	// IMP=0x001000000010a1f5
- (_Bool)saveDrift;	// IMP=0x0010000000109ef3
- (void)removeDriftAddedByPattern:(id)arg1;	// IMP=0x0010000000109cca
- (void)updateDriftWithPattern:(id)arg1;	// IMP=0x001000000010990d
- (id)halfPatternsForNumberOfDots:(unsigned long long)arg1 side:(unsigned long long)arg2;	// IMP=0x0010000000109504
- (id)initWithTypingMode:(long long)arg1 keyboardSize:(struct CGSize)arg2 shouldUseEightDotBraille:(_Bool)arg3;	// IMP=0x0010000000109484

@end
