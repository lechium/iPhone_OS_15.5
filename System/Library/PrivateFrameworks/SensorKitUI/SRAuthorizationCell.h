//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, UISwitch;
@protocol SRAuthorizationCellDelegate;

@interface SRAuthorizationCell : UITableViewCell
{
    UISwitch *_toggle;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
    id <SRAuthorizationCellDelegate> _delegate;	// 24 = 0x18
}

+ (id)authorizationCellForIndexPath:(id)arg1 title:(id)arg2 state:(id)arg3 delegate:(id)arg4 tableView:(id)arg5;	// IMP=0x000000000000d9ea
- (void).cxx_destruct;	// IMP=0x000000000000db43
@property(nonatomic) __weak id <SRAuthorizationCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
- (void)switchChanged;	// IMP=0x000000000000d980
- (void)dealloc;	// IMP=0x000000000000d929
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000000d7c4

@end
