//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebPolicyDelegate-Protocol.h>

@class NSString;

@interface WebDefaultPolicyDelegate : NSObject <WebPolicyDelegate>
{
}

+ (id)sharedPolicyDelegate;	// IMP=0x00000000000f1080
- (_Bool)webView:(id)arg1 shouldGoToHistoryItem:(id)arg2;	// IMP=0x00000000000f12e0
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000000f12c0
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000000f11f0
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000000f10c0
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;	// IMP=0x00000000000f10b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
