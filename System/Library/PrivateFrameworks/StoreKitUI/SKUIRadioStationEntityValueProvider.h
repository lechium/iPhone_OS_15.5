//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKEntityValueProviding-Protocol.h>

@class NSString, RadioStation;

@interface SKUIRadioStationEntityValueProvider : NSObject <IKEntityValueProviding>
{
    RadioStation *_station;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000024ada3
@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
- (id)rsep_stationName;	// IMP=0x000000000024ad83
- (id)rsep_stationDescription;	// IMP=0x000000000024ad6d
- (id)rsep_coreSeedName;	// IMP=0x000000000024ad57
- (id)valuesForEntityProperties:(id)arg1;	// IMP=0x000000000024ab7b
- (id)valueForEntityProperty:(id)arg1;	// IMP=0x000000000024aa69
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;	// IMP=0x000000000024a983
- (id)entityUniqueIdentifier;	// IMP=0x000000000024a83f
- (id)initWithStation:(id)arg1;	// IMP=0x000000000024a7d4
- (id)init;	// IMP=0x000000000024a7c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
