//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUIContainerBoxView, NUIContainerStackView, SearchUIImageView, SearchUILabel, UIImageView;

@interface SearchUIVerticalLayoutCardSectionView
{
    SearchUIImageView *_thumbnailView;	// 8 = 0x8
    SearchUILabel *_titleLabel;	// 16 = 0x10
    SearchUILabel *_footnoteLabel;	// 24 = 0x18
    NUIContainerBoxView *_thumbnailOverlayContainer;	// 32 = 0x20
    UIImageView *_gradientImageView;	// 40 = 0x28
    SearchUILabel *_thumbnailOverlayLabel;	// 48 = 0x30
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;	// IMP=0x0000000000078546
- (void).cxx_destruct;	// IMP=0x000000000007938c
@property(retain, nonatomic) SearchUILabel *thumbnailOverlayLabel; // @synthesize thumbnailOverlayLabel=_thumbnailOverlayLabel;
@property(retain, nonatomic) UIImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
@property(retain, nonatomic) NUIContainerBoxView *thumbnailOverlayContainer; // @synthesize thumbnailOverlayContainer=_thumbnailOverlayContainer;
@property(retain, nonatomic) SearchUILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SearchUIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;	// IMP=0x000000000007927b
- (void)buildThumbnailOverlayContainerIfNecessary;	// IMP=0x0000000000078ddf
- (void)updateWithRowModel:(id)arg1;	// IMP=0x000000000007883e
- (id)setupContentView;	// IMP=0x000000000007854e

// Remaining properties
@property(retain, nonatomic) NUIContainerStackView *contentView; // @dynamic contentView;

@end

