//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INCExtensionConnection, NSString, _MXExtension;
@protocol OS_dispatch_queue, RideBookingApplicationRideStatusDelegate;

__attribute__((visibility("hidden")))
@interface RideBookingApplication : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    INCExtensionConnection *_getRideStatusConnection;	// 16 = 0x10
    id <RideBookingApplicationRideStatusDelegate> delegate;	// 24 = 0x18
    _MXExtension *_extension;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_version;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0010000000233132
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _MXExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <RideBookingApplicationRideStatusDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)_statusWithListRideOptionsResponse:(id)arg1;	// IMP=0x00100000002325ec
- (id)_statusWithRideOption:(id)arg1 requestRideIntent:(id)arg2 requestRideEtaResponse:(id)arg3;	// IMP=0x0010000000231f58
- (id)_statusWithRequestRideStatusIntentResponse:(id)arg1;	// IMP=0x0010000000231c47
- (id)_statusWithGetRideStatusIntentResponse:(id)arg1;	// IMP=0x0010000000231936
- (id)_passengersChoiceFromAvailablePartySizeOptions:(id)arg1 optionPriceRange:(id)arg2;	// IMP=0x00100000002317f1
- (void)openWithActivity:(id)arg1;	// IMP=0x00100000002313c2
- (void)cancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000230122
- (void)checkIfCanCancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022ece5
- (void)sendFeedbackForRideStatus:(id)arg1 feedbackRating:(id)arg2 feedbackTip:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000022da9d
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;	// IMP=0x001000000022d6ed
- (void)stopUpdates;	// IMP=0x001000000022d14d
- (void)startUpdates;	// IMP=0x001000000022cb7c
- (void)getRideStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000022b8fb
- (void)getRideStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOption:(id)arg3 partySize:(unsigned long long)arg4 paymentMethod:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000022a4f4
- (void)getRequestRideStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOption:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000228e23
- (void)getRideOptionStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000227bea
- (id)_connectionWithIntent:(id)arg1;	// IMP=0x0010000000227b44
@property(readonly, copy, nonatomic) NSString *name;
- (_Bool)enabled;	// IMP=0x00100000002279c1
- (void)enableForUse;	// IMP=0x001000000022797d
@property(readonly, copy) NSString *description;
- (id)initWithExtension:(id)arg1;	// IMP=0x00100000002277b0
- (id)iconWithFormat:(int)arg1;	// IMP=0x0010000000ae4114

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
