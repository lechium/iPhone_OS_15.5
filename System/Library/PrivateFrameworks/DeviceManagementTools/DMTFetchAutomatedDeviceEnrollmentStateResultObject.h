//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@interface DMTFetchAutomatedDeviceEnrollmentStateResultObject : CATTaskResultObject
{
    long long _enrollmentState;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005c3f
@property(nonatomic) long long enrollmentState; // @synthesize enrollmentState=_enrollmentState;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005cfd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005c47

@end

