//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKEmergencyCardFooterCell, NSAttributedString;

@interface HKEmergencyCardFooterTableItem
{
    HKEmergencyCardFooterCell *_cell;	// 8 = 0x8
    NSAttributedString *_attributedTitleForFooter;	// 16 = 0x10
    CDUnknownBlockType _shouldInteractWithURLBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b56d3
@property(copy, nonatomic) CDUnknownBlockType shouldInteractWithURLBlock; // @synthesize shouldInteractWithURLBlock=_shouldInteractWithURLBlock;
@property(retain, nonatomic) NSAttributedString *attributedTitleForFooter; // @synthesize attributedTitleForFooter=_attributedTitleForFooter;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000001b567e
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;	// IMP=0x00000000001b566c
- (id)_cell;	// IMP=0x00000000001b55d8
- (struct UIEdgeInsets)separatorInset;	// IMP=0x00000000001b553e
- (_Bool)hasPresentableData;	// IMP=0x00000000001b551a
- (id)initInEditMode:(_Bool)arg1;	// IMP=0x00000000001b54eb

@end

