//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol DMTDeviceInformationPrimitives;

__attribute__((visibility("hidden")))
@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesOperation
{
    id <DMTDeviceInformationPrimitives> _deviceInformationPrimitives;	// 8 = 0x8
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000054ea
- (void).cxx_destruct;	// IMP=0x00000000000057a1
@property(readonly, nonatomic) id <DMTDeviceInformationPrimitives> deviceInformationPrimitives; // @synthesize deviceInformationPrimitives=_deviceInformationPrimitives;
- (void)runWithRequest:(id)arg1;	// IMP=0x000000000000558f
- (id)initWithRequest:(id)arg1 deviceInformationPrimitives:(id)arg2;	// IMP=0x0000000000005472

@end
