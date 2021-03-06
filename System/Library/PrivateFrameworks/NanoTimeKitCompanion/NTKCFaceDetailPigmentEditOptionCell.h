//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <NanoTimeKitCompanion/_NTKCFaceDetailPigmentAddCellDelegate-Protocol.h>

@class NSString, NTKFaceEditColorPickerConfiguration, NTKPigmentEditOptionArray, UIImage;
@protocol NTKCFaceDetailPigmentEditOptionCellDelegate;

@interface NTKCFaceDetailPigmentEditOptionCell <UICollectionViewDelegateFlowLayout, _NTKCFaceDetailPigmentAddCellDelegate>
{
    NTKFaceEditColorPickerConfiguration *_configuration;	// 8 = 0x8
    NTKPigmentEditOptionArray *_editingModifiedColors;	// 16 = 0x10
    NTKPigmentEditOptionArray *_previouslySelectedColors;	// 24 = 0x18
    UIImage *_dividerImage;	// 32 = 0x20
    UIImage *_plusImage;	// 40 = 0x28
    struct CGSize _dividerItemSize;	// 48 = 0x30
    struct CGRect _dividerSwatchRect;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000014fc6c
- (id)_plusImage;	// IMP=0x000000000014f91b
- (id)_dividerImage;	// IMP=0x000000000014f76d
- (void)addCellTapped:(id)arg1;	// IMP=0x000000000014f721
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000014f627
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000014f569
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000014f457
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000014f3f6
- (_Bool)_isReloadCollectionRequired:(id)arg1 selectedOptions:(id)arg2;	// IMP=0x000000000014f39a
- (id)_dequeueCellForIndexPath:(id)arg1;	// IMP=0x000000000014f1e7
- (id)_imageForIndexPath:(id)arg1;	// IMP=0x000000000014ef6a
- (id)_indexPathForEditOptionIndex:(long long)arg1;	// IMP=0x000000000014edfe
- (long long)_editOptionIndexForIndexPath:(id)arg1;	// IMP=0x000000000014ea8f
- (id)_configurationFromCollection:(id)arg1 selectedOptions:(id)arg2;	// IMP=0x000000000014e42e
- (void)_setupFromCollection;	// IMP=0x000000000014e2c8
- (id)optionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014e1ce
- (void)selectLastColor;	// IMP=0x000000000014e069
- (void)modifiedColor:(id)arg1;	// IMP=0x000000000014decc
- (id)initWithCollection:(id)arg1 forFaceView:(id)arg2 face:(id)arg3;	// IMP=0x000000000014dcd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NTKCFaceDetailPigmentEditOptionCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

