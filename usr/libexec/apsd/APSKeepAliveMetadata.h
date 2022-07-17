//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PCKeepAliveState;

@interface APSKeepAliveMetadata : NSObject
{
    NSString *_carrier;	// 8 = 0x8
    NSString *_softwareVersion;	// 16 = 0x10
    NSString *_softwareBuild;	// 24 = 0x18
    NSString *_hardwareVersion;	// 32 = 0x20
    int _keepAliveInterval;	// 40 = 0x28
    int _delayedResponseInterval;	// 44 = 0x2c
    _Bool _usingServerStats;	// 48 = 0x30
    int _keepAliveAction;	// 52 = 0x34
    PCKeepAliveState *_keepAliveState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000051b17
@property(nonatomic) int keepAliveAction; // @synthesize keepAliveAction=_keepAliveAction;
@property(nonatomic) PCKeepAliveState *keepAliveState; // @synthesize keepAliveState=_keepAliveState;
@property(nonatomic) _Bool usingServerStats; // @synthesize usingServerStats=_usingServerStats;
@property(nonatomic) int delayedResponseInterval; // @synthesize delayedResponseInterval=_delayedResponseInterval;
@property(nonatomic) int keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property(retain, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(retain, nonatomic) NSString *softwareBuild; // @synthesize softwareBuild=_softwareBuild;
@property(retain, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
- (id)initWithUsingWWAN:(_Bool)arg1 keepAliveInterval:(int)arg2 delayedResponseInterval:(int)arg3 usingServerStats:(_Bool)arg4 keepAliveState:(id)arg5 hwVersion:(id)arg6 swVersion:(id)arg7 swBuild:(id)arg8;	// IMP=0x0010000000051964
- (id)initWithUsingWWAN:(_Bool)arg1 keepAliveInterval:(int)arg2 delayedResponseInterval:(int)arg3 usingServerStats:(_Bool)arg4 keepAliveState:(id)arg5;	// IMP=0x0010000000051930
- (id)initWithUsingWWAN:(_Bool)arg1 keepAliveInterval:(int)arg2 keepAliveState:(id)arg3;	// IMP=0x001000000005190b

@end
