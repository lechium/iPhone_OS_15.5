//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/CLLocationManagerDelegate-Protocol.h>

@class CLGeocoder, CLLocationManager, NSString;

@interface ICLocationContext : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;	// 8 = 0x8
    _Bool _requestedAuthorization;	// 16 = 0x10
    CLGeocoder *_geocoder;	// 24 = 0x18
}

+ (id)sharedContext;	// IMP=0x000000000019b248
- (void).cxx_destruct;	// IMP=0x000000000019b6bc
@property(nonatomic) _Bool requestedAuthorization; // @synthesize requestedAuthorization=_requestedAuthorization;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
- (void)requestAuthorizationIfNeeded;	// IMP=0x000000000019b5cf
@property(readonly, nonatomic) CLLocationManager *locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x000000000019b527
- (void)lookupPlaceAtLatitude:(double)arg1 longitude:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b31c
@property(readonly, nonatomic) _Bool canGetLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
