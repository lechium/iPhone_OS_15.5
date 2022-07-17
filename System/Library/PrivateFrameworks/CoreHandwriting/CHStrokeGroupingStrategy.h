//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingStrategy : NSObject
{
    id <CHStrokeProvider> _strokeProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000100a0
@property(readonly, nonatomic) id <CHStrokeProvider> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
- (id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2;	// IMP=0x000000000000f840
- (void)getFirstStrokeIdentifier:(id *)arg1 lastStrokeIdentifier:(id *)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5;	// IMP=0x000000000000ec70
- (id)strokesForIdentifiers:(id)arg1;	// IMP=0x000000000000e850
@property(readonly, nonatomic) NSString *strategyIdentifier;
- (id)initWithStrokeProvider:(id)arg1;	// IMP=0x000000000000e7c0
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;	// IMP=0x0000000000010120
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000100b0

@end
