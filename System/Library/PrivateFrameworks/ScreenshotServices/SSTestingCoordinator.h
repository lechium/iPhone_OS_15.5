//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SSTestingCoordinatorDelegate;

@interface SSTestingCoordinator : NSObject
{
    id <SSTestingCoordinatorDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000088e3
@property(nonatomic) __weak id <SSTestingCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleRunPPTRequest:(id)arg1;	// IMP=0x00000000000087ec
- (void)_delayedHandleRunPPTRequest:(id)arg1;	// IMP=0x00000000000086be

@end
