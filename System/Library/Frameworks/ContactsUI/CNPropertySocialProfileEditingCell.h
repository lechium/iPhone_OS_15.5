//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>
#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNSocialProfile, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertySocialProfileEditingCell <CNPickerControllerDelegate, UINavigationControllerDelegate>
{
}

- (void)pickerDidCancel:(id)arg1;	// IMP=0x0000000000159f4c
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x0000000000159aa5
- (void)labelButtonClicked:(id)arg1;	// IMP=0x0000000000159692
@property(readonly, nonatomic) CNSocialProfile *profile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

