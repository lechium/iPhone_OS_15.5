//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSString;

@interface CRKSetAirPlayRouteRequest : CATTaskRequest
{
    _Bool _suppressPasscodePrompt;	// 8 = 0x8
    NSString *_routeUID;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a6e57
- (void).cxx_destruct;	// IMP=0x00000000000a717c
@property(nonatomic) _Bool suppressPasscodePrompt; // @synthesize suppressPasscodePrompt=_suppressPasscodePrompt;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a6ff8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a6e5f

@end
