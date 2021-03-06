//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSXPCConnection;

@interface ASDRegisterListenerOptions : NSObject <NSSecureCoding>
{
    NSString *_clientID;	// 8 = 0x8
    NSXPCConnection *_endpoint;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000647b7
- (void).cxx_destruct;	// IMP=0x00000000000649aa
@property(retain, nonatomic) NSXPCConnection *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006486d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000647bf

@end

