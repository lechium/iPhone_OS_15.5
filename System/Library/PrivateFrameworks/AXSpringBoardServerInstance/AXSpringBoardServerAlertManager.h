//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXSpringBoardServerInstance/AXViewServiceHandler-Protocol.h>
#import <AXSpringBoardServerInstance/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AXSpringBoardServerAlertManager : NSObject <SBSRemoteAlertHandleObserver, AXViewServiceHandler>
{
    NSMutableDictionary *_handlesByService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002b0fb
@property(retain, nonatomic) NSMutableDictionary *handlesByService; // @synthesize handlesByService=_handlesByService;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000000002afe2
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x000000000002af37
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x000000000002ae8c
- (_Bool)isShowingAXUIViewService:(id)arg1;	// IMP=0x000000000002add2
- (void)hideAXUIViewService:(id)arg1;	// IMP=0x000000000002ac9f
- (void)showAXUIViewService:(id)arg1 withData:(id)arg2;	// IMP=0x000000000002a9df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

