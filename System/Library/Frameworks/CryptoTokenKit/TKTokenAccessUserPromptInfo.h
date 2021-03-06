//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface TKTokenAccessUserPromptInfo : NSObject <NSSecureCoding>
{
    NSString *_clientDisplayName;	// 8 = 0x8
    NSString *_providerDisplayName;	// 16 = 0x10
    NSUUID *_correlationID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002b414
- (void).cxx_destruct;	// IMP=0x000000000002b5cd
@property(readonly, nonatomic) NSUUID *correlationID; // @synthesize correlationID=_correlationID;
@property(readonly, nonatomic) NSString *providerDisplayName; // @synthesize providerDisplayName=_providerDisplayName;
@property(readonly, nonatomic) NSString *clientDisplayName; // @synthesize clientDisplayName=_clientDisplayName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b52c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b41c
- (id)initWithTokenAccessRequest:(id)arg1;	// IMP=0x000000000002b2c5

@end

