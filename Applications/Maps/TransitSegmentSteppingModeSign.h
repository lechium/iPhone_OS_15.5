//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteSegment, GEOComposedRouteStep, GEOComposedTransitTripRouteStep, MNTransitInstruction, MergedTransitRoutingIncidentMessage;
@protocol GEOServerFormattedString, GEOTransitRoutingIncidentMessage;

__attribute__((visibility("hidden")))
@interface TransitSegmentSteppingModeSign : NSObject
{
    MergedTransitRoutingIncidentMessage *_incidentMessage;	// 8 = 0x8
    _Bool _isMatchedSign;	// 16 = 0x10
    GEOComposedRouteStep *_step;	// 24 = 0x18
    GEOComposedRouteSegment *_segment;	// 32 = 0x20
    MNTransitInstruction *_instruction;	// 40 = 0x28
    struct _NSRange _stepIndexRange;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000004c956c
@property(nonatomic) _Bool isMatchedSign; // @synthesize isMatchedSign=_isMatchedSign;
@property(readonly, nonatomic) MNTransitInstruction *instruction; // @synthesize instruction=_instruction;
@property(nonatomic) struct _NSRange stepIndexRange; // @synthesize stepIndexRange=_stepIndexRange;
@property(readonly, nonatomic) GEOComposedRouteSegment *segment; // @synthesize segment=_segment;
@property(readonly, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *boardClusteredStep;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;
@property(readonly, nonatomic) id <GEOServerFormattedString> tertiaryFormattedInstruction;
@property(readonly, nonatomic) id <GEOServerFormattedString> minorFormattedInstruction;
@property(readonly, nonatomic) id <GEOServerFormattedString> majorFormattedInstruction;
@property(readonly, nonatomic) _Bool hasValidInstructions;
@property(readonly, nonatomic) _Bool isWalking;
- (id)initWithWalkingSegment:(id)arg1 stepIndexRange:(struct _NSRange)arg2;	// IMP=0x00100000004c91a6
- (id)initWithStep:(id)arg1 stepIndexRange:(struct _NSRange)arg2 extraIncident:(id)arg3;	// IMP=0x00100000004c8fd9
- (id)initWithStep:(id)arg1 stepIndexRange:(struct _NSRange)arg2;	// IMP=0x00100000004c8fc4

@end
