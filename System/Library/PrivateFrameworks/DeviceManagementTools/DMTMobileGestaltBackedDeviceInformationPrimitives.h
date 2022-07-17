//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagementTools/DMTDeviceInformationPrimitives-Protocol.h>

@class NSString;

@interface DMTMobileGestaltBackedDeviceInformationPrimitives : NSObject <DMTDeviceInformationPrimitives>
{
    NSString *_serialNumber;	// 8 = 0x8
    NSString *_deviceUDID;	// 16 = 0x10
    NSString *_modelIdentifier;	// 24 = 0x18
    NSString *_marketingModelName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005408
@property(readonly, copy, nonatomic) NSString *marketingModelName; // @synthesize marketingModelName=_marketingModelName;
@property(readonly, copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly, copy, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
