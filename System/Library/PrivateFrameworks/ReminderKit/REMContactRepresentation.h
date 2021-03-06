//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface REMContactRepresentation : NSObject <NSSecureCoding>
{
    NSArray *_phones;	// 8 = 0x8
    NSArray *_emails;	// 16 = 0x10
}

+ (id)representationFromData:(id)arg1;	// IMP=0x0000000000090b76
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000090130
- (void).cxx_destruct;	// IMP=0x0000000000090c9f
@property(copy, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;
- (id)archivedData;	// IMP=0x0000000000090b52
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000090a55
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000909a7
- (id)description;	// IMP=0x00000000000908d2
- (unsigned long long)hash;	// IMP=0x0000000000090845
- (_Bool)matchesContactRepresentation:(id)arg1;	// IMP=0x0000000000090364
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000090138
- (id)initWithPhones:(id)arg1 emails:(id)arg2;	// IMP=0x0000000000090077

@end

