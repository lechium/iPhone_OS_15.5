//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _MCSJunk
{
    NSArray *_operations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000046ec3
- (_Bool)willUnflag;	// IMP=0x0010000000046e60
- (_Bool)willFlag;	// IMP=0x0010000000046dfd
- (_Bool)willMarkUnread;	// IMP=0x0010000000046d9a
- (_Bool)willMarkRead;	// IMP=0x0010000000046d37
- (_Bool)isRevertibleWithMessages:(id)arg1;	// IMP=0x0010000000046d2f
- (_Bool)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x0010000000046c45
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x0010000000046afe
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x00100000000468f0
- (id)description;	// IMP=0x00100000000468cb
- (id)initWithSpecialDestination:(int)arg1 markAsRead:(_Bool)arg2 flagsToSet:(id)arg3 flagsToClear:(id)arg4;	// IMP=0x001000000004666a

@end

