//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BarcodeSupport/DDDetectionControllerInteractionDelegate-Protocol.h>

@class CNContact, DDAction, NSString;

@interface BCSDataDetectionActionPickerItem <DDDetectionControllerInteractionDelegate>
{
    DDAction *_ddAction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000cb47
- (void)action:(id)arg1 didDismissAlertController:(id)arg2;	// IMP=0x000000000000cad2
- (void)performActionWithFBOptions:(id)arg1;	// IMP=0x000000000000c9d3
@property(readonly, nonatomic) NSString *icsString;
@property(readonly, nonatomic) CNContact *contact;
- (id)actionURL;	// IMP=0x000000000000c8fb
- (id)targetApplicationBundleIdentifier;	// IMP=0x000000000000c8de
- (id)icon;	// IMP=0x000000000000c882
- (id)label;	// IMP=0x000000000000c865
- (_Bool)isCopyActionItem;	// IMP=0x000000000000c833
- (_Bool)shouldDismissAlertWhenActionIsTaken;	// IMP=0x000000000000c813
- (id)initWithAction:(id)arg1 ddAction:(id)arg2;	// IMP=0x000000000000c74b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

