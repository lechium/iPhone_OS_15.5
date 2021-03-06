//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSTextStorage.h>

#import <RemindersUICore/REMCRMutableAttributedStringEditObserver-Protocol.h>

@class NSString, REMCRMutableAttributedString;

@interface TTRReminderBaseTextStorage : NSTextStorage <REMCRMutableAttributedStringEditObserver>
{
    REMCRMutableAttributedString *_backingStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003035
@property(retain, nonatomic) REMCRMutableAttributedString *backingStore; // @synthesize backingStore=_backingStore;
- (void)mutableAttributedString:(id)arg1 didEdit:(long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;	// IMP=0x0000000000002feb
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000002f6e
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x0000000000002ef1
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x0000000000002e8d
- (id)string;	// IMP=0x0000000000002e3d
- (id)init;	// IMP=0x0000000000002d8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

