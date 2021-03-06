//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MKMapItem, NSArray, RAPPlaceCorrectionsDataSource;

@protocol RAPCorrectionQuestionUpdateRequestDelegate <NSObject>
- (void)presentPrivacyViewControllerWithSender:(RAPPlaceCorrectionsDataSource *)arg1;
- (void)didChangeCenterCoordinateWithSender:(RAPPlaceCorrectionsDataSource *)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)presentSeeMoreUIWithSender:(RAPPlaceCorrectionsDataSource *)arg1 mapItem:(MKMapItem *)arg2;
- (void)presentLocationUIWithSender:(RAPPlaceCorrectionsDataSource *)arg1 allowEditingEntryPoints:(_Bool)arg2;
- (void)presentCategoriesUIWithSender:(RAPPlaceCorrectionsDataSource *)arg1 initialCategories:(NSArray *)arg2;
- (void)presentContainmentUIWithSender:(RAPPlaceCorrectionsDataSource *)arg1 isParentContainment:(_Bool)arg2 currentlySelectedMUIDs:(NSArray *)arg3;
- (void)presentAddressUIWithSender:(RAPPlaceCorrectionsDataSource *)arg1;
- (void)presentHoursUIWithSender:(RAPPlaceCorrectionsDataSource *)arg1;
@end

