//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkAssertion : NSObject <NSSecureCoding>
{
    NSString *_assertionID;	// 8 = 0x8
    RPCompanionLinkClient *_client;	// 16 = 0x10
    NSString *_destinationID;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c96d
- (void).cxx_destruct;	// IMP=0x000000000000cc74
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *assertionID; // @synthesize assertionID=_assertionID;
- (void)invalidate;	// IMP=0x000000000000cbf5
- (id)description;	// IMP=0x000000000000cb31
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000caae
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c975

@end
