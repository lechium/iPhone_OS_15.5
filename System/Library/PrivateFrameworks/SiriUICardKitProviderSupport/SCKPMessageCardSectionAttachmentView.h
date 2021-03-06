//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SiriUICardKitProviderSupport/LPLinkViewDelegate-Protocol.h>

@class LPLinkMetadata, LPLinkView, NSString, SCKPGradientView, UIImageView, UILabel;
@protocol SCKPMessageCardSectionAttachmentViewDelegate;

@interface SCKPMessageCardSectionAttachmentView : UIView <LPLinkViewDelegate>
{
    unsigned long long _alignmentStyle;	// 8 = 0x8
    id <SCKPMessageCardSectionAttachmentViewDelegate> _delegate;	// 16 = 0x10
    SCKPGradientView *_gradientView;	// 24 = 0x18
    LPLinkMetadata *_fullMetadata;	// 32 = 0x20
    LPLinkView *_linkView;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIImageView *_livePhotoBadge;	// 56 = 0x38
    UILabel *_videoDurationLabel;	// 64 = 0x40
    UIView *_imageContainer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000003a8a
@property(retain) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain) UIImageView *livePhotoBadge; // @synthesize livePhotoBadge=_livePhotoBadge;
@property(retain) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) LPLinkView *linkView; // @synthesize linkView=_linkView;
@property(retain) LPLinkMetadata *fullMetadata; // @synthesize fullMetadata=_fullMetadata;
@property(retain) SCKPGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property __weak id <SCKPMessageCardSectionAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property unsigned long long alignmentStyle; // @synthesize alignmentStyle=_alignmentStyle;
- (void)_linkViewMetadataDidBecomeComplete:(id)arg1;	// IMP=0x00000000000038e4
- (struct CGSize)_translateImageSizeForMaxSize:(struct CGSize)arg1;	// IMP=0x000000000000380a
- (void)layoutSubviews;	// IMP=0x0000000000003493
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000033a2
- (void)_handleTap:(id)arg1;	// IMP=0x00000000000032da
- (id)_videoDurationStringForVideoURL:(id)arg1;	// IMP=0x00000000000031f0
- (id)_thumbnailImageForVideoURL:(id)arg1;	// IMP=0x000000000000308f
- (void)_loadLinkWith:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000002aa6
- (void)_loadAttachmentFromFileURL:(id)arg1 type:(int)arg2;	// IMP=0x000000000000260c
- (void)_loadAttachment:(id)arg1;	// IMP=0x0000000000002538
- (id)initWithAttachment:(id)arg1;	// IMP=0x000000000000246e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

