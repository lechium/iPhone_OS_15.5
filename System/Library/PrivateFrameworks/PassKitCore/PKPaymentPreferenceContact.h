//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet, NSString, PKPaymentOptionsRecents;

@interface PKPaymentPreferenceContact
{
    _Bool _showPhoneticName;	// 88 = 0x58
    NSOrderedSet *_contactKeys;	// 96 = 0x60
    NSString *_addNewTitle;	// 104 = 0x68
    NSString *_addExistingTitle;	// 112 = 0x70
    NSString *_editExistingTitle;	// 120 = 0x78
    unsigned long long _type;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000008ae1f
@property(nonatomic) _Bool showPhoneticName; // @synthesize showPhoneticName=_showPhoneticName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *editExistingTitle; // @synthesize editExistingTitle=_editExistingTitle;
@property(copy, nonatomic) NSString *addExistingTitle; // @synthesize addExistingTitle=_addExistingTitle;
@property(copy, nonatomic) NSString *addNewTitle; // @synthesize addNewTitle=_addNewTitle;
@property(copy, nonatomic) NSOrderedSet *contactKeys; // @synthesize contactKeys=_contactKeys;
- (_Bool)preferenceObject:(id)arg1 representsContact:(id)arg2;	// IMP=0x000000000008a7f5
- (id)errorsForPreference:(id)arg1;	// IMP=0x000000000008a6a2
- (void)setErrors:(id)arg1 forPreference:(id)arg2;	// IMP=0x000000000008a533
- (long long)indexOfContact:(id)arg1;	// IMP=0x000000000008a44e
- (void)_updateSelectedIndex;	// IMP=0x000000000008a36c
- (void)_mergeContacts:(id)arg1;	// IMP=0x000000000008a206
- (void)mergeRecentsAndMeCard;	// IMP=0x000000000008a0c9
- (_Bool)supportsDeletion;	// IMP=0x000000000008a0c1
- (id)_removeDuplicateContacts:(id)arg1;	// IMP=0x0000000000089838
@property(copy, nonatomic) NSString *contactKey;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(_Bool)arg4;	// IMP=0x00000000000895d2
@property(retain, nonatomic) PKPaymentOptionsRecents *paymentOptionsRecents;

@end

