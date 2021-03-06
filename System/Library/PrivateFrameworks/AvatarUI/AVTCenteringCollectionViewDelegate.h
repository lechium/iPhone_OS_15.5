//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UICollectionViewLayoutAttributes, UISelectionFeedbackGenerator;
@protocol AVTUILogger, UICollectionViewDelegate;

@interface AVTCenteringCollectionViewDelegate : NSObject <UICollectionViewDelegate>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    id <UICollectionViewDelegate> _delegate;	// 16 = 0x10
    UISelectionFeedbackGenerator *_feedbackGenerator;	// 24 = 0x18
    NSIndexPath *_lastHapticOnScrollIndexPath;	// 32 = 0x20
    id <AVTUILogger> _logger;	// 40 = 0x28
    struct CGPoint _previousOffset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000051db
@property(retain, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSIndexPath *lastHapticOnScrollIndexPath; // @synthesize lastHapticOnScrollIndexPath=_lastHapticOnScrollIndexPath;
@property(nonatomic) struct CGPoint previousOffset; // @synthesize previousOffset=_previousOffset;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(readonly, nonatomic) __weak id <UICollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000049c8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000000454c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000000439b
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000040cb
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000004027
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000003f90
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000003f18
@property(readonly, nonatomic) UICollectionViewLayoutAttributes *centerItemAttributes;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2 environment:(id)arg3;	// IMP=0x0000000000003d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

