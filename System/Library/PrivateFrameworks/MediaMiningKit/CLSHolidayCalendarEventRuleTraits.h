//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLSHolidayCalendarEventRuleTraits : NSObject
{
    _Bool _containsMePerson;	// 8 = 0x8
    unsigned long long _numberOfPeople;	// 16 = 0x10
    unsigned long long _peopleTrait;	// 24 = 0x18
    unsigned long long _locationTrait;	// 32 = 0x20
}

@property(nonatomic) unsigned long long locationTrait; // @synthesize locationTrait=_locationTrait;
@property(nonatomic) unsigned long long peopleTrait; // @synthesize peopleTrait=_peopleTrait;
@property(nonatomic) unsigned long long numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
@property(nonatomic) _Bool containsMePerson; // @synthesize containsMePerson=_containsMePerson;
- (id)description;	// IMP=0x00000000000700f3
- (id)init;	// IMP=0x00000000000700a6

@end
