//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPItem, NSString;

@interface FPRenameOperation
{
    FPItem *_item;	// 152 = 0x98
    NSString *_newName;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000dc0fe
- (id)fp_prettyDescription;	// IMP=0x00000000000dc07a
- (void)presendNotifications;	// IMP=0x00000000000dbe8a
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000dbda0
- (void)actionMain;	// IMP=0x00000000000dbb33
- (id)initWithItem:(id)arg1 newNameInternal:(id)arg2;	// IMP=0x00000000000db8f3
- (id)initWithItem:(id)arg1 newDisplayName:(id)arg2;	// IMP=0x00000000000db7fe
- (id)initWithItem:(id)arg1 newFileName:(id)arg2;	// IMP=0x00000000000db77f
- (id)initWithItem:(id)arg1 newName:(id)arg2;	// IMP=0x00000000000db76d

@end

