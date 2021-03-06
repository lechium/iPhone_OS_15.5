//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTRemotePlanIdentifierList : NSObject <NSSecureCoding>
{
    NSArray *_planIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005af60
- (void).cxx_destruct;	// IMP=0x000000000005b08e
@property(retain, nonatomic) NSArray *planIdentifiers; // @synthesize planIdentifiers=_planIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005b050
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005af68
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005ae4a
- (id)description;	// IMP=0x000000000005adc4
- (id)initWithPlanIdentifiers:(id)arg1;	// IMP=0x000000000005ad59
- (id)init;	// IMP=0x000000000005ad0b

@end

