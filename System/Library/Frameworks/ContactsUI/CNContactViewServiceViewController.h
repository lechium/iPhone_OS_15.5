//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNContactViewControllerPPTDelegate-Protocol.h>
#import <ContactsUI/CNContactViewHostProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewServiceViewController <CNContactViewHostProtocol, CNContactViewControllerPPTDelegate>
{
}

- (void)viewDidAppearForContactViewController:(id)arg1;	// IMP=0x00000000000042c4
- (void)presentCancelConfirmationAlert;	// IMP=0x0000000000004287
- (void)didExecuteDeleteFromDowntimeWhitelistAction;	// IMP=0x000000000000424a
- (void)didExecuteClearRecentsDataAction;	// IMP=0x000000000000420d
- (void)viewDidAppear;	// IMP=0x00000000000041d0
- (void)didChangePreferredContentSize:(struct CGSize)arg1;	// IMP=0x0000000000004177
- (void)isPresentingEditingController:(_Bool)arg1;	// IMP=0x000000000000412b
- (void)isPresentingFullscreen:(_Bool)arg1;	// IMP=0x00000000000040df
- (void)didDeleteContact:(id)arg1;	// IMP=0x000000000000406d
- (void)didCompleteWithContact:(id)arg1;	// IMP=0x0000000000003ffb
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x0000000000003f7e
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x0000000000003eda
- (_Bool)isOutOfProcess;	// IMP=0x0000000000003ed2
- (id)init;	// IMP=0x0000000000003e70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
