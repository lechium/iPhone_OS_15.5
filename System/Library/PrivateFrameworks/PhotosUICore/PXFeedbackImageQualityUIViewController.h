//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXFeedbackFormDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PXFeedbackLikeItOrNotComboUIViewController, UINavigationController;
@protocol PXFeedbackImageQualityUIViewControllerDelegate;

@interface PXFeedbackImageQualityUIViewController : UIViewController <PXFeedbackFormDelegate>
{
    NSArray *_assets;	// 8 = 0x8
    id <PXFeedbackImageQualityUIViewControllerDelegate> _delegate;	// 16 = 0x10
    NSDictionary *_negativeFeedback;	// 24 = 0x18
    UINavigationController *_navigationController;	// 32 = 0x20
    PXFeedbackLikeItOrNotComboUIViewController *_feedbackController;	// 40 = 0x28
    NSArray *_imageQualityDiagnosticFileURLs;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002e4f48
@property(retain, nonatomic) NSArray *imageQualityDiagnosticFileURLs; // @synthesize imageQualityDiagnosticFileURLs=_imageQualityDiagnosticFileURLs;
@property(retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSDictionary *negativeFeedback; // @synthesize negativeFeedback=_negativeFeedback;
@property(readonly, nonatomic) __weak id <PXFeedbackImageQualityUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)_captureIDsToCaptureFoldersInDirectory:(id)arg1;	// IMP=0x00000000002e4d08
- (id)_captureIDFromURL:(id)arg1;	// IMP=0x00000000002e4c44
- (int)_addDirectoryToArchive:(id)arg1 withDirName:(id)arg2 archive:(struct archive *)arg3;	// IMP=0x00000000002e48a7
- (int)_addFileToArchive:(id)arg1 withFileName:(id)arg2 archive:(struct archive *)arg3;	// IMP=0x00000000002e45d2
- (void)_archiveFolder:(id)arg1 destinationPath:(id)arg2;	// IMP=0x00000000002e446e
- (id)_generateZippedCaptureFoldersForAssets:(id)arg1;	// IMP=0x00000000002e3f6a
- (id)_generateURLsForAssetsDBGFiles:(id)arg1;	// IMP=0x00000000002e37ea
- (id)_keywordIDForComponent:(long long)arg1;	// IMP=0x00000000002e37c4
- (id)_componentNameForComponent:(long long)arg1;	// IMP=0x00000000002e3760
- (id)_componentIDForComponent:(long long)arg1;	// IMP=0x00000000002e36fd
- (long long)_radarComponentForFeedback:(id)arg1;	// IMP=0x00000000002e360a
- (id)_generateTitleForFeedback:(id)arg1 forAssets:(id)arg2;	// IMP=0x00000000002e32f4
- (void)_generateResourceFilesForAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e2753
- (void)_fileRadarWithAssets:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 customFeedback:(id)arg4;	// IMP=0x00000000002e2257
- (void)userDidFinish:(_Bool)arg1;	// IMP=0x00000000002e2206
- (void)userIndicatedLike;	// IMP=0x00000000002e2200
- (void)userIndicatedDislike;	// IMP=0x00000000002e21fa
- (_Bool)wantsCustomFeedbackSection;	// IMP=0x00000000002e21f2
- (_Bool)wantsPositiveFeedbackSection;	// IMP=0x00000000002e21ea
- (_Bool)shouldContinuePresentingFormAfterFeedback;	// IMP=0x00000000002e21e2
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;	// IMP=0x00000000002e213e
- (id)negativeFeedbackKeys;	// IMP=0x00000000002e2125
- (id)positiveFeedbackKeys;	// IMP=0x00000000002e210c
- (_Bool)shouldDisplaySecondaryFeedbackButtons;	// IMP=0x00000000002e2104
- (id)viewTitleForRadar;	// IMP=0x00000000002e20f7
- (id)longTitleText;	// IMP=0x00000000002e20df
- (void)viewDidLoad;	// IMP=0x00000000002e1dce
- (id)initWithAssets:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000002e1d2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
