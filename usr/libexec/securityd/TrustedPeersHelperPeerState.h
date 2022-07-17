//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TPPBPeerStableInfoSetting;

__attribute__((visibility("hidden")))
@interface TrustedPeersHelperPeerState : NSObject
{
    _Bool _identityIsPreapproved;	// 8 = 0x8
    _Bool _memberChanges;	// 9 = 0x9
    _Bool _unknownMachineIDsPresent;	// 10 = 0xa
    NSString *_peerID;	// 16 = 0x10
    unsigned long long _peerStatus;	// 24 = 0x18
    NSString *_osVersion;	// 32 = 0x20
    TPPBPeerStableInfoSetting *_walrus;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001b5a1e
- (void).cxx_destruct;	// IMP=0x00200000001b59eb
@property(retain) TPPBPeerStableInfoSetting *walrus; // @synthesize walrus=_walrus;
@property(retain) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property _Bool unknownMachineIDsPresent; // @synthesize unknownMachineIDsPresent=_unknownMachineIDsPresent;
@property _Bool memberChanges; // @synthesize memberChanges=_memberChanges;
@property unsigned long long peerStatus; // @synthesize peerStatus=_peerStatus;
@property _Bool identityIsPreapproved; // @synthesize identityIsPreapproved=_identityIsPreapproved;
@property(retain) NSString *peerID; // @synthesize peerID=_peerID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001b57bf
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001b564b
- (id)description;	// IMP=0x00100000001b54e9
- (id)initWithPeerID:(id)arg1 isPreapproved:(_Bool)arg2 status:(unsigned long long)arg3 memberChanges:(_Bool)arg4 unknownMachineIDs:(_Bool)arg5 osVersion:(id)arg6 walrus:(id)arg7;	// IMP=0x00100000001b540a

@end
