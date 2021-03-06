//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString, UITapGestureRecognizer;
@protocol PUFeedCellDelegate;

__attribute__((visibility("hidden")))
@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _tappable;	// 8 = 0x8
    id <PUFeedCellDelegate> _delegate;	// 16 = 0x10
    NSIndexPath *_indexPath;	// 24 = 0x18
    NSString *_representedElementKind;	// 32 = 0x20
    UITapGestureRecognizer *__tapGestureRecognizer;	// 40 = 0x28
    struct CGPoint _parallaxOffset;	// 48 = 0x30
    struct CGPoint _edgeParallaxOffset;	// 64 = 0x40
}

+ (struct CGRect)rectWithAspectRatio:(double)arg1 fillingRect:(struct CGRect)arg2 parallaxOffset:(struct CGPoint)arg3 edgeParallaxOffset:(struct CGPoint)arg4;	// IMP=0x000000000012cec2
- (void).cxx_destruct;	// IMP=0x000000000012ce71
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(retain, nonatomic) NSString *representedElementKind; // @synthesize representedElementKind=_representedElementKind;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) struct CGPoint edgeParallaxOffset; // @synthesize edgeParallaxOffset=_edgeParallaxOffset;
@property(nonatomic) struct CGPoint parallaxOffset; // @synthesize parallaxOffset=_parallaxOffset;
@property(nonatomic, getter=isTappable) _Bool tappable; // @synthesize tappable=_tappable;
@property(nonatomic) __weak id <PUFeedCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldRecognizerTap:(id)arg1;	// IMP=0x000000000012cd5d
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000012ccbd
- (void)_handleTap:(id)arg1;	// IMP=0x000000000012cc60
- (void)_updateTapGestureRecognizer;	// IMP=0x000000000012cb64
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000012ca16
- (void)dealloc;	// IMP=0x000000000012c9a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

