//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface DMFSendEventRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    NSString *_inReplyTo;	// 16 = 0x10
    NSString *_eventType;	// 24 = 0x18
    NSDictionary *_details;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000038b96
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000038b8e
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000038b86
+ (id)permittedPlatforms;	// IMP=0x0000000000038b79
- (void).cxx_destruct;	// IMP=0x0000000000039079
@property(copy, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038eab
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038b9e

@end

