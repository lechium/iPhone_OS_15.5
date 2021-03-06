//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NWEndpoint, NWParameters;
@protocol NWUDPListenerDelegate, OS_nw_listener;

@interface NWUDPListener : NSObject
{
    NWEndpoint *_localEndpoint;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSObject<OS_nw_listener> *_internalListener;	// 24 = 0x18
    NWParameters *_parameters;	// 32 = 0x20
    NWEndpoint *_endpoint;	// 40 = 0x28
    id <NWUDPListenerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004eb80
@property __weak id <NWUDPListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NSObject<OS_nw_listener> *internalListener; // @synthesize internalListener=_internalListener;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000004e030
- (void)handleError:(id)arg1;	// IMP=0x000000000004dfe0
- (void)handleConnection:(id)arg1;	// IMP=0x000000000004de50

@end

