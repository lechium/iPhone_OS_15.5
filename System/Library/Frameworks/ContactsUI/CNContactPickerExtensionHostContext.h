//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <ContactsUI/CNContactPickerHostProtocol-Protocol.h>
#import <ContactsUI/CNContactPickerServiceProtocol-Protocol.h>

@class CNContactPickerHostViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>
{
    CNContactPickerHostViewController *_viewController;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000154648
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000015462f
- (void).cxx_destruct;	// IMP=0x000000000015444e
@property(nonatomic) __weak CNContactPickerHostViewController *viewController; // @synthesize viewController=_viewController;
- (void)pickerDidCancel;	// IMP=0x00000000001543c2
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x00000000001542fc
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x0000000000154236
- (void)pickerDidSelectAddNewContact;	// IMP=0x00000000001541d7
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x00000000001540f3
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000153fcf
- (id)_derivedExtensionAuxiliaryHostProtocol;	// IMP=0x0000000000153e9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

