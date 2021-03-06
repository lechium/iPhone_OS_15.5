//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface EDNonAcceptingServer : NSObject <NSXPCListenerDelegate, EFLoggable>
{
    NSMutableArray *_listeners;	// 8 = 0x8
}

+ (id)log;	// IMP=0x000000000009f8d1
- (void).cxx_destruct;	// IMP=0x000000000009fd30
@property(retain, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000009fc4b
- (id)initWithMachServiceNames:(id)arg1;	// IMP=0x000000000009f9ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

