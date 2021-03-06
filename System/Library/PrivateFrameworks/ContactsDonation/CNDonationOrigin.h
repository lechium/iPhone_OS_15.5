//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsDonation/NSCopying-Protocol.h>
#import <ContactsDonation/NSMutableCopying-Protocol.h>
#import <ContactsDonation/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface CNDonationOrigin : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_donationIdentifier;	// 16 = 0x10
    NSString *_clusterIdentifier;	// 24 = 0x18
    NSDate *_donationDate;	// 32 = 0x20
    NSDate *_expirationDate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000279f
+ (id)originWithUpdatedDonationIdentifier:(id)arg1 fromOrigin:(id)arg2;	// IMP=0x0000000000001806
- (void).cxx_destruct;	// IMP=0x0000000000002bed
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSDate *donationDate; // @synthesize donationDate=_donationDate;
@property(readonly, copy, nonatomic) NSString *clusterIdentifier; // @synthesize clusterIdentifier=_clusterIdentifier;
@property(readonly, copy, nonatomic) NSString *donationIdentifier; // @synthesize donationIdentifier=_donationIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x00000000000027a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000026f6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002586
- (unsigned long long)hash;	// IMP=0x000000000000223f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001cfc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001cce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001cc3
- (id)description;	// IMP=0x0000000000001b16
- (id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 clusterIdentifier:(id)arg3 donationDate:(id)arg4 expirationDate:(id)arg5;	// IMP=0x000000000000186c
- (id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 donationDate:(id)arg3 expirationDate:(id)arg4;	// IMP=0x00000000000017da
- (id)initWithDonationOrigin:(id)arg1;	// IMP=0x00000000000016ce

@end

