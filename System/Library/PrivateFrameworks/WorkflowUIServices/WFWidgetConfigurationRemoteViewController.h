//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <WorkflowUIServices/WFWidgetConfigurationServiceHostProtocol-Protocol.h>

@protocol WFWidgetConfigurationRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFWidgetConfigurationRemoteViewController : _UIRemoteViewController <WFWidgetConfigurationServiceHostProtocol>
{
    id <WFWidgetConfigurationRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x0000000000019a25
+ (id)serviceViewControllerInterface;	// IMP=0x0000000000019a05
- (void).cxx_destruct;	// IMP=0x0000000000019bb5
@property(nonatomic) __weak id <WFWidgetConfigurationRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)preferredCardSizeDidUpdate:(struct CGSize)arg1;	// IMP=0x0000000000019b82
- (void)intentWasConfigured:(id)arg1;	// IMP=0x0000000000019ad8
- (void)requestViewControllerDismissal;	// IMP=0x0000000000019a9b
- (void)setConfigurationCardViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000019a45

@end

