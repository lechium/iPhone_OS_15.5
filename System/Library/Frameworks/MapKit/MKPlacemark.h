//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLPlacemark.h>

#import <MapKit/MKAnnotation-Protocol.h>

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation>
{
}

@property(readonly, nonatomic) NSString *countryCode;
- (id)thoroughfare;	// IMP=0x000000000015dfd6
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 postalAddress:(id)arg2;	// IMP=0x000000000015de26
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 addressDictionary:(id)arg2;	// IMP=0x000000000015dd8b
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x000000000015dd12
- (id)mkPostalAddressDictionary;	// IMP=0x000000000015e045

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

