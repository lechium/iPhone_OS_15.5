//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhysicsKit/PKPhysicsBody.h>

__attribute__((visibility("hidden")))
@interface PKExtendedPhysicsBody : PKPhysicsBody
{
    long long _associations;	// 8 = 0x8
    double _areaFactor;	// 16 = 0x10
}

+ (id)bodyWithBodies:(id)arg1;	// IMP=0x0000000000610204
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;	// IMP=0x00000000006101ce
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;	// IMP=0x0000000000610198
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;	// IMP=0x0000000000610162
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x0000000000610109
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;	// IMP=0x00000000006100b0
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;	// IMP=0x000000000061006b
+ (id)bodyWithCircleOfRadius:(double)arg1;	// IMP=0x0000000000610030
+ (id)bodyWithEllipseInRect:(struct CGRect)arg1;	// IMP=0x000000000060ff40
- (_Bool)dissociate;	// IMP=0x000000000061069c
- (void)associate;	// IMP=0x000000000061068b
- (id)description;	// IMP=0x000000000061041b
- (id)initWithRectangleOfSize:(struct CGSize)arg1;	// IMP=0x0000000000610347
@property(nonatomic) double normalizedDensity;
- (id)init;	// IMP=0x0000000000610251

@end
