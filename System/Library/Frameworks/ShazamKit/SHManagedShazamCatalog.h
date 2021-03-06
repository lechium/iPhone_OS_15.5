//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SHMatcher;

__attribute__((visibility("hidden")))
@interface SHManagedShazamCatalog
{
    _Bool _sendNotifications;	// 8 = 0x8
    id <SHMatcher> _proxyMatcher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c5c8
@property(retain, nonatomic) id <SHMatcher> proxyMatcher; // @synthesize proxyMatcher=_proxyMatcher;
@property(nonatomic) _Bool sendNotifications; // @synthesize sendNotifications=_sendNotifications;
- (id)_createMatcher;	// IMP=0x000000000000c542
- (void)stop;	// IMP=0x000000000000c4a8
- (void)startMatchingUntilResultFound;	// IMP=0x000000000000c422
- (void)startMatchingUntilDeadline:(id)arg1;	// IMP=0x000000000000c378
- (void)startMatching;	// IMP=0x000000000000c2c4
- (void)startOneMatchAttempt;	// IMP=0x000000000000c23e
- (id)_initWithInstallationID:(id)arg1;	// IMP=0x000000000000c20f
- (id)init;	// IMP=0x000000000000c194

@end

