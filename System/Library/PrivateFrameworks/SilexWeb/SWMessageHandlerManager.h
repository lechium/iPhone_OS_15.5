//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageHandlerManager-Protocol.h>
#import <SilexWeb/WKScriptMessageHandler-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SWLogger;

@interface SWMessageHandlerManager : NSObject <WKScriptMessageHandler, SWMessageHandlerManager>
{
    id <SWLogger> _logger;	// 8 = 0x8
    NSMutableDictionary *_messageHandlers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000010cdb
@property(readonly, nonatomic) NSMutableDictionary *messageHandlers; // @synthesize messageHandlers=_messageHandlers;
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;	// IMP=0x0000000000010839
- (void)addMessageHandler:(id)arg1 name:(id)arg2;	// IMP=0x0000000000010703
- (id)initWithUserContentController:(id)arg1 logger:(id)arg2;	// IMP=0x0000000000010649

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
