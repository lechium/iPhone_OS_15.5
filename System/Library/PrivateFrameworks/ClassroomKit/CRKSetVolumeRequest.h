//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@interface CRKSetVolumeRequest : CATTaskRequest
{
    double _volume;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003db42
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003dc01
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003db4a

@end
