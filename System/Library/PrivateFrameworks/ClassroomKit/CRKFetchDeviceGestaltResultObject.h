//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class CRKDeviceGestalt;

@interface CRKFetchDeviceGestaltResultObject : CATTaskResultObject
{
    CRKDeviceGestalt *_deviceGestalt;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025bf4
- (void).cxx_destruct;	// IMP=0x0000000000025d93
@property(retain, nonatomic) CRKDeviceGestalt *deviceGestalt; // @synthesize deviceGestalt=_deviceGestalt;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025cd3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025bfc

@end
