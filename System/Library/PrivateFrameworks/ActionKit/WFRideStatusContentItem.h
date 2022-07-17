//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItem.h>

@class INRideStatus;

@interface WFRideStatusContentItem : WFContentItem
{
}

+ (id)countDescription;	// IMP=0x0000000000382acf
+ (id)pluralTypeDescription;	// IMP=0x0000000000382abe
+ (id)typeDescription;	// IMP=0x0000000000382aad
+ (id)ownedTypes;	// IMP=0x0000000000382a31
+ (id)propertyBuilders;	// IMP=0x00000000003825ef
- (id)driver;	// IMP=0x00000000003830d5
- (id)disclaimerMessage;	// IMP=0x000000000038305b
- (id)rideOptionName;	// IMP=0x0000000000382fe1
- (id)maximumPrice;	// IMP=0x0000000000382e8f
- (id)minimumPrice;	// IMP=0x0000000000382d3d
- (id)dropOffLocation;	// IMP=0x0000000000382ced
- (id)pickupLocation;	// IMP=0x0000000000382c9d
- (id)estimatedPickupDate;	// IMP=0x0000000000382c4d
- (id)estimatedDropOffDate;	// IMP=0x0000000000382bfd
- (id)vehicleDescription;	// IMP=0x0000000000382b83
@property(readonly, nonatomic) INRideStatus *rideStatus;

@end
