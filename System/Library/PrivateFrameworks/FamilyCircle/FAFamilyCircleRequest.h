//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FAFamilyCircleRequestConnectionProvider;

@interface FAFamilyCircleRequest : NSObject
{
    NSString *_usernameOrDSID;	// 8 = 0x8
    NSString *_passwordOrToken;	// 16 = 0x10
    id <FAFamilyCircleRequestConnectionProvider> _connectionProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000011a93
@property(retain, nonatomic) id <FAFamilyCircleRequestConnectionProvider> connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(copy) NSString *passwordOrToken; // @synthesize passwordOrToken=_passwordOrToken;
@property(copy) NSString *usernameOrDSID; // @synthesize usernameOrDSID=_usernameOrDSID;
- (id)requestOptions;	// IMP=0x0000000000011901
- (id)synchronousRemoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001187e
- (id)serviceRemoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000117fb
- (id)serviceConnection;	// IMP=0x00000000000117ab
- (id)initWithConnectionProvider:(id)arg1;	// IMP=0x000000000001172d
- (id)init;	// IMP=0x00000000000116d3

@end
