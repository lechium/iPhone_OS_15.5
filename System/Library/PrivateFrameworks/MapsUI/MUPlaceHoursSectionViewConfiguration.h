//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MUBusinessHoursConfiguration, NSArray;

__attribute__((visibility("hidden")))
@interface MUPlaceHoursSectionViewConfiguration : NSObject
{
    MUBusinessHoursConfiguration *_placeHours;	// 8 = 0x8
    NSArray *_serviceHoursList;	// 16 = 0x10
    unsigned long long _numberOfInlineServiceHours;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000068190
@property(nonatomic) unsigned long long numberOfInlineServiceHours; // @synthesize numberOfInlineServiceHours=_numberOfInlineServiceHours;
@property(retain, nonatomic) NSArray *serviceHoursList; // @synthesize serviceHoursList=_serviceHoursList;
@property(retain, nonatomic) MUBusinessHoursConfiguration *placeHours; // @synthesize placeHours=_placeHours;

@end
