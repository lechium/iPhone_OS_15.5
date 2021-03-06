//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStroke-Protocol.h>

@class CHEncodedStrokeIdentifier, NSString, PKStroke, PKStrokeProviderSliceIdentifier;
@protocol CHStrokeIdentifier;

@interface PKStrokeProviderSlice : NSObject <CHStroke>
{
    CHEncodedStrokeIdentifier *_encodedStrokeIdentifier;	// 8 = 0x8
    PKStrokeProviderSliceIdentifier *_identifier;	// 16 = 0x10
    PKStroke *_stroke;	// 24 = 0x18
    struct CGRect _bounds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003e767
@property(readonly, nonatomic) PKStroke *stroke; // @synthesize stroke=_stroke;
@property(readonly, nonatomic) PKStrokeProviderSliceIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e0c9
- (void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003db2c
- (double)_strokeLength;	// IMP=0x000000000003da59
- (long long)_lastPointIndex;	// IMP=0x000000000003d997
- (long long)_firstPointIndex;	// IMP=0x000000000003d93d
- (double)_lengthOfSplineSegment:(unsigned long long)arg1;	// IMP=0x000000000003d895
- (double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2;	// IMP=0x000000000003d773
- (struct CGPoint)_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2;	// IMP=0x000000000003d6ae
- (struct CGPoint)_splineControlPoint:(long long)arg1;	// IMP=0x000000000003d40a
- (long long)compareTo:(id)arg1;	// IMP=0x000000000003d222
@property(readonly, nonatomic) unsigned long long strokeAttributes;
@property(readonly, nonatomic) double endTimestamp;
@property(readonly, nonatomic) double startTimestamp;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) CHEncodedStrokeIdentifier *encodedStrokeIdentifier; // @synthesize encodedStrokeIdentifier=_encodedStrokeIdentifier;
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) id <CHStrokeIdentifier> strokeIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003c82d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000003c7ae
- (id)initWithStroke:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3;	// IMP=0x000000000003c6cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

