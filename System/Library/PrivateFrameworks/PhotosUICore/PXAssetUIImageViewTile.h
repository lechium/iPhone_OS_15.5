//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetTile-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIImageViewBasicTile-Protocol.h>

@class NSString, PXFocusableUIImageView, PXImageRequester, UIColor, UIImage, UIView;

@interface PXAssetUIImageViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIImageViewBasicTile>
{
    PXFocusableUIImageView *_imageView;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    _Bool _hasPlaceholder;	// 24 = 0x18
    _Bool _shouldAllowFocus;	// 25 = 0x19
    PXImageRequester *_imageRequester;	// 32 = 0x20
    double _cornerRadius;	// 40 = 0x28
    UIColor *_placeholderColor;	// 48 = 0x30
    UIImage *_placeholderImage;	// 56 = 0x38
    struct CGSize __contentSize;	// 64 = 0x40
    struct CGRect __desiredContentsRect;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000005b995d
@property(nonatomic, setter=_setDesiredContentsRect:) struct CGRect _desiredContentsRect; // @synthesize _desiredContentsRect=__desiredContentsRect;
@property(nonatomic, setter=_setContentSize:) struct CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property(nonatomic) _Bool shouldAllowFocus; // @synthesize shouldAllowFocus=_shouldAllowFocus;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000005b985a
- (void)imageDidChange;	// IMP=0x00000000005b9848
- (void)_updateImageView;	// IMP=0x00000000005b967b
- (void)_updateImageRequester;	// IMP=0x00000000005b956b
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x00000000005b93c1
- (void)prepareForReuse;	// IMP=0x00000000005b936c
- (void)becomeReusable;	// IMP=0x00000000005b92b4
- (void)_updateContentView;	// IMP=0x00000000005b9026
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) UIView *view;
- (id)init;	// IMP=0x00000000005b8e9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

