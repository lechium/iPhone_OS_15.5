//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation, MKMapItem, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface CuratedCollectionPlaceSummaryViewModel : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
    GEOLocation *_currentLocation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000009bdbe3
@property(retain, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, copy, nonatomic) NSAttributedString *hours;
@property(readonly, copy, nonatomic) NSString *price;
@property(readonly, copy, nonatomic) NSString *distance;
@property(readonly, copy, nonatomic) NSString *category;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithMapItem:(id)arg1;	// IMP=0x00100000009bd633

@end
