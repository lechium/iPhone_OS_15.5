//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNContactPickerContentDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceViewController <CNContactPickerContentDelegate>
{
}

- (void)_logPrivacyAccountingAccessEvent;	// IMP=0x00000000000d643a
- (void)pickerDidCancel;	// IMP=0x00000000000d63fd
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x00000000000d5f27
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x00000000000d5d8c
- (void)pickerDidSelectAddNewContact;	// IMP=0x00000000000d5d3f
- (id)_filteredProperty:(id)arg1;	// IMP=0x00000000000d5bca
- (id)_filteredContact:(id)arg1 withKeys:(id)arg2;	// IMP=0x00000000000d5ad6
- (id)init;	// IMP=0x00000000000d5a8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

