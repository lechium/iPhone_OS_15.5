//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, SALocation;

@interface SALocalSearchVehicleEvent
{
}

+ (id)vehicleEventWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000018820
+ (id)vehicleEvent;	// IMP=0x000000000001880e
@property(copy, nonatomic) NSString *vehicleIdentifier;
@property(copy, nonatomic) NSNumber *userSetLocation;
@property(copy, nonatomic) NSString *notes;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSDate *date;
- (id)encodedClassName;	// IMP=0x0000000000018801
- (id)groupIdentifier;	// IMP=0x00000000000187ed

@end

