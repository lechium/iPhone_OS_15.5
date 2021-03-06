//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCNotificationActionRunner-Protocol.h>

@class NSString, SBAlertItem;

@interface NCUserAlertActionRunner : NSObject <NCNotificationActionRunner>
{
    _Bool _shouldForwardAction;	// 8 = 0x8
    SBAlertItem *_alertItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000049b3f8
@property(readonly, nonatomic) __weak SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property(nonatomic) _Bool shouldForwardAction; // @synthesize shouldForwardAction=_shouldForwardAction;
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000049b3ca
- (id)initWithSBAlertItem:(id)arg1;	// IMP=0x000000000049b366

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

