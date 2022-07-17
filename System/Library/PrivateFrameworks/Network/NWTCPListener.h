//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NWEndpoint, NWParameters;
@protocol NWTCPListenerDelegate, OS_nw_listener;

@interface NWTCPListener : NSObject
{
    NWEndpoint *_localEndpoint;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSObject<OS_nw_listener> *_internalListener;	// 24 = 0x18
    NWParameters *_parameters;	// 32 = 0x20
    NWEndpoint *_endpoint;	// 40 = 0x28
    NSString *_launchdKey;	// 48 = 0x30
    id <NWTCPListenerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000088ea0
@property __weak id <NWTCPListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *launchdKey; // @synthesize launchdKey=_launchdKey;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NSObject<OS_nw_listener> *internalListener; // @synthesize internalListener=_internalListener;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (void)cancel;	// IMP=0x0000000000088cb0
- (id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000088a50
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000088a30
- (id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000887a0
- (id)initWithParameters:(id)arg1 delegate:(id)arg2 launchdKey:(id)arg3 bonjourEndpoint:(id)arg4;	// IMP=0x0000000000087d00
- (void)startInternal;	// IMP=0x0000000000087b10
- (void)handleError:(id)arg1;	// IMP=0x0000000000087ad0
- (void)handleNewConnection:(id)arg1;	// IMP=0x0000000000087a30

@end
