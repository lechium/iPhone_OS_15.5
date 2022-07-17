//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MKMapItem, MKTransitLineItemViewController, NSArray, NSNumber;
@protocol GEOTransitLineItem;

@protocol MKTransitLineItemViewControllerDelegate <NSObject>
- (void)lineItemViewControllerDidAppear:(MKTransitLineItemViewController *)arg1;
- (double)lineItemViewControllerHeaderTitleTrailingConstant:(MKTransitLineItemViewController *)arg1;
- (void)lineItemViewControllerDidSelectViewOnMap:(MKTransitLineItemViewController *)arg1;
- (void)lineItemViewController:(MKTransitLineItemViewController *)arg1 didSelectDetailsForIncidents:(NSArray *)arg2;
- (void)lineItemViewController:(MKTransitLineItemViewController *)arg1 didSelectNearestStation:(MKMapItem *)arg2;
- (void)lineItemViewController:(MKTransitLineItemViewController *)arg1 didSelectDirectionsToNearestStation:(MKMapItem *)arg2 withTransportTypePreference:(NSNumber *)arg3;
- (void)lineItemViewController:(MKTransitLineItemViewController *)arg1 removeFavoriteForLineItem:(id <GEOTransitLineItem>)arg2 result:(void (^)(NSArray *, NSError *))arg3;
- (void)lineItemViewController:(MKTransitLineItemViewController *)arg1 addFavoriteForLineItem:(id <GEOTransitLineItem>)arg2 result:(void (^)(NSArray *, NSError *))arg3;
- (void)lineItemViewController:(MKTransitLineItemViewController *)arg1 hasFavoriteForLineItem:(id <GEOTransitLineItem>)arg2 result:(void (^)(_Bool))arg3;
- (_Bool)lineItemViewControllerShouldShowFavoriteButton:(MKTransitLineItemViewController *)arg1;
- (void)lineItemViewControllerDidSelectReportAProblem:(MKTransitLineItemViewController *)arg1;
@end
