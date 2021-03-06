//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSDGradientStopContainer-Protocol.h>

@class NSArray, NSString, TSUColor;

@interface TSDMutableGradient <TSDGradientStopContainer>
{
}

- (void)setFraction:(double)arg1 ofStopAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000ed28c
@property(retain, nonatomic) TSUColor *lastColor;
@property(retain, nonatomic) TSUColor *firstColor;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;	// IMP=0x00000000000ed215
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;	// IMP=0x00000000000ed203
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000ed1f1
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;	// IMP=0x00000000000ed1df
@property(nonatomic) unsigned long long gradientType; // @dynamic gradientType;
- (void)evenlyDistributeStops;	// IMP=0x00000000000ed1bb
- (void)reverseStopOrder;	// IMP=0x00000000000ed1a9
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;	// IMP=0x00000000000ed197
- (id)insertStopAtFraction:(double)arg1;	// IMP=0x00000000000ed185
- (id)removeStopAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ed173
- (void)removeStop:(id)arg1;	// IMP=0x00000000000ed161
- (void)insertGradientStop:(id)arg1;	// IMP=0x00000000000ed14f
@property(retain, nonatomic) NSArray *gradientStops; // @dynamic gradientStops;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAdvancedGradient; // @dynamic isAdvancedGradient;
@property(nonatomic) double opacity; // @dynamic opacity;
@property(readonly) Class superclass;

@end

