//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying>
{
    TSTLayout *mLayout;	// 8 = 0x8
    int mKind;	// 16 = 0x10
    CDStruct_5f1f7aa9 *mCellRanges;	// 24 = 0x18
    unsigned long long mCellRangeCount;	// 32 = 0x20
    unsigned long long mStageCount;	// 40 = 0x28
    unsigned long long mStage;	// 48 = 0x30
    _Bool mFinal;	// 56 = 0x38
    _Bool mByColumn;	// 57 = 0x39
    _Bool mByRow;	// 58 = 0x3a
    _Bool mByCell;	// 59 = 0x3b
    _Bool mByContent;	// 60 = 0x3c
    _Bool mByCellRange;	// 61 = 0x3d
    _Bool mByMissingCellRange;	// 62 = 0x3e
    _Bool mReverse;	// 63 = 0x3f
    _Bool mShowsTableChrome;	// 64 = 0x40
    _Bool mShowsOverlayLayers;	// 65 = 0x41
    _Bool mExpandBackgroundFill;	// 66 = 0x42
    _Bool mDrawsBlackAndWhite;	// 67 = 0x43
}

+ (_Bool)deliveryStyleSupportedForExport:(unsigned long long)arg1;	// IMP=0x0000000000384a39
+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;	// IMP=0x0000000000384978
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 andTable:(id)arg2;	// IMP=0x00000000003848c8
+ (id)textureDeliveryStylesLocalized:(_Bool)arg1;	// IMP=0x00000000003846a6
+ (id)newAnimationWithLayout:(id)arg1 andCellRange:(CDStruct_5f1f7aa9)arg2;	// IMP=0x0000000000384538
+ (id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2;	// IMP=0x00000000003843d4
@property _Bool drawsBlackAndWhite; // @synthesize drawsBlackAndWhite=mDrawsBlackAndWhite;
@property _Bool expandBackgroundFill; // @synthesize expandBackgroundFill=mExpandBackgroundFill;
@property _Bool showsOverlayLayers; // @synthesize showsOverlayLayers=mShowsOverlayLayers;
@property _Bool showsTableChrome; // @synthesize showsTableChrome=mShowsTableChrome;
@property(readonly) _Bool final; // @synthesize final=mFinal;
@property(readonly) unsigned long long stage; // @synthesize stage=mStage;
@property(readonly) unsigned long long stageCount; // @synthesize stageCount=mStageCount;
@property(readonly) _Bool drawStrokes;
@property(readonly) _Bool clipStrokes;
@property(readonly) _Bool drawCellContent;
@property(readonly) _Bool drawCellBackground;
@property(readonly) _Bool drawTableBackground;
@property(readonly) _Bool drawTableName;
@property(readonly) _Bool enabled;
- (void)clearCellRanges;	// IMP=0x0000000000385568
- (void)addCellRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x0000000000385500
@property(readonly) unsigned long long cellRangeCount;
- (CDStruct_5f1f7aa9)cellRangeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000384a6f
- (void)setStage:(unsigned long long)arg1 andFinal:(_Bool)arg2;	// IMP=0x0000000000384a5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003845c8
- (void)dealloc;	// IMP=0x0000000000384589

@end
