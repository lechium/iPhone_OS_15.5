//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/UICollectionViewDataSource-Protocol.h>
#import <PencilKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, UICollectionView, UILabel, UIScrollView;

@interface PKRecognitionDataCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray *_drawings;	// 8 = 0x8
    NSArray *_drawingImages;	// 16 = 0x10
    NSDictionary *_metadata;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    UICollectionView *_collectionView;	// 48 = 0x30
    NSLayoutConstraint *_collectionViewHeightConstraint;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002026cb
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSArray *drawingImages; // @synthesize drawingImages=_drawingImages;
@property(retain, nonatomic) NSArray *drawings; // @synthesize drawings=_drawings;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000202584
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000202108
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000202014
- (id)synchronousImageForDrawing:(id)arg1;	// IMP=0x0000000000201cc7
- (id)saveDataForDrawings:(id)arg1 baseURL:(id)arg2 shouldSaveRecognitionData:(_Bool)arg3;	// IMP=0x00000000002015ee
- (void)openTapToRadarWithTempDirectoryURL:(id)arg1;	// IMP=0x0000000000201096
- (void)openAppleFeedbackAssistantWithTempDirectoryURL:(id)arg1;	// IMP=0x0000000000200bd4
- (void)sendRadarButtonTapped:(id)arg1;	// IMP=0x00000000002009d9
- (void)openURL:(id)arg1;	// IMP=0x00000000002008d8
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x00000000002008bf
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002008ad
- (void)adjustCollectionViewHeight;	// IMP=0x000000000020074b
- (void)viewDidLoad;	// IMP=0x00000000001fef3a
- (id)initWithDrawings:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000001fee71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
