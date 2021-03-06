//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessory, HSSetupStateMachine, HSSetupStateMachineConfiguration, NSString;

@interface HSAccessoryTuple : NSObject
{
    NSString *_titleForAccessory;	// 8 = 0x8
    HSSetupStateMachine *_stateMachine;	// 16 = 0x10
    HSSetupStateMachineConfiguration *_configuration;	// 24 = 0x18
    long long _currentStep;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000523f8
@property(nonatomic) long long currentStep; // @synthesize currentStep=_currentStep;
@property(retain) HSSetupStateMachineConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) HSSetupStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSString *titleForAccessory; // @synthesize titleForAccessory=_titleForAccessory;
@property(readonly, nonatomic, getter=isSetupComplete) _Bool setupComplete;
- (id)_moveToNextStep;	// IMP=0x0010000000051fc0
- (id)moveToNextStep;	// IMP=0x0010000000051fae
- (id)titleForAccessoryWithDefaultValue:(id)arg1;	// IMP=0x0010000000051b36
@property(readonly, nonatomic) NSString *userFriendlyAccessoryLocalizedLowercaseDescription;
@property(readonly, nonatomic) NSString *userFriendlyAccessoryLocalizedCapitalizedDescription;
@property(readonly, nonatomic) NSString *accessoryCategoryOrPrimaryServiceType;
@property(retain, nonatomic) HMAccessory *accessory;
- (id)description;	// IMP=0x00100000000516c2

@end

