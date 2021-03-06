//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface SBHHomePullToSearchSettings : PTSettings
{
    double _pullTransitionDistance;	// 8 = 0x8
    double _pullTransitionActivationThreshold;	// 16 = 0x10
    double _pullGestureBeganFromTopLeeway;	// 24 = 0x18
    double _fluidBehaviorDampingRatio;	// 32 = 0x20
    double _fluidBehaviorResponse;	// 40 = 0x28
    double _libraryFluidBehaviorDampingRatio;	// 48 = 0x30
    double _libraryFluidBehaviorResponse;	// 56 = 0x38
}

+ (id)settingsControllerModule;	// IMP=0x00000000001a96f8
@property(nonatomic) double libraryFluidBehaviorResponse; // @synthesize libraryFluidBehaviorResponse=_libraryFluidBehaviorResponse;
@property(nonatomic) double libraryFluidBehaviorDampingRatio; // @synthesize libraryFluidBehaviorDampingRatio=_libraryFluidBehaviorDampingRatio;
@property(nonatomic) double fluidBehaviorResponse; // @synthesize fluidBehaviorResponse=_fluidBehaviorResponse;
@property(nonatomic) double fluidBehaviorDampingRatio; // @synthesize fluidBehaviorDampingRatio=_fluidBehaviorDampingRatio;
@property(nonatomic) double pullGestureBeganFromTopLeeway; // @synthesize pullGestureBeganFromTopLeeway=_pullGestureBeganFromTopLeeway;
@property(nonatomic) double pullTransitionActivationThreshold; // @synthesize pullTransitionActivationThreshold=_pullTransitionActivationThreshold;
@property(nonatomic) double pullTransitionDistance; // @synthesize pullTransitionDistance=_pullTransitionDistance;
- (void)setDefaultValues;	// IMP=0x00000000001a9603

@end

