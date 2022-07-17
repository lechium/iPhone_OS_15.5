//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUImportOneUpCellDisplayDelegate-Protocol.h>

@class NSArray, PUImportOneUpCellBadgeView, PXImportMediaProvider, UIImage;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionView <PUImportOneUpCellDisplayDelegate>
{
    UIImage *_startingImage;	// 8 = 0x8
    PXImportMediaProvider *_mediaProvider;	// 16 = 0x10
    PUImportOneUpCellBadgeView *_badgeView;	// 24 = 0x18
    NSArray *_badgeViewOffsetConstraints;	// 32 = 0x20
    double _initialPhotoViewAlpha;	// 40 = 0x28
    double _targetPhotoViewAlpha;	// 48 = 0x30
    struct CGRect _initialFrame;	// 56 = 0x38
    struct CGRect _targetFrame;	// 88 = 0x58
}

+ (double)interpolatedValueBetweenInitialValue:(double)arg1 andFinalValue:(double)arg2 atProgress:(double)arg3;	// IMP=0x00000000001baf58
- (void).cxx_destruct;	// IMP=0x00000000001bae00
@property(nonatomic) double targetPhotoViewAlpha; // @synthesize targetPhotoViewAlpha=_targetPhotoViewAlpha;
@property(nonatomic) double initialPhotoViewAlpha; // @synthesize initialPhotoViewAlpha=_initialPhotoViewAlpha;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(readonly, nonatomic) NSArray *badgeViewOffsetConstraints; // @synthesize badgeViewOffsetConstraints=_badgeViewOffsetConstraints;
@property(readonly, nonatomic) PUImportOneUpCellBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) PXImportMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) UIImage *startingImage; // @synthesize startingImage=_startingImage;
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;	// IMP=0x00000000001bac84
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001baba4
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;	// IMP=0x00000000001bab92
- (void)setPhotoViewInitialAlpha:(double)arg1 targetAlpha:(double)arg2;	// IMP=0x00000000001baae7
- (void)setInitialFrame:(struct CGRect)arg1 targetFrame:(struct CGRect)arg2;	// IMP=0x00000000001baa24
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000001ba952
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001ba88f
- (void)updateAlphaIfNeeded;	// IMP=0x00000000001ba77d
- (void)updateConstraints;	// IMP=0x00000000001ba4a0
- (double)currentProgress;	// IMP=0x00000000001ba29a
- (void)updateBadgeView;	// IMP=0x00000000001ba21c
- (void *)contextForObservingViewModelChanges;	// IMP=0x00000000001ba20f
- (id)initWithImportItem:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3;	// IMP=0x00000000001b9e34

@end
