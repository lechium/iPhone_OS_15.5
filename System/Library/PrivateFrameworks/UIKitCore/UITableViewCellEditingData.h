//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditingData : NSObject
{
    UITableViewCell *_cell;	// 8 = 0x8
    long long _editingStyle;	// 16 = 0x10
    UITableViewCellEditControl *_editControl;	// 24 = 0x18
    UITableViewCellReorderControl *_reorderControl;	// 32 = 0x20
    UIView *_reorderSeparatorView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000ecc930
- (id)reorderSeparatorView:(_Bool)arg1;	// IMP=0x0000000000ecc830
- (id)reorderControl:(_Bool)arg1;	// IMP=0x0000000000ecc790
- (id)editControl:(_Bool)arg1;	// IMP=0x0000000000ecc679
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
@property(readonly, nonatomic, getter=isDataRequired) _Bool dataRequired;
- (void)dealloc;	// IMP=0x0000000000ecc5bc
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;	// IMP=0x0000000000ecc54d

@end
