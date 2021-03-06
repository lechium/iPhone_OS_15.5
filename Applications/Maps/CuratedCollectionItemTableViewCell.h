//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CuratedCollectionItemAppClipView, CuratedCollectionItemCellModel, CuratedCollectionItemImageWithAttributionView, CuratedCollectionItemPOIIconImageView, CuratedCollectionPlaceSummaryView, NSString, UIButton, UILayoutGuide, UIStackView, UITapGestureRecognizer, UITextView;
@protocol CuratedCollectionItemTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CuratedCollectionItemTableViewCell
{
    _Bool _needsImageLoad;	// 8 = 0x8
    id <CuratedCollectionItemTableViewCellDelegate> _delegate;	// 16 = 0x10
    CuratedCollectionItemCellModel *_model;	// 24 = 0x18
    UILayoutGuide *_cellContentLayoutGuide;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    CuratedCollectionItemImageWithAttributionView *_itemImageView;	// 48 = 0x30
    CuratedCollectionItemPOIIconImageView *_poiIconImageView;	// 56 = 0x38
    UIStackView *_placeSummaryContainerStackView;	// 64 = 0x40
    CuratedCollectionPlaceSummaryView *_placeSummaryView;	// 72 = 0x48
    UIButton *_addToUserCollectionsButton;	// 80 = 0x50
    UITextView *_itemDescriptionTextView;	// 88 = 0x58
    UITextView *_reviewTextView;	// 96 = 0x60
    CuratedCollectionItemAppClipView *_appClipView;	// 104 = 0x68
    UITapGestureRecognizer *_appClipTapGestureRecognizer;	// 112 = 0x70
}

+ (double)estimatedCellHeight;	// IMP=0x002000000088ad55
+ (id)reuseIdentifier;	// IMP=0x001000000088ad4b
- (void).cxx_destruct;	// IMP=0x002000000088e2e2
@property(retain, nonatomic) UITapGestureRecognizer *appClipTapGestureRecognizer; // @synthesize appClipTapGestureRecognizer=_appClipTapGestureRecognizer;
@property(retain, nonatomic) CuratedCollectionItemAppClipView *appClipView; // @synthesize appClipView=_appClipView;
@property(retain, nonatomic) UITextView *reviewTextView; // @synthesize reviewTextView=_reviewTextView;
@property(retain, nonatomic) UITextView *itemDescriptionTextView; // @synthesize itemDescriptionTextView=_itemDescriptionTextView;
@property(retain, nonatomic) UIButton *addToUserCollectionsButton; // @synthesize addToUserCollectionsButton=_addToUserCollectionsButton;
@property(retain, nonatomic) CuratedCollectionPlaceSummaryView *placeSummaryView; // @synthesize placeSummaryView=_placeSummaryView;
@property(retain, nonatomic) UIStackView *placeSummaryContainerStackView; // @synthesize placeSummaryContainerStackView=_placeSummaryContainerStackView;
@property(retain, nonatomic) CuratedCollectionItemPOIIconImageView *poiIconImageView; // @synthesize poiIconImageView=_poiIconImageView;
@property(retain, nonatomic) CuratedCollectionItemImageWithAttributionView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILayoutGuide *cellContentLayoutGuide; // @synthesize cellContentLayoutGuide=_cellContentLayoutGuide;
@property(retain, nonatomic) CuratedCollectionItemCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <CuratedCollectionItemTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x001000000088e01d
- (void)setupReviewLabel;	// IMP=0x001000000088dc11
- (void)_tappedAppClip;	// IMP=0x001000000088db99
- (id)menuForAddButton;	// IMP=0x001000000088d701
- (void)_tappedAddToUserCollection:(id)arg1;	// IMP=0x001000000088d4eb
- (void)_tappedAddToUserCollectionButton:(id)arg1;	// IMP=0x001000000088d40c
- (void)addToUserCollection:(id)arg1;	// IMP=0x001000000088d330
- (void)_setupConstraints;	// IMP=0x001000000088cad9
- (void)_createSubviews;	// IMP=0x001000000088bc7a
- (void)_loadPOIImage;	// IMP=0x001000000088ba1f
- (void)_loadImageIfNeeded;	// IMP=0x001000000088b5e3
- (void)configureWithModel:(id)arg1;	// IMP=0x001000000088afee
- (void)prepareForReuse;	// IMP=0x001000000088ae29
- (void)layoutSubviews;	// IMP=0x001000000088add3
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000088ad63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

