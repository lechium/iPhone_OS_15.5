//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKOperationGroup, CKServerChangeToken, NSDate;

@interface BRCSideCarSyncPersistedState
{
    _Bool _needsSync;	// 8 = 0x8
    NSDate *_lastSyncDownDate;	// 16 = 0x10
    CKServerChangeToken *_serverChangeToken;	// 24 = 0x18
    unsigned long long _requestID;	// 32 = 0x20
    CKOperationGroup *_ckGroup;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000208653
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;	// IMP=0x00000000002081e0
- (void).cxx_destruct;	// IMP=0x000000000020891f
@property(retain, nonatomic) CKOperationGroup *ckGroup; // @synthesize ckGroup=_ckGroup;
@property(nonatomic) _Bool needsSync; // @synthesize needsSync=_needsSync;
@property(readonly, nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(readonly) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
- (id)description;	// IMP=0x00000000002087e1
- (unsigned long long)allocateNextRequestID;	// IMP=0x00000000002087c9
- (void)sideCarZoneWasReset;	// IMP=0x0000000000208766
- (void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;	// IMP=0x000000000020865b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020860b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002084d6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000208372
- (id)initWithZoneHealthState:(id)arg1;	// IMP=0x000000000020829b

@end
