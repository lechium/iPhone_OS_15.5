//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetAvailableRestaurantReservationBookingsIntentResponseExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>

@class INTermsAndConditions, NSArray, NSString;

@interface INGetAvailableRestaurantReservationBookingsIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingsIntentResponseExport>
{
    NSString *_localizedRestaurantDescriptionText;	// 8 = 0x8
    NSString *_localizedBookingAdvisementText;	// 16 = 0x10
    INTermsAndConditions *_termsAndConditions;	// 24 = 0x18
    NSArray *_availableBookings;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000049a5
- (void).cxx_destruct;	// IMP=0x0000000000004952
@property(readonly, nonatomic) NSArray *availableBookings; // @synthesize availableBookings=_availableBookings;
@property(copy, nonatomic) INTermsAndConditions *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
@property(copy, nonatomic) NSString *localizedBookingAdvisementText; // @synthesize localizedBookingAdvisementText=_localizedBookingAdvisementText;
@property(copy, nonatomic) NSString *localizedRestaurantDescriptionText; // @synthesize localizedRestaurantDescriptionText=_localizedRestaurantDescriptionText;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004875
- (id)_dictionaryRepresentation;	// IMP=0x000000000000463f
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000421e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000040c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003fec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003e37
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000003e08
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000003dd9
- (id)initWithAvailableBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3;	// IMP=0x0000000000003d4b
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000003d2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
