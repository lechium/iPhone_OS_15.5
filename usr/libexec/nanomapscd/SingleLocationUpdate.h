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

- (void).cxx_destruct;	// IMP=0x0020000000053d4a
- (void)_completeWithLocation:(id)arg1 error:(id)arg2;	// IMP=0x0010000000053a0e
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000053972
- (_Bool)_isLocationGoodEnough:(id)arg1;	// IMP=0x00100000000538b2
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x001000000005383e
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00100000000537ec
- (void)_cleanup;	// IMP=0x0010000000053698
- (void)_timeoutWithForcedCompletion:(_Bool)arg1 rescheduleInterval:(double)arg2 selector:(SEL)arg3;	// IMP=0x0010000000053546
- (void)_finalTimeout;	// IMP=0x0010000000053525
- (void)_firstTimeout;	// IMP=0x00100000000534de
- (double)_timeSinceStart;	// IMP=0x00100000000534c0
@property(nonatomic) double acceptableAccuracy; // @synthesize acceptableAccuracy=_acceptableAccuracy;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
- (void)cancel;	// IMP=0x001000000005333c
- (void)requestSingleLocationUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052fd1
- (void)dealloc;	// IMP=0x0010000000052f93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
