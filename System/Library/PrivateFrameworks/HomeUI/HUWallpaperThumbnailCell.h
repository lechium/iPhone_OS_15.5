//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/UIDropInteractionDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, UIDropInteraction, UIImage, UIImageView;
@protocol HUWallpaperThumbnailCellDelegate;

@interface HUWallpaperThumbnailCell : UITableViewCell <UIDropInteractionDelegate>
{
    long long _contentMode;	// 8 = 0x8
    id <HUWallpaperThumbnailCellDelegate> _delegate;	// 16 = 0x10
    UIImageView *_imageThumbnailView;	// 24 = 0x18
    NSLayoutConstraint *_imageWidthConstraint;	// 32 = 0x20
    NSLayoutConstraint *_imageHeightConstraint;	// 40 = 0x28
    UIDropInteraction *_dropInteraction;	// 48 = 0x30
    struct CGSize _imageSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000023feff
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;
@property(retain, nonatomic) UIImageView *imageThumbnailView; // @synthesize imageThumbnailView=_imageThumbnailView;
@property(nonatomic) __weak id <HUWallpaperThumbnailCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *image;
- (void)prepareForReuse;	// IMP=0x000000000023fbe9
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;	// IMP=0x000000000023fbd0
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x000000000023fbb7
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x000000000023fb3d
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x000000000023f920
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x000000000023f8a7
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x000000000023f85e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000023f13c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
