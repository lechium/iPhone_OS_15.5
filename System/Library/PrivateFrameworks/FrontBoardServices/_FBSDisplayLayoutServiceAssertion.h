//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>

@class FBSDisplayLayout, NSString, _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutServiceAssertion : NSObject <BSInvalidatable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _FBSDisplayLayoutService *_lock_service;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002fd98
@property(readonly, nonatomic) FBSDisplayLayout *currentLayout;
- (void)invalidate;	// IMP=0x000000000002fce3
- (void)dealloc;	// IMP=0x000000000002fca5
- (id)initWithEndpoint:(id)arg1 qos:(BOOL)arg2 observer:(CDUnknownBlockType)arg3;	// IMP=0x000000000002fbd3
- (id)init;	// IMP=0x000000000002fbba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

