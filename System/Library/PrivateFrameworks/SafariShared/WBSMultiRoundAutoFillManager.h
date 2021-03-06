//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, NSTimer, WBSFormMetadata;

@interface WBSMultiRoundAutoFillManager : NSObject
{
    unsigned long long _autoFillAttemptTrigger;	// 8 = 0x8
    WBSFormMetadata *_formMetadataFromPreviousAutoFillAttempt;	// 16 = 0x10
    _Bool _userDidInteractWithForm;	// 24 = 0x18
    unsigned long long _numberOfFollowUpAutoFillAttempts;	// 32 = 0x20
    NSTimer *_timerForFollowUpAutoFill;	// 40 = 0x28
    NSMutableSet *_controlUniqueIDToBeIgnoredByFollowUpAutoFill;	// 48 = 0x30
    NSString *_addressSetLabelUsedDuringFirstAutoFillPass;	// 56 = 0x38
    NSSet *_addressBookPropertiesThatCanBeFilled;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000fb7a2
@property(copy, nonatomic) NSSet *addressBookPropertiesThatCanBeFilled; // @synthesize addressBookPropertiesThatCanBeFilled=_addressBookPropertiesThatCanBeFilled;
@property(copy, nonatomic) NSString *addressSetLabelUsedDuringFirstAutoFillPass; // @synthesize addressSetLabelUsedDuringFirstAutoFillPass=_addressSetLabelUsedDuringFirstAutoFillPass;
- (_Bool)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1;	// IMP=0x00000000000fb730
- (void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1;	// IMP=0x00000000000fb71a
- (void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1;	// IMP=0x00000000000fb704
- (unsigned long long)currentAutoFillAttemptTrigger;	// IMP=0x00000000000fb6fa
- (_Bool)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2;	// IMP=0x00000000000fb693
- (id)init;	// IMP=0x00000000000fb60a
- (void)dealloc;	// IMP=0x00000000000fb5c8
- (void)didEditFormText;	// IMP=0x00000000000fb5be
- (void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fb4bd

@end

