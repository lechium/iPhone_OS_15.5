//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    unsigned int _displayID;	// 16 = 0x10
    unsigned int _connectionSeed;	// 20 = 0x14
    int _pid;	// 24 = 0x18
    _Bool _external;	// 28 = 0x1c
    NSString *_uniqueIdentifier;	// 32 = 0x20
    _Bool _secure;	// 40 = 0x28
    FBSDisplayIdentity *_rootIdentity;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000216b9
- (void).cxx_destruct;	// IMP=0x0000000000022053
@property(readonly, nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic, getter=isExternal) _Bool external; // @synthesize external=_external;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021e4a
@property(readonly) unsigned long long hash;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000021c69
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000021a0e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000218e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000216c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000216ae
- (_Bool)isMusicOnlyDisplay;	// IMP=0x00000000000216a0
- (_Bool)isiPodOnlyDisplay;	// IMP=0x0000000000021692
- (_Bool)isRestrictedAirPlayDisplay;	// IMP=0x000000000002167a
- (_Bool)isAirPlayDisplay;	// IMP=0x000000000002166c
- (_Bool)isMainRootDisplay;	// IMP=0x0000000000021633
- (unsigned int)connectionSeed;	// IMP=0x000000000002162a
- (unsigned int)displayID;	// IMP=0x0000000000021621
- (_Bool)expectsSecureRendering;	// IMP=0x0000000000021618
- (id)uniqueIdentifier;	// IMP=0x000000000002160a
- (long long)type;	// IMP=0x0000000000021600
@property(readonly, nonatomic, getter=isCarInstrumentsDisplay) _Bool carInstrumentsDisplay;
@property(readonly, nonatomic, getter=isCarDisplay) _Bool carDisplay;
@property(readonly, nonatomic, getter=isMainDisplay) _Bool mainDisplay;
@property(readonly, nonatomic) _Bool isRootIdentity;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *rootIdentity;
- (id)_initWithType:(long long)arg1 displayID:(unsigned int)arg2 connectionSeed:(unsigned int)arg3 pid:(int)arg4 external:(_Bool)arg5 uniqueIdentifier:(id)arg6 secure:(_Bool)arg7 root:(id)arg8;	// IMP=0x000000000002142e
- (id)init;	// IMP=0x0000000000021300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
