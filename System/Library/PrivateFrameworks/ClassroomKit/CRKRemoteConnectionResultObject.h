//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@interface CRKRemoteConnectionResultObject : CATTaskResultObject
{
    long long _response;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a305
@property(nonatomic) long long response; // @synthesize response=_response;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a3c3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a30d

@end

