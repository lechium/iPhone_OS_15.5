//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceReviewAvatarGenerator, NSArray, NSMutableArray, NSString;
@protocol MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewsViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    MKMapItem *_mapItem;	// 8 = 0x8
    id <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> _reviewsControllerDelegate;	// 16 = 0x10
    MKPlaceReviewAvatarGenerator *_avatarGenerator;	// 24 = 0x18
    NSArray *_userSnippets;	// 32 = 0x20
    NSMutableArray *_cells;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000276f42
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) NSArray *userSnippets; // @synthesize userSnippets=_userSnippets;
@property(retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator; // @synthesize avatarGenerator=_avatarGenerator;
@property(nonatomic) __weak id <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> reviewsControllerDelegate; // @synthesize reviewsControllerDelegate=_reviewsControllerDelegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (id)infoCardChildUnactionableUIElements;	// IMP=0x0000000000276e88
- (id)infoCardChildPossibleActions;	// IMP=0x0000000000276d66
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000276cc4
- (void)_showReview:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000000276b5e
- (void)_viewAllReviews;	// IMP=0x0000000000276ac1
- (id)reviewAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000276a62
- (unsigned long long)reviewsCount;	// IMP=0x0000000000276a1e
- (void)loadCells;	// IMP=0x0000000000276847
- (void)_updateAttribution;	// IMP=0x0000000000276617
- (void)viewDidLoad;	// IMP=0x0000000000276346
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000027633e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

