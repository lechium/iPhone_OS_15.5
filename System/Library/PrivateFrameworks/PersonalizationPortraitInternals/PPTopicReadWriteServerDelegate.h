//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/NSXPCListenerDelegate-Protocol.h>

@class NSString;

@interface PPTopicReadWriteServerDelegate : NSObject <NSXPCListenerDelegate>
{
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000564bd
- (id)init;	// IMP=0x000000000005648e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

