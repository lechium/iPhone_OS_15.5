//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s15RemindersUICore21TTRIExpandingTextViewCN.h"

@class MISSING_TYPE;
@protocol UITextInputDelegate;

@interface _TtC9Reminders25TTRIReminderTitleTextView : _$s15RemindersUICore21TTRIExpandingTextViewCN
{
    MISSING_TYPE *tokenInteraction;	// 64 = 0x40
    MISSING_TYPE *isChangingSelection;	// 72 = 0x48
    MISSING_TYPE *reminderTextStorage;	// 80 = 0x50
    MISSING_TYPE *suggestions;	// 88 = 0x58
    MISSING_TYPE *firstCharNeedsCapitalization;	// 96 = 0x60
    MISSING_TYPE *needsAdjustSelectionToSelectToken;	// 97 = 0x61
}

- (void).cxx_destruct;	// IMP=0x00400000001c3620
- (void)convertTextToHashtag:(id)arg1;	// IMP=0x00100000001c3400
- (void)adoptForeignHashtag:(id)arg1;	// IMP=0x00100000001c3350
- (void)removeHashtagAttributedText:(id)arg1;	// IMP=0x00100000001c3330
- (void)removeHashtagAttribute:(id)arg1;	// IMP=0x00100000001c3310
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)layoutSubviews;	// IMP=0x00100000001c32c0
- (void)endSelectionChange;	// IMP=0x00100000001c3150
- (void)beginSelectionChange;	// IMP=0x00100000001c30f0
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000001c3050
- (void)paste:(id)arg1;	// IMP=0x00100000001c2ca0
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x00100000001c2b10
@property(nonatomic, retain) id <UITextInputDelegate> inputDelegate;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001c2540

@end

