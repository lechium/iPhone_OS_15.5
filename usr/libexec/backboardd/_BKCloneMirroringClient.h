//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSPortDeathSentinel;
@protocol OS_dispatch_source, _BKCloneMirroringClientDelegate;

@interface _BKCloneMirroringClient : NSObject
{
    BSPortDeathSentinel *_mirroringModePortSentinel;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_mirroringModePortWatcher;	// 16 = 0x10
    id <_BKCloneMirroringClientDelegate> _delegate;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
    long long _versionedPID;	// 40 = 0x28
}

+ (id)defaultClient;	// IMP=0x0040000000073dfd
- (void).cxx_destruct;	// IMP=0x0020000000073d91
@property(readonly, nonatomic) long long versionedPID; // @synthesize versionedPID=_versionedPID;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <_BKCloneMirroringClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithMode:(unsigned long long)arg1 port:(id)arg2 auditToken:(id)arg3;	// IMP=0x0010000000073c13

@end
