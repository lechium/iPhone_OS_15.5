//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SAPersonAttribute;

@interface SAPhoneClientCoordinationPhoneCall
{
}

+ (id)clientCoordinationPhoneCallWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000ff5e
+ (id)clientCoordinationPhoneCall;	// IMP=0x000000000000ff4c
- (_Bool)requiresResponse;	// IMP=0x000000000000ffac
@property(nonatomic) _Bool emergencyCall;
@property(retain, nonatomic) SAPersonAttribute *callRecipient;
- (id)encodedClassName;	// IMP=0x000000000000ff3f
- (id)groupIdentifier;	// IMP=0x000000000000ff2b

@end

