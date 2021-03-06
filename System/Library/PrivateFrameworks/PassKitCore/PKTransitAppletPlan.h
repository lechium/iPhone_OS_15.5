//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PKTransitAppletPlan : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_commutePlanIdentifier;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029f7f6
- (void).cxx_destruct;	// IMP=0x000000000029fa09
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *commutePlanIdentifier; // @synthesize commutePlanIdentifier=_commutePlanIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029f8fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029f88f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029f7fe
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000029f7c7

@end

