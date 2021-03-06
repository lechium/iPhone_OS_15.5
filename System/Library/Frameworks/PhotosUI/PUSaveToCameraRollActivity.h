//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISaveToCameraRollActivity.h>

#import <PhotosUI/PXActivity-Protocol.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUSaveToCameraRollActivity : UISaveToCameraRollActivity <PXActivity>
{
    id <PXActivityItemSourceController> _itemSourceController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003b6087
@property(nonatomic) __weak id <PXActivityItemSourceController> itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (_Bool)_itemIsVideoAtURL:(id)arg1;	// IMP=0x00000000003b5f32
- (void)performActivity;	// IMP=0x00000000003b522d
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00000000003b5227
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000003b5028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

