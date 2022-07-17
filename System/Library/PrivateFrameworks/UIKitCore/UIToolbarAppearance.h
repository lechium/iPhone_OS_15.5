//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBarButtonItemAppearanceChangeObserver-Protocol.h>

@class NSString, UIBarButtonItemAppearance;

@interface UIToolbarAppearance <_UIBarButtonItemAppearanceChangeObserver>
{
    UIBarButtonItemAppearance *_buttonAppearance;	// 24 = 0x18
    UIBarButtonItemAppearance *_doneButtonAppearance;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000db26f3
- (void).cxx_destruct;	// IMP=0x0000000000db32a0
@property(copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance; // @synthesize doneButtonAppearance=_doneButtonAppearance;
@property(copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance; // @synthesize buttonAppearance=_buttonAppearance;
- (void)_barButtonItemDataChanged:(id)arg1;	// IMP=0x0000000000db30f0
- (void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3;	// IMP=0x0000000000db30ea
- (id)_doneButtonAppearance;	// IMP=0x0000000000db2dbb
- (id)_plainButtonAppearance;	// IMP=0x0000000000db2da6
- (id)_doneButtonAppearanceData;	// IMP=0x0000000000db2d89
- (id)_plainButtonAppearanceData;	// IMP=0x0000000000db2d6c
- (_Bool)_checkEqualTo:(id)arg1;	// IMP=0x0000000000db2b72
- (unsigned long long)_hashInto:(unsigned long long)arg1;	// IMP=0x0000000000db2aa7
- (void)_describeInto:(id)arg1;	// IMP=0x0000000000db29e0
- (void)_completeInit;	// IMP=0x0000000000db2971
- (void)_decodeFromCoder:(id)arg1;	// IMP=0x0000000000db288b
- (void)_copyFromAppearance:(id)arg1;	// IMP=0x0000000000db27a7
- (void)_setupDefaults;	// IMP=0x0000000000db26fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000db2654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
