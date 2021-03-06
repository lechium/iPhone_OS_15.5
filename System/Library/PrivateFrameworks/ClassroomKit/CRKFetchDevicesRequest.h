//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSArray;

@interface CRKFetchDevicesRequest : CATTaskRequest
{
    NSArray *_deviceIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001007c
+ (Class)whitelistedClassForResultObject;	// IMP=0x000000000001006b
- (void).cxx_destruct;	// IMP=0x0000000000010233
@property(copy, nonatomic) NSArray *deviceIdentifiers; // @synthesize deviceIdentifiers=_deviceIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010176
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010084

@end

