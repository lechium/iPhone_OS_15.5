//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesResultObject : CATTaskResultObject
{
    NSString *_serialNumber;	// 8 = 0x8
    NSString *_deviceUDID;	// 16 = 0x10
    NSString *_modelIdentifier;	// 24 = 0x18
    NSString *_modelName;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fd09
- (void).cxx_destruct;	// IMP=0x0000000000010110
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(copy, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ff42
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fd11

@end
