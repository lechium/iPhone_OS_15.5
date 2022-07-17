//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLInUseAssertion, CLLocation, CLLocationManager, NSDate, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface SingleLocationUpdate : NSObject
{
    CLInUseAssertion *_assertion;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    CLLocation *_lastLocation;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    NSTimer *_timeout;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    double _desiredAccuracy;	// 64 = 0x40
    double _acceptableAccuracy;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000002bd38f
- (void)_completeWithLocation:(id)arg1 error:(id)arg2;	// IMP=0x00100000002bd053
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000002bcfb7
- (_Bool)_isLocationGoodEnough:(id)arg1;	// IMP=0x00100000002bcef7
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000002bce83
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00100000002bce31
- (void)_cleanup;	// IMP=0x00100000002bccdd
- (void)_timeoutWithForcedCompletion:(_Bool)arg1 rescheduleInterval:(double)arg2 selector:(SEL)arg3;	// IMP=0x00100000002bcb8b
- (void)_finalTimeout;	// IMP=0x00100000002bcb6a
- (void)_firstTimeout;	// IMP=0x00100000002bcb23
- (double)_timeSinceStart;	// IMP=0x00100000002bcb05
@property(nonatomic) double acceptableAccuracy; // @synthesize acceptableAccuracy=_acceptableAccuracy;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
- (void)cancel;	// IMP=0x00100000002bc981
- (void)requestSingleLocationUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bc616
- (void)dealloc;	// IMP=0x00100000002bc5d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
