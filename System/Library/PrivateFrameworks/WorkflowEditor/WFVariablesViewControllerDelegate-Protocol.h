//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class WFVariable, WFVariablesViewController;

@protocol WFVariablesViewControllerDelegate <NSObject>
- (void)variablesViewControllerDidSelectMagicVariable:(WFVariablesViewController *)arg1;
- (void)variablesViewController:(WFVariablesViewController *)arg1 didSelectVariable:(WFVariable *)arg2;
@end

