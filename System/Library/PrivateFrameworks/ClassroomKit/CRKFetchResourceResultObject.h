//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject
{
    NSData *_resourceData;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a4928
- (void).cxx_destruct;	// IMP=0x00000000000a4ac7
@property(retain, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a4a07
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a4930

@end
