//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FontServices/FontServicesWebKitSupportHostProtocol-Protocol.h>

@class NSXPCConnection;

@interface FSWebKitProcessSupportHandler : NSObject <FontServicesWebKitSupportHostProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009371
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)ping:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009341
- (void)checkin:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000919b
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000009130

@end

