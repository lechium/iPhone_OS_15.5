//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (WatchConnectivity_Additions)
- (_Bool)wc_connectionHasEntitlement:(id)arg1;	// IMP=0x002000000002a4c3
@property(readonly, copy) NSString *wc_connectionCommunicationID;
@property(readonly, copy) NSString *wc_connectionBundleID;
@property(readonly) _Bool wc_connectionIsiOSExtension;
@end
