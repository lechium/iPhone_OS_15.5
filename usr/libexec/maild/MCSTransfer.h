//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCSFlagChange, MFMailboxUid, NSDictionary;

@interface MCSTransfer
{
    MFMailboxUid *_destination;	// 16 = 0x10
    int _specialType;	// 24 = 0x18
    MCSFlagChange *_equivalentFlagChange;	// 32 = 0x20
    unsigned int _markAsRead:1;	// 40 = 0x28
    unsigned int _deleteIfSame:1;	// 40 = 0x28
    unsigned int _isDeletion:1;	// 40 = 0x28
    NSDictionary *_originalLocations;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000004982c
@property(copy, nonatomic) NSDictionary *originalLocations; // @synthesize originalLocations=_originalLocations;
- (id)_storeToMessagesMappingWithMessages:(id)arg1;	// IMP=0x0010000000049577
- (void)_notifyStoresOfTransferedMessages:(id)arg1 failedMessages:(id)arg2;	// IMP=0x0010000000049057
- (void)setIsDeletion:(_Bool)arg1;	// IMP=0x001000000004903c
- (id)localizedShortOperationDescription;	// IMP=0x0010000000048fbc
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000048f0a
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000048d6a
- (id)description;	// IMP=0x0010000000048d19
- (_Bool)willFlag;	// IMP=0x0010000000048d11
- (_Bool)willUnflag;	// IMP=0x0010000000048d09
- (_Bool)willMarkUnread;	// IMP=0x0010000000048d01
- (_Bool)willMarkRead;	// IMP=0x0010000000048cf9
- (_Bool)isRevertibleWithMessages:(id)arg1;	// IMP=0x001000000004899c
- (_Bool)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x00100000000484a4
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x0010000000047856
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x00100000000477ba
- (id)destination;	// IMP=0x00100000000477a5
- (id)initWithSpecialDestination:(int)arg1 markAsRead:(_Bool)arg2 deleteIfSame:(_Bool)arg3;	// IMP=0x0010000000047760
- (id)initWithDestination:(id)arg1 markAsRead:(_Bool)arg2;	// IMP=0x00100000000475f1
- (id)init;	// IMP=0x00100000000475a2

@end

