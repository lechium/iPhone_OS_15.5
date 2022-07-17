//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, NSDictionary;

@interface MNTransitStepInstruction
{
    GEOComposedRouteStep *_step;	// 96 = 0x60
    NSDictionary *_overridenInstructionsMapping;	// 104 = 0x68
}

+ (id)instructionForStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3;	// IMP=0x0000000000004bd3
+ (id)instructionForStep:(id)arg1 context:(long long)arg2;	// IMP=0x0000000000004bbc
- (void).cxx_destruct;	// IMP=0x0000000000004d56
@property(readonly, nonatomic) NSDictionary *overridenInstructionsMapping; // @synthesize overridenInstructionsMapping=_overridenInstructionsMapping;
@property(readonly, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
- (id)instructionSet;	// IMP=0x0000000000004d17
- (id)initWithStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3;	// IMP=0x0000000000004c4e

@end
