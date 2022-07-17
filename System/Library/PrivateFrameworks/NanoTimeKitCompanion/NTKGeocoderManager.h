//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLGeocoder, CLInUseAssertion, CLLocation, CLPlacemark, NSMutableArray;

@interface NTKGeocoderManager : NSObject
{
    CLGeocoder *_geocoder;	// 8 = 0x8
    CLLocation *_cachedLocation;	// 16 = 0x10
    CLPlacemark *_cachedPlacemark;	// 24 = 0x18
    CLInUseAssertion *_locationInUseAssertion;	// 32 = 0x20
    NSMutableArray *_handlers;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x000000000010f349
- (void).cxx_destruct;	// IMP=0x000000000010fda4
- (void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3;	// IMP=0x000000000010f99f
- (void)placemarkForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f483
- (id)cachedPlacemarkForLocation:(id)arg1;	// IMP=0x000000000010f423
- (id)init;	// IMP=0x000000000010f39e

@end
