//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCSMessageOperation;

@interface MCSArchive
{
    MCSMessageOperation *_seenOrTransferOperation;	// 16 = 0x10
    MCSMessageOperation *_deleteOperation;	// 24 = 0x18
    _Bool _isDeleteInPlace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000004334f
- (void)_fetchRemoteIdForMessages:(id)arg1;	// IMP=0x0010000000042f1e
- (id)localizedShortOperationDescription;	// IMP=0x0010000000042e9e
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000042e81
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000042e64
- (_Bool)willFlag;	// IMP=0x0010000000042e07
- (_Bool)willUnflag;	// IMP=0x0010000000042daa
- (_Bool)willMarkUnread;	// IMP=0x0010000000042d4d
- (_Bool)willMarkRead;	// IMP=0x0010000000042cf0
- (_Bool)isRevertibleWithMessages:(id)arg1;	// IMP=0x0010000000042ce8
- (_Bool)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x00100000000424e5
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x001000000004238c
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x0010000000042270
- (id)initWithStore:(id)arg1;	// IMP=0x0010000000041fe3

@end

