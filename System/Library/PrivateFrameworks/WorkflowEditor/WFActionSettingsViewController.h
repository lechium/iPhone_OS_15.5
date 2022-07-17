//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, WFAction;
@protocol WFActionSettingsViewControllerDelegate;

@interface WFActionSettingsViewController : UIViewController
{
    id <WFActionSettingsViewControllerDelegate> _delegate;	// 8 = 0x8
    WFAction *_action;	// 16 = 0x10
    NSDictionary *_definition;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000026ef20
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) WFAction *action; // @synthesize action=_action;
@property(nonatomic) __weak id <WFActionSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)donePressed:(id)arg1;	// IMP=0x000000000026ee34
- (_Bool)accessibilityPerformEscape;	// IMP=0x000000000026ee1d
- (id)initWithAction:(id)arg1 definition:(id)arg2;	// IMP=0x000000000026ec98

@end
