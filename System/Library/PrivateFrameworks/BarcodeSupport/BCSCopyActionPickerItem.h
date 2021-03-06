//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSCopyActionPickerItem
{
    NSString *_textToCopy;	// 8 = 0x8
    NSURL *_urlToCopy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c71a
@property(readonly, copy, nonatomic) NSURL *urlToCopy; // @synthesize urlToCopy=_urlToCopy;
@property(readonly, copy, nonatomic) NSString *textToCopy; // @synthesize textToCopy=_textToCopy;
- (_Bool)canGroupInSubmenu;	// IMP=0x000000000000c6f0
- (_Bool)isCopyActionItem;	// IMP=0x000000000000c6e8
- (void)performActionWithFBOptions:(id)arg1;	// IMP=0x000000000000c5fd
- (id)icon;	// IMP=0x000000000000c5dc
- (id)initWithAction:(id)arg1 urlToCopy:(id)arg2;	// IMP=0x000000000000c4fc
- (id)initWithAction:(id)arg1 textToCopy:(id)arg2;	// IMP=0x000000000000c41c

@end

