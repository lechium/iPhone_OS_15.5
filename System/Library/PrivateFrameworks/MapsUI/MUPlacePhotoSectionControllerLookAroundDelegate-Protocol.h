//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MKMapItem, MKMuninContainerView, MKMuninView, MUPlacePhotoSectionController;

@protocol MUPlacePhotoSectionControllerLookAroundDelegate <NSObject>
- (_Bool)shouldMoveMuninStorefrontViewForPlacePhotoSectionController:(MUPlacePhotoSectionController *)arg1;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 enterMuninForMapItem:(MKMapItem *)arg2 muninView:(MKMuninView *)arg3;
- (MKMuninContainerView *)muninContainerForPlacePhotoSectionController:(MUPlacePhotoSectionController *)arg1;
@end

