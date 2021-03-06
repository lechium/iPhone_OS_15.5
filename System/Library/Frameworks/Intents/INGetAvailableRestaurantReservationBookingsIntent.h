//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetAvailableRestaurantReservationBookingsIntentExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class INRestaurant, NSDate, NSDateComponents, NSNumber, NSString;

@interface INGetAvailableRestaurantReservationBookingsIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying>
{
    INRestaurant *_restaurant;	// 8 = 0x8
    unsigned long long _partySize;	// 16 = 0x10
    NSDateComponents *_preferredBookingDateComponents;	// 24 = 0x18
    NSNumber *_maximumNumberOfResults;	// 32 = 0x20
    NSDate *_earliestBookingDateForResults;	// 40 = 0x28
    NSDate *_latestBookingDateForResults;	// 48 = 0x30
    NSDate *_preferredBookingDate;	// 56 = 0x38
}

+ (id)intentDescription;	// IMP=0x0000000000170f04
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000170efc
- (void).cxx_destruct;	// IMP=0x0000000000170e87
@property(retain, nonatomic) NSDate *preferredBookingDate; // @synthesize preferredBookingDate=_preferredBookingDate;
@property(copy, nonatomic) NSDate *latestBookingDateForResults; // @synthesize latestBookingDateForResults=_latestBookingDateForResults;
@property(copy, nonatomic) NSDate *earliestBookingDateForResults; // @synthesize earliestBookingDateForResults=_earliestBookingDateForResults;
@property(copy, nonatomic) NSNumber *maximumNumberOfResults; // @synthesize maximumNumberOfResults=_maximumNumberOfResults;
@property(copy, nonatomic) NSDateComponents *preferredBookingDateComponents; // @synthesize preferredBookingDateComponents=_preferredBookingDateComponents;
@property(nonatomic) unsigned long long partySize; // @synthesize partySize=_partySize;
@property(copy, nonatomic) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000170b00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017097a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000170481
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000170357
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001700bd
- (id)initWithRestaurant:(id)arg1 partySize:(unsigned long long)arg2 preferredBookingDateComponents:(id)arg3 maximumNumberOfResults:(id)arg4 earliestBookingDateForResults:(id)arg5 latestBookingDateForResults:(id)arg6;	// IMP=0x000000000016ff98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

