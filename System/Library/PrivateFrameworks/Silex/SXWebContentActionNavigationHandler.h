//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SWNavigationHandler-Protocol.h>

@class NSString;
@protocol SXActionManager, SXActionProvider;

@interface SXWebContentActionNavigationHandler : NSObject <SWNavigationHandler>
{
    id <SXActionProvider> _actionProvider;	// 8 = 0x8
    id <SXActionManager> _actionManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000113aea
@property(readonly, nonatomic) id <SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) id <SXActionProvider> actionProvider; // @synthesize actionProvider=_actionProvider;
- (unsigned long long)handleRequest:(id)arg1;	// IMP=0x00000000001139e2
- (id)initWithActionProvider:(id)arg1 actionManager:(id)arg2;	// IMP=0x0000000000113949

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
