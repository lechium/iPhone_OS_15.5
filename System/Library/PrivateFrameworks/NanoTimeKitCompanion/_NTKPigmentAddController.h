//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <NanoTimeKitCompanion/UICollectionViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, NTKFace, NTKFaceView, NTKPigmentEditOptionArray, UICollectionView;

@interface _NTKPigmentAddController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NTKFace *_face;	// 8 = 0x8
    NTKFaceView *_faceView;	// 16 = 0x10
    NSString *_slot;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    NSArray *_sections;	// 48 = 0x30
    NTKPigmentEditOptionArray *_availablePigments;	// 56 = 0x38
    NTKPigmentEditOptionArray *_addedPigments;	// 64 = 0x40
    NTKPigmentEditOptionArray *_removedPigments;	// 72 = 0x48
    _Bool _shouldSavePigmentChanges;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001bbcaf
- (id)collectionView;	// IMP=0x00000000001bbc9a
- (void)_handleOptionsChangedNotification;	// IMP=0x00000000001bbc57
- (void)_donePressed;	// IMP=0x00000000001bbc3a
- (void)_dismiss;	// IMP=0x00000000001bbc21
- (id)_pigmentForIndexPath:(id)arg1;	// IMP=0x00000000001bbb50
- (void)_setupPigments;	// IMP=0x00000000001bb633
- (id)_collectionViewLayout;	// IMP=0x00000000001bb17e
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001bb0ee
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001bb05e
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001baf2a
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001bad58
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001bacdc
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001bacbf
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001bac76
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001ba983
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001ba93a
- (void)_updateSelections;	// IMP=0x00000000001ba748
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001ba6ea
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001ba638
- (void)viewDidLoad;	// IMP=0x00000000001ba341
- (id)initWithFace:(id)arg1 faceView:(id)arg2 slot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ba104

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

