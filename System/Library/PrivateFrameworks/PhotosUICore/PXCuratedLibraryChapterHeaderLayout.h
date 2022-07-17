//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGNamedImageSource-Protocol.h>
#import <PhotosUICore/PXGStringSource-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableIndexSet, NSObject, NSString, PXAssetCollectionReference, PXCuratedLibraryChapterHeaderLayoutSpec, PXNumberAnimator;
@protocol OS_dispatch_queue;

@interface PXCuratedLibraryChapterHeaderLayout <PXChangeObserver, PXGStringSource, PXGNamedImageSource>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    unsigned short _titleVersion;	// 32 = 0x20
    struct CGSize _chevronSize;	// 40 = 0x28
    unsigned short _chevronVersion;	// 56 = 0x38
    long long _alternateAppearanceFadeDirection;	// 64 = 0x40
    double _alternateAppearanceFadeStartThresholdDistance;	// 72 = 0x48
    NSArray *_itemIdentifierBySpriteIndex;	// 80 = 0x50
    NSMutableIndexSet *_axSpriteIndexes;	// 88 = 0x58
    long long _asyncDateGeneration;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_asyncDateQueue;	// 104 = 0x68
    _Bool _presentedAlternateAppearance;	// 112 = 0x70
    NSAttributedString *_attributedTitle;	// 120 = 0x78
    NSAttributedString *_floatingAttributedTitle;	// 128 = 0x80
    PXAssetCollectionReference *_assetCollectionReference;	// 136 = 0x88
    PXCuratedLibraryChapterHeaderLayoutSpec *_spec;	// 144 = 0x90
    NSString *_rawTitle;	// 152 = 0x98
    NSDictionary *_titleEmphasizedAttributes;	// 160 = 0xa0
    NSDictionary *_floatingTitleEmphasizedAttributes;	// 168 = 0xa8
    NSDictionary *_titleDeemphasizedAttributes;	// 176 = 0xb0
    NSDictionary *_floatingTitleDeemphasizedAttributes;	// 184 = 0xb8
    PXNumberAnimator *_alternateAppearanceMixAnimator;	// 192 = 0xc0
    struct CGSize _attributedTitleSize;	// 200 = 0xc8
    struct PXSimpleIndexPath _sectionIndexPath;	// 216 = 0xd8
    struct UIEdgeInsets _padding;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000039ba5e
@property(nonatomic) _Bool presentedAlternateAppearance; // @synthesize presentedAlternateAppearance=_presentedAlternateAppearance;
@property(readonly, nonatomic) PXNumberAnimator *alternateAppearanceMixAnimator; // @synthesize alternateAppearanceMixAnimator=_alternateAppearanceMixAnimator;
@property(copy, nonatomic) NSDictionary *floatingTitleDeemphasizedAttributes; // @synthesize floatingTitleDeemphasizedAttributes=_floatingTitleDeemphasizedAttributes;
@property(copy, nonatomic) NSDictionary *titleDeemphasizedAttributes; // @synthesize titleDeemphasizedAttributes=_titleDeemphasizedAttributes;
@property(copy, nonatomic) NSDictionary *floatingTitleEmphasizedAttributes; // @synthesize floatingTitleEmphasizedAttributes=_floatingTitleEmphasizedAttributes;
@property(copy, nonatomic) NSDictionary *titleEmphasizedAttributes; // @synthesize titleEmphasizedAttributes=_titleEmphasizedAttributes;
@property(copy, nonatomic) NSString *rawTitle; // @synthesize rawTitle=_rawTitle;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) PXCuratedLibraryChapterHeaderLayoutSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property(retain, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x000000000039b906
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;	// IMP=0x000000000039b8f4
- (id)axSpriteIndexes;	// IMP=0x000000000039b8cf
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000039b87f
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000039b773
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000039b75d
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000039b682
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000039b5a2
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000039b3dd
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000039b306
- (void)referenceOptionsDidChange;	// IMP=0x000000000039b1e3
- (void)viewEnvironmentDidChange;	// IMP=0x000000000039b1a2
- (void)screenScaleDidChange;	// IMP=0x000000000039b08f
- (void)referenceSizeDidChange;	// IMP=0x000000000039af7c
- (void)visibleRectDidChange;	// IMP=0x000000000039ae69
@property(readonly, nonatomic) struct CGSize attributedTitleSize; // @synthesize attributedTitleSize=_attributedTitleSize;
- (id)_createAttributedTitleWithEmphasizedAttributes:(id)arg1 deemphasizedAttributes:(id)arg2;	// IMP=0x000000000039abcf
@property(readonly, nonatomic) NSAttributedString *floatingAttributedTitle; // @synthesize floatingAttributedTitle=_floatingAttributedTitle;
@property(readonly, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void)_handleAsyncRawTitle:(id)arg1 generation:(long long)arg2;	// IMP=0x000000000039a9d0
- (void)_updateTitle;	// IMP=0x000000000039a483
- (void)_invalidateChevron;	// IMP=0x000000000039a306
- (void)_invalidateAttributedTitle;	// IMP=0x000000000039a1bf
- (void)_updateSprites;	// IMP=0x0000000000399426
- (void)update;	// IMP=0x00000000003991a5
- (id)init;	// IMP=0x0000000000398f18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
