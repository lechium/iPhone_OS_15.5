//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MapKit/MKActivityObserving-Protocol.h>

@class MKPlacePhotoGalleryAttributionViewModel, NSArray, NSString, UIButton, UILabel, UIVisualEffectView;
@protocol MUPlacePhotoGalleryAttributionViewDelegate;

__attribute__((visibility("hidden")))
@interface MKPlacePhotoGalleryAttributionView : UIView <MKActivityObserving>
{
    id <MUPlacePhotoGalleryAttributionViewDelegate> _delegate;	// 8 = 0x8
    MKPlacePhotoGalleryAttributionViewModel *_viewModel;	// 16 = 0x10
    UIVisualEffectView *_effectView;	// 24 = 0x18
    UILabel *_primaryLabel;	// 32 = 0x20
    UILabel *_secondaryLabel;	// 40 = 0x28
    UIButton *_accessoryButton;	// 48 = 0x30
    NSArray *_regularConstraints;	// 56 = 0x38
    NSArray *_primaryLabelOnlyConstraints;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000017ef81
@property(retain, nonatomic) NSArray *primaryLabelOnlyConstraints; // @synthesize primaryLabelOnlyConstraints=_primaryLabelOnlyConstraints;
@property(retain, nonatomic) NSArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) MKPlacePhotoGalleryAttributionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MUPlacePhotoGalleryAttributionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *accessoryView;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x000000000017edae
- (void)beginAnimatingActivityIndicator;	// IMP=0x000000000017ed06
- (void)_accessoryViewTapped;	// IMP=0x000000000017ec7f
- (void)setAttributionLogoImage:(id)arg1;	// IMP=0x000000000017ebc8
- (void)_updateAppearance;	// IMP=0x000000000017ea61
- (void)setDescription:(id)arg1 license:(id)arg2;	// IMP=0x000000000017e82a
- (void)updateFonts;	// IMP=0x000000000017e744
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000017e732
- (void)updateStyle:(long long)arg1;	// IMP=0x000000000017e4fa
- (long long)blurEffectWithStyle:(long long)arg1;	// IMP=0x000000000017e4e7
- (void)setupSubviews;	// IMP=0x000000000017d510
- (id)init;	// IMP=0x000000000017d46c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

