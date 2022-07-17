//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PLCloudSharedAlbum, PUPhotoStreamRecipientViewController, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface PUAddSubscribersViewController : UIViewController
{
    PUPhotoStreamRecipientViewController *_composeRecipientController;	// 8 = 0x8
    UIBarButtonItem *_addButton;	// 16 = 0x10
    PLCloudSharedAlbum *_album;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000426a4
@property(readonly, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;
- (void)recipientViewController:(id)arg1 didEnterText:(id)arg2;	// IMP=0x00000000000425f2
- (void)recipientViewControllerDidRemoveRecipient:(id)arg1;	// IMP=0x0000000000042589
- (void)recipientViewControllerDidAddRecipient:(id)arg1;	// IMP=0x0000000000042520
- (_Bool)_validateRecipientsToAdd:(id)arg1;	// IMP=0x0000000000041f65
- (void)_saveAndDismiss;	// IMP=0x0000000000041e40
- (void)_dismiss;	// IMP=0x0000000000041df6
- (void)_cancelButtonHandler;	// IMP=0x0000000000041de4
- (void)_addButtonHandler;	// IMP=0x0000000000041dd2
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x0000000000041d14
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000041cae
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000041c2c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000041b8e
- (void)viewDidLoad;	// IMP=0x0000000000041a28
- (void)loadView;	// IMP=0x00000000000418e5
- (id)contentScrollView;	// IMP=0x00000000000418dd
- (void)dealloc;	// IMP=0x0000000000041892
- (id)initWithSharedStream:(id)arg1;	// IMP=0x000000000004178a

@end
