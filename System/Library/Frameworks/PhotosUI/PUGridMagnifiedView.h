//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSIndexPath, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUGridMagnifiedView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    NSIndexPath *_itemIndexPath;	// 16 = 0x10
    UIImage *_itemImage;	// 24 = 0x18
    struct CGSize _magnifiedImageSize;	// 32 = 0x20
    struct UIEdgeInsets _magnifiedDragEdgeInsets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000018427d
@property(nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets; // @synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets;
@property(retain, nonatomic) UIImage *itemImage; // @synthesize itemImage=_itemImage;
@property(retain, nonatomic) NSIndexPath *itemIndexPath; // @synthesize itemIndexPath=_itemIndexPath;
@property(nonatomic) struct CGSize magnifiedImageSize; // @synthesize magnifiedImageSize=_magnifiedImageSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGRect)pinFrameToParentFrame:(struct CGRect)arg1;	// IMP=0x0000000000183f5c
- (struct CGRect)photoFrameForViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000183f3e
- (struct CGRect)viewFrameForPhotoFrame:(struct CGRect)arg1;	// IMP=0x0000000000183f20
- (struct CGRect)imageWindFrame;	// IMP=0x0000000000183e41
- (struct CGRect)magnifiedFrameForParentLocation:(struct CGPoint)arg1;	// IMP=0x0000000000183d1b
- (void)setShadowOpacity:(double)arg1;	// IMP=0x0000000000183cc9
- (void)setShadowRadius:(double)arg1;	// IMP=0x0000000000183c7a
- (void)setShadowOffset:(struct CGSize)arg1;	// IMP=0x0000000000183c21
- (void)hideAnimate:(_Bool)arg1;	// IMP=0x0000000000183b7a
- (void)setImageAnimate:(_Bool)arg1;	// IMP=0x0000000000183972
- (void)moveToLocation:(struct CGPoint)arg1 animate:(_Bool)arg2;	// IMP=0x0000000000183754
- (void)magnifyFromImageFrame:(struct CGRect)arg1 toLocation:(struct CGPoint)arg2 animate:(_Bool)arg3;	// IMP=0x0000000000183533
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001833b2

@end

