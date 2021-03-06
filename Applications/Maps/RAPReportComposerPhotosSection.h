//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPCommentQuestion, RAPPhotoPickerController, UGCPhotoCarouselController;

__attribute__((visibility("hidden")))
@interface RAPReportComposerPhotosSection
{
    RAPCommentQuestion *_question;	// 8 = 0x8
    RAPPhotoPickerController *_picker;	// 16 = 0x10
    UGCPhotoCarouselController *_carouselViewModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000834365
- (void)photoCarouselController:(id)arg1 requestsRemovingImageForIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000834310
- (void)photoCarouselControllerRequestsAddingNewPhoto:(id)arg1;	// IMP=0x0010000000834005
- (void)_startPickingPhotoFromView:(id)arg1;	// IMP=0x0010000000833f65
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x0010000000833ea4
- (long long)rowsCount;	// IMP=0x0010000000833e99
- (id)headerTitle;	// IMP=0x0010000000833e31
- (id)initWithQuestion:(id)arg1;	// IMP=0x0010000000833af7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;

@end

