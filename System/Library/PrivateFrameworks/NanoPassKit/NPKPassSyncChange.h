//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NSCopying-Protocol.h>
#import <NanoPassKit/NSSecureCoding-Protocol.h>

@class NPKPassSyncStateItem, NSData, NSDictionary, NSString, NSUUID;

@interface NPKPassSyncChange : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_changeUUID;	// 8 = 0x8
    NSData *_reconciledStateHash;	// 16 = 0x10
    unsigned long long _reconciledStateVersion;	// 24 = 0x18
    unsigned long long _changeType;	// 32 = 0x20
    NSString *_uniqueID;	// 40 = 0x28
    NPKPassSyncStateItem *_syncStateItem;	// 48 = 0x30
    NSData *_passData;	// 56 = 0x38
    NSData *_baseManifestHashForPartialUpdate;	// 64 = 0x40
    NSDictionary *_remoteAssetsForPartialUpdate;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e2480
- (void).cxx_destruct;	// IMP=0x00000000000e292b
@property(retain, nonatomic) NSDictionary *remoteAssetsForPartialUpdate; // @synthesize remoteAssetsForPartialUpdate=_remoteAssetsForPartialUpdate;
@property(retain, nonatomic) NSData *baseManifestHashForPartialUpdate; // @synthesize baseManifestHashForPartialUpdate=_baseManifestHashForPartialUpdate;
@property(retain, nonatomic) NSData *passData; // @synthesize passData=_passData;
@property(retain, nonatomic) NPKPassSyncStateItem *syncStateItem; // @synthesize syncStateItem=_syncStateItem;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(nonatomic) unsigned long long reconciledStateVersion; // @synthesize reconciledStateVersion=_reconciledStateVersion;
@property(retain, nonatomic) NSData *reconciledStateHash; // @synthesize reconciledStateHash=_reconciledStateHash;
@property(retain, nonatomic) NSUUID *changeUUID; // @synthesize changeUUID=_changeUUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e25d7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2488
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e23a4
- (unsigned long long)hash;	// IMP=0x00000000000e226c
- (_Bool)isEqualToChangeIgnoringUUID:(id)arg1;	// IMP=0x00000000000e21e5
- (_Bool)isEqualToChange:(id)arg1;	// IMP=0x00000000000e2192
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e212a
- (id)description;	// IMP=0x00000000000e1fea
- (id)initWithChangeUUID:(id)arg1 reconciledStateHash:(id)arg2 reconciledStateVersion:(unsigned long long)arg3 changeType:(unsigned long long)arg4 uniqueID:(id)arg5 syncStateItem:(id)arg6 passData:(id)arg7;	// IMP=0x00000000000e1fb6
- (id)initWithChangeUUID:(id)arg1 reconciledStateHash:(id)arg2 reconciledStateVersion:(unsigned long long)arg3 changeType:(unsigned long long)arg4 uniqueID:(id)arg5 syncStateItem:(id)arg6 passData:(id)arg7 baseManifestHashForPartialUpdate:(id)arg8 remoteAssetsForPartialUpdate:(id)arg9;	// IMP=0x00000000000e1e68
- (id)protoPassSyncChange;	// IMP=0x0000000000175d1c
- (id)initWithProtoPassSyncChange:(id)arg1;	// IMP=0x00000000001758cd

@end
