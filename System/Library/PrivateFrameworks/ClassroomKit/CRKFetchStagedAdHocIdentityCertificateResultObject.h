//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSData;

@interface CRKFetchStagedAdHocIdentityCertificateResultObject : CATTaskResultObject
{
    NSData *_stagedAdHocIdentityCertificate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000083547
- (void).cxx_destruct;	// IMP=0x00000000000836e3
@property(copy, nonatomic) NSData *stagedAdHocIdentityCertificate; // @synthesize stagedAdHocIdentityCertificate=_stagedAdHocIdentityCertificate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000083626
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008354f

@end

