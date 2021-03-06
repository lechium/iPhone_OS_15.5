//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PairedSync/NSCopying-Protocol.h>
#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSUUID;

@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_activityMap;	// 8 = 0x8
    _Bool _supportsMigrationSync;	// 16 = 0x10
    NSUUID *_pairingIdentifier;	// 24 = 0x18
    long long _switchIndex;	// 32 = 0x20
    NSUUID *_sessionIdentifier;	// 40 = 0x28
    unsigned long long _syncSessionType;	// 48 = 0x30
    NSArray *_activities;	// 56 = 0x38
    unsigned long long _syncSessionState;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000db7b
- (void).cxx_destruct;	// IMP=0x000000000000f88a
@property(nonatomic) unsigned long long syncSessionState; // @synthesize syncSessionState=_syncSessionState;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) _Bool supportsMigrationSync; // @synthesize supportsMigrationSync=_supportsMigrationSync;
@property(nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(retain, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) long long switchIndex; // @synthesize switchIndex=_switchIndex;
@property(retain, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
- (id)description;	// IMP=0x000000000000f0c3
@property(readonly, nonatomic) double sessionProgress;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ed8f
- (unsigned long long)hash;	// IMP=0x000000000000ed30
- (id)syncSessionByUpdatingSyncSessionState:(unsigned long long)arg1;	// IMP=0x000000000000ec9e
- (id)syncSessionByReplacingActivity:(id)arg1;	// IMP=0x000000000000e9ac
- (id)syncSessionByUpdatingActivities:(id)arg1;	// IMP=0x000000000000e83c
- (id)activityForService:(id)arg1;	// IMP=0x000000000000e609
- (id)activityForLabel:(id)arg1;	// IMP=0x000000000000e5f3
- (id)completedActivities;	// IMP=0x000000000000e45c
- (id)incompleteActivities;	// IMP=0x000000000000e2c5
- (id)firstIncompleteActivity;	// IMP=0x000000000000e170
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000dfcc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ddf8
- (id)initWithPairingIdentifier:(id)arg1 switchIndex:(long long)arg2 sessionIdentifier:(id)arg3 syncSessionType:(unsigned long long)arg4 supportsMigrationSync:(_Bool)arg5 activities:(id)arg6 state:(unsigned long long)arg7;	// IMP=0x000000000000dd09
- (id)_deepCopy;	// IMP=0x000000000000db8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000db83

@end

