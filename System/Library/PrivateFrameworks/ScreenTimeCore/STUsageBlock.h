//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, STUsage;

@interface STUsageBlock : NSManagedObject
{
}

+ (id)usageCategoriesForUsageBlocks:(id)arg1;	// IMP=0x000000000005696c
+ (id)usageCountedItemsForUsageBlocks:(id)arg1;	// IMP=0x00000000000568ea
+ (long long)totalNotificationsForUsageBlocks:(id)arg1;	// IMP=0x0000000000056847
+ (long long)totalPickupsForUsageBlocks:(id)arg1;	// IMP=0x000000000005671a
+ (double)totalScreenTimeForUsageBlocks:(id)arg1;	// IMP=0x0000000000056674
+ (id)fetchRequestMatchingUsage:(id)arg1 dateInterval:(id)arg2;	// IMP=0x0000000000056549

// Remaining properties
@property(retain, nonatomic) NSSet *categories; // @dynamic categories;
@property(retain, nonatomic) NSSet *countedItems; // @dynamic countedItems;
@property(nonatomic) long long durationInMinutes; // @dynamic durationInMinutes;
@property(retain, nonatomic) NSDate *firstPickupDate; // @dynamic firstPickupDate;
@property(retain, nonatomic) NSDate *lastEventDate; // @dynamic lastEventDate;
@property(retain, nonatomic) NSDate *longestSessionEndDate; // @dynamic longestSessionEndDate;
@property(retain, nonatomic) NSDate *longestSessionStartDate; // @dynamic longestSessionStartDate;
@property(nonatomic) long long numberOfPickupsWithoutApplicationUsage; // @dynamic numberOfPickupsWithoutApplicationUsage;
@property(nonatomic) long long screenTimeInSeconds; // @dynamic screenTimeInSeconds;
@property(copy, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) STUsage *usage; // @dynamic usage;

@end

