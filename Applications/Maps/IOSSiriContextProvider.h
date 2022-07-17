//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSArray;
@protocol SiriMapItemConvertible;

__attribute__((visibility("hidden")))
@interface IOSSiriContextProvider : NSObject
{
}

@property(readonly, nonatomic) id <SiriMapItemConvertible> selectedResult;
@property(readonly, nonatomic) NSArray *searchResults;
@property(readonly, nonatomic) id <SiriMapItemConvertible> selectedPOI;
@property(readonly, nonatomic) MKMapView *mapView;

@end
