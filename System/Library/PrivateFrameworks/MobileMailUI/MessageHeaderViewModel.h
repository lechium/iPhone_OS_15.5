//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileMailUI/MessageHeaderViewModelBuilder-Protocol.h>
#import <MobileMailUI/NSCopying-Protocol.h>

@class ECSubject, EFObservable, MFAddressAtomStatusManager, MFMailboxUid, NSArray, NSDate, NSIndexSet, NSString;
@protocol EFObserver;

@interface MessageHeaderViewModel <MessageHeaderViewModelBuilder, NSCopying>
{
    NSDate *_dateSent;	// 8 = 0x8
    ECSubject *_subject;	// 16 = 0x10
    MFMailboxUid *_mailbox;	// 24 = 0x18
    NSArray *_senderList;	// 32 = 0x20
    NSArray *_toList;	// 40 = 0x28
    NSArray *_ccList;	// 48 = 0x30
    NSArray *_bccList;	// 56 = 0x38
    MFAddressAtomStatusManager *_atomManager;	// 64 = 0x40
    EFObservable<EFObserver> *_observableObserver;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000e2a0
@property(retain, nonatomic) EFObservable<EFObserver> *observableObserver; // @synthesize observableObserver=_observableObserver;
@property(retain, nonatomic) MFAddressAtomStatusManager *atomManager; // @synthesize atomManager=_atomManager;
@property(copy, nonatomic) NSArray *bccList; // @synthesize bccList=_bccList;
@property(copy, nonatomic) NSArray *ccList; // @synthesize ccList=_ccList;
@property(copy, nonatomic) NSArray *toList; // @synthesize toList=_toList;
@property(copy, nonatomic) NSArray *senderList; // @synthesize senderList=_senderList;
@property(copy, nonatomic) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
@property(copy, nonatomic) ECSubject *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
- (_Bool)_flagsChangedInModel:(id)arg1;	// IMP=0x000000000000df7e
- (id)updatedModelWithMessage:(id)arg1;	// IMP=0x000000000000d4a7
- (id)updatedFlagsModelWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cf0c
@property(readonly, nonatomic) EFObservable *modelObservable;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ceef
- (id)initWithItemBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ce80
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cd3c

// Remaining properties
@property(nonatomic, getter=isVIP) _Bool VIP;
@property(nonatomic, getter=isBlockedSender) _Bool blockedSender;
@property(copy, nonatomic) NSDate *dateReceived;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSIndexSet *flagColors;
@property(nonatomic, getter=isFlagged) _Bool flagged;
@property(nonatomic, getter=isForwarded) _Bool forwarded;
@property(nonatomic) _Bool hasAttachments;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isMute) _Bool mute;
@property(nonatomic, getter=isNotify) _Bool notify;
@property(nonatomic, getter=isRead) _Bool read;
@property(nonatomic, getter=isReplied) _Bool replied;
@property(readonly) Class superclass;

@end

