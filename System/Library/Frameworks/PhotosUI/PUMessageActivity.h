//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMessageActivity.h>

#import <PhotosUI/PXMomentShareSuggestionHandlingActivity-Protocol.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUMessageActivity : UIMessageActivity <PXMomentShareSuggestionHandlingActivity>
{
    id <PXActivityItemSourceController> _itemSourceController;	// 8 = 0x8
}

+ (_Bool)canPerformActivityAsIndividualItemsInSourceController:(id)arg1;	// IMP=0x000000000021c087
- (void).cxx_destruct;	// IMP=0x000000000021c076
@property(nonatomic) __weak id <PXActivityItemSourceController> itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (void)performActivity;	// IMP=0x000000000021bf46
- (id)activityViewController;	// IMP=0x000000000021be45
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x000000000021bb29
- (void)_prepareWithMomentShareLink:(id)arg1;	// IMP=0x000000000021b808
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000021b6e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
