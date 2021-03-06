//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFContactInfo : NSObject <NSSecureCoding>
{
    NSString *_contactIdentifier;	// 8 = 0x8
    NSString *_emailAddress;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008d618
- (void).cxx_destruct;	// IMP=0x000000000008d827
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008d759
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008d620

@end

