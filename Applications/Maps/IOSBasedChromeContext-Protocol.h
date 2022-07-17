//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NGChromeContext-Protocol.h"

@class MKMapItem, NSArray, StatusBarBackgroundViewStyle, UIView;
@protocol MapSelectionManagerDelegate, StatusBarSupplementaryView;

@protocol IOSBasedChromeContext <NGChromeContext>

@optional
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
@property(readonly, nonatomic) MKMapItem *mapItemForMuninButton;
@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
- (void)updateViewMode:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)permitsWeatherShowing;
- (_Bool)wantsWeatherShowing;
- (_Bool)permitsMuninShowing;
- (_Bool)wantsMuninShowing;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)wantsStatusBarControl;
- (_Bool)permitsPreviousCardsInStack;
- (NSArray *)desiredCards;
@end
