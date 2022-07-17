//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@class HKHealthStore;

@interface WFHealthKitAccessResource : WFAccessResource
{
    unsigned long long _status;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
}

+ (_Bool)isSystemResource;	// IMP=0x0000000000199467
+ (_Bool)alwaysMakeAvailable;	// IMP=0x000000000019945f
- (void).cxx_destruct;	// IMP=0x0000000000198f7f
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (unsigned long long)status;	// IMP=0x0000000000198f5d
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000198e1e
- (id)errorRecoveryOptionsForStatus:(unsigned long long)arg1;	// IMP=0x0000000000198d7f
- (id)localizedImportErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x0000000000198d6d
- (id)importErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x0000000000198ccb
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x0000000000198cb9
- (id)errorReasonForStatus:(unsigned long long)arg1;	// IMP=0x0000000000198c05
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000198a48
- (void)refreshAvailability;	// IMP=0x00000000001984b0
- (id)readableUnauthorizedResourceDescription;	// IMP=0x0000000000198326
- (id)writeTypes;	// IMP=0x000000000019830d
- (id)readTypes;	// IMP=0x00000000001982f4
- (id)objectTypes;	// IMP=0x00000000001982e0
- (id)objectTypesForAccessType:(id)arg1;	// IMP=0x00000000001979c3
- (id)initWithDefinition:(id)arg1;	// IMP=0x0000000000197944
- (id)protectedResourceDescription;	// IMP=0x0000000000197937
- (id)associatedAppIdentifier;	// IMP=0x000000000019792a

@end
