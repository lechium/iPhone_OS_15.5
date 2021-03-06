//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUConfigurationViewControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIViewController;
@protocol HUConfigurationViewController, HUConfiguratorDelegate;

@interface HUConfigurator : NSObject <HUConfigurationViewControllerDelegate>
{
    NSMutableArray *_displayedViewControllers;	// 8 = 0x8
    id <HUConfiguratorDelegate> _configuratorDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000020da38
@property(readonly, nonatomic) NSArray *displayedViewControllers; // @synthesize displayedViewControllers=_displayedViewControllers;
@property(nonatomic) __weak id <HUConfiguratorDelegate> configuratorDelegate; // @synthesize configuratorDelegate=_configuratorDelegate;
- (void)_removeDisplayedViewController;	// IMP=0x000000000020d9c9
- (void)_addViewControllerToDisplay:(id)arg1;	// IMP=0x000000000020d9b3
- (id)_nextViewControllerForResults:(id)arg1;	// IMP=0x000000000020d99a
- (void)viewControllerDidGoBack:(id)arg1;	// IMP=0x000000000020d988
- (void)viewController:(id)arg1 didFinishWithConfigurationResults:(id)arg2;	// IMP=0x000000000020d973
- (void)viewControllerWillAppear:(id)arg1;	// IMP=0x000000000020d96d
- (void)popViewController;	// IMP=0x000000000020d95b
- (void)pushViewControllerForResults:(id)arg1;	// IMP=0x000000000020d798
@property(readonly, nonatomic) UIViewController<HUConfigurationViewController> *currentViewController;
- (id)initWithConfiguratorDelegate:(id)arg1 initialViewController:(id)arg2;	// IMP=0x000000000020d695

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

