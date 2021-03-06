//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RestaurantReservationAnalyticsBookingSession, RestaurantReservationRequestController, RestaurantReservationRequester;

__attribute__((visibility("hidden")))
@interface RestaurantReservationExtensionFlowViewController
{
    RestaurantReservationAnalyticsBookingSession *_bookingSession;	// 8 = 0x8
    RestaurantReservationRequestController *_restaurantRequestController;	// 16 = 0x10
    RestaurantReservationRequester *_reservationRequester;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000ac262b
@property(retain, nonatomic) RestaurantReservationRequester *reservationRequester; // @synthesize reservationRequester=_reservationRequester;
@property(retain, nonatomic) RestaurantReservationRequestController *restaurantRequestController; // @synthesize restaurantRequestController=_restaurantRequestController;
@property(retain, nonatomic) RestaurantReservationAnalyticsBookingSession *bookingSession; // @synthesize bookingSession=_bookingSession;
- (void)restaurantReservationRequestControllerDidComplete:(id)arg1 contentRefresh:(_Bool)arg2;	// IMP=0x0010000000ac2532
- (void)willResignCurrent:(_Bool)arg1;	// IMP=0x0010000000ac24b7
- (void)viewDidLoad;	// IMP=0x0010000000ac236a
- (id)initWithRestaurantReservationRequester:(id)arg1;	// IMP=0x0010000000ac22fe

@end

