//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface REMOrderedIdentifierMap : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_orderedIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000089bd8
- (void).cxx_destruct;	// IMP=0x0000000000089f06
@property(retain, nonatomic) NSArray *orderedIdentifiers; // @synthesize orderedIdentifiers=_orderedIdentifiers;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000089e35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000089da8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000089d1b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000089ca2
- (id)initWithOrderedIdentifiers:(id)arg1;	// IMP=0x0000000000089c3a
- (id)init;	// IMP=0x0000000000089be0

@end

