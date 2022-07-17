//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOServer;

__attribute__((visibility("hidden")))
@interface _GEOServerProxy : NSObject
{
    Class _serverClass;	// 8 = 0x8
    GEOServer *_server;	// 16 = 0x10
}

+ (id)proxyForClass:(Class)arg1;	// IMP=0x00000000012c56df
- (void).cxx_destruct;	// IMP=0x00000000012c5a5b
@property(readonly, nonatomic) GEOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) Class serverClass; // @synthesize serverClass=_serverClass;
- (id)description;	// IMP=0x00000000012c59d9
- (unsigned long long)hash;	// IMP=0x00000000012c59c3
- (_Bool)isEqualToServerProxy:(id)arg1;	// IMP=0x00000000012c59b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012c5959
- (void)startServerWithDaemon:(id)arg1;	// IMP=0x00000000012c57a8
- (void)_setServer:(id)arg1 daemon:(id)arg2;	// IMP=0x00000000012c5735

@end
