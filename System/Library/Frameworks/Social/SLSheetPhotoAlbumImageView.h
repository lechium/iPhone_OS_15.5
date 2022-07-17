//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSMutableArray, UILabel;

@interface SLSheetPhotoAlbumImageView
{
    CALayer *_frameLayer;	// 8 = 0x8
    CALayer *_glossLayer;	// 16 = 0x10
    NSMutableArray *_frameViews;	// 24 = 0x18
    long long _imageQuantity;	// 32 = 0x20
    long long _numPreviewImagesAdded;	// 40 = 0x28
    UILabel *_imageCountLabel;	// 48 = 0x30
    _Bool _allAttachmentsAreImages;	// 56 = 0x38
}

+ (unsigned long long)displayedFrameMaximum;	// IMP=0x0000000000029b9f
- (void).cxx_destruct;	// IMP=0x000000000002ae66
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000002ae53
- (void)layoutSubviews;	// IMP=0x000000000002aa17
- (void)sizeToFit;	// IMP=0x000000000002a9c0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002a77c
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000002a582
- (void)setItemCountString:(id)arg1;	// IMP=0x000000000002a57c
- (id)_itemCountString;	// IMP=0x000000000002a43e
- (_Bool)_shouldDisplayImageCountLabel;	// IMP=0x000000000002a3c9
- (void)addPreviewImage:(id)arg1;	// IMP=0x000000000002a309
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;	// IMP=0x000000000002a2f7
- (id)initWithPrincipalAttachments:(id)arg1;	// IMP=0x0000000000029baa

@end
