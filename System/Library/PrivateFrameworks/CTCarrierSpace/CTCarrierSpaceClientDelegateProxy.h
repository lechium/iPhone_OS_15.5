//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/CTCarrierSpaceClientDelegateProxyInterface-Protocol.h>

@class NSString;
@protocol CTCarrierSpaceClientDelegate;

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface>
{
    id <CTCarrierSpaceClientDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000049e4
@property(nonatomic) __weak id <CTCarrierSpaceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)purchasedPlan:(id)arg1 didChangeStatus:(long long)arg2 context:(id)arg3;	// IMP=0x000000000000493c
- (void)dataPlanMetricsDidChange;	// IMP=0x000000000000490b
- (void)appsDidChange;	// IMP=0x00000000000048da
- (void)plansDidChange;	// IMP=0x00000000000048a9
- (void)usageDidChange;	// IMP=0x0000000000004878
- (void)userConsentFlowInfoDidChange;	// IMP=0x0000000000004847
- (void)capabilitiesDidChange:(id)arg1;	// IMP=0x00000000000047ed
- (void)remoteObjectRespondsToSelector:(SEL)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004789

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

