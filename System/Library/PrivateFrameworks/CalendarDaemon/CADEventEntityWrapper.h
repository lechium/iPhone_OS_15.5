//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CADEventEntityWrapper
{
    double _occurrenceDate;	// 40 = 0x28
    _Bool _isDropoffEvent;	// 48 = 0x30
    _Bool _isPickupEvent;	// 49 = 0x31
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003fe1c
@property(nonatomic) _Bool isPickupEvent; // @synthesize isPickupEvent=_isPickupEvent;
@property(nonatomic) _Bool isDropoffEvent; // @synthesize isDropoffEvent=_isDropoffEvent;
- (id)occurrenceDate;	// IMP=0x000000000003fff2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003ff30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003fe6e
- (id)initWithCalEntity:(void *)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3;	// IMP=0x000000000003fe24

@end
