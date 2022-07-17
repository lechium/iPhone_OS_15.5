//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioInjectionXPC, NSString, NSXPCListener;

@interface CSAudioInjectionXPCListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    CSAudioInjectionXPC *_exportedObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000037c79
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000037b4a
- (void)listen;	// IMP=0x0010000000037a2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
