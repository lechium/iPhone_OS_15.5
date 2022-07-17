//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMHandle;

@interface IMParticipantSubscriptionSwitchChatItem
{
    IMHandle *_sender;	// 40 = 0x28
    IMHandle *_otherHandle;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000007b085
@property(readonly, nonatomic) IMHandle *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;	// IMP=0x000000000007af45

@end
