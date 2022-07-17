//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBDataSetters-Protocol.h>
#import <EmailDaemon/EDPETMessageFrameTypeIntrospectable-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>

@class EDPBInteractionEventAppBackground, EDPBInteractionEventAppLaunch, EDPBInteractionEventAppResume, EDPBInteractionEventCategoryInferred, EDPBInteractionEventCategoryMarked, EDPBInteractionEventFlagChanged, EDPBInteractionEventForwardDraftStarted, EDPBInteractionEventForwardSent, EDPBInteractionEventLinkClicked, EDPBInteractionEventMarkedMuteThread, EDPBInteractionEventMessageCopied, EDPBInteractionEventMessageFetched, EDPBInteractionEventMessageMoved, EDPBInteractionEventMessageSent, EDPBInteractionEventMessageViewEnd, EDPBInteractionEventMessageViewStart, EDPBInteractionEventReadChanged, EDPBInteractionEventReplyDraftStarted, EDPBInteractionEventReplySent;

@interface EDPBInteractionEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, EDPBDataSetters, NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    EDPBInteractionEventAppBackground *_appBackground;	// 16 = 0x10
    EDPBInteractionEventAppLaunch *_appLaunch;	// 24 = 0x18
    EDPBInteractionEventAppResume *_appResume;	// 32 = 0x20
    EDPBInteractionEventCategoryInferred *_categoryInferred;	// 40 = 0x28
    EDPBInteractionEventCategoryMarked *_categoryMarked;	// 48 = 0x30
    int _eventName;	// 56 = 0x38
    EDPBInteractionEventFlagChanged *_flagChanged;	// 64 = 0x40
    EDPBInteractionEventForwardDraftStarted *_forwardDraftStarted;	// 72 = 0x48
    EDPBInteractionEventForwardSent *_forwardSent;	// 80 = 0x50
    EDPBInteractionEventLinkClicked *_linkClicked;	// 88 = 0x58
    EDPBInteractionEventMarkedMuteThread *_markedMuteThread;	// 96 = 0x60
    EDPBInteractionEventMessageCopied *_messageCopied;	// 104 = 0x68
    EDPBInteractionEventMessageFetched *_messageFetched;	// 112 = 0x70
    EDPBInteractionEventMessageMoved *_messageMoved;	// 120 = 0x78
    EDPBInteractionEventMessageSent *_messageSent;	// 128 = 0x80
    EDPBInteractionEventMessageViewEnd *_messageViewEnd;	// 136 = 0x88
    EDPBInteractionEventMessageViewStart *_messageViewStart;	// 144 = 0x90
    EDPBInteractionEventReadChanged *_readChanged;	// 152 = 0x98
    EDPBInteractionEventReplyDraftStarted *_replyDraftStarted;	// 160 = 0xa0
    EDPBInteractionEventReplySent *_replySent;	// 168 = 0xa8
    unsigned int _sequenceNumber;	// 176 = 0xb0
    struct {
        unsigned int timestamp:1;
        unsigned int eventName:1;
        unsigned int sequenceNumber:1;
    } _has;	// 180 = 0xb4
}

- (void).cxx_destruct;	// IMP=0x00000000000a5dc9
@property(retain, nonatomic) EDPBInteractionEventCategoryInferred *categoryInferred; // @synthesize categoryInferred=_categoryInferred;
@property(retain, nonatomic) EDPBInteractionEventCategoryMarked *categoryMarked; // @synthesize categoryMarked=_categoryMarked;
@property(retain, nonatomic) EDPBInteractionEventMarkedMuteThread *markedMuteThread; // @synthesize markedMuteThread=_markedMuteThread;
@property(retain, nonatomic) EDPBInteractionEventForwardSent *forwardSent; // @synthesize forwardSent=_forwardSent;
@property(retain, nonatomic) EDPBInteractionEventReplySent *replySent; // @synthesize replySent=_replySent;
@property(retain, nonatomic) EDPBInteractionEventForwardDraftStarted *forwardDraftStarted; // @synthesize forwardDraftStarted=_forwardDraftStarted;
@property(retain, nonatomic) EDPBInteractionEventReplyDraftStarted *replyDraftStarted; // @synthesize replyDraftStarted=_replyDraftStarted;
@property(retain, nonatomic) EDPBInteractionEventMessageViewEnd *messageViewEnd; // @synthesize messageViewEnd=_messageViewEnd;
@property(retain, nonatomic) EDPBInteractionEventMessageViewStart *messageViewStart; // @synthesize messageViewStart=_messageViewStart;
@property(retain, nonatomic) EDPBInteractionEventReadChanged *readChanged; // @synthesize readChanged=_readChanged;
@property(retain, nonatomic) EDPBInteractionEventFlagChanged *flagChanged; // @synthesize flagChanged=_flagChanged;
@property(retain, nonatomic) EDPBInteractionEventAppResume *appResume; // @synthesize appResume=_appResume;
@property(retain, nonatomic) EDPBInteractionEventAppBackground *appBackground; // @synthesize appBackground=_appBackground;
@property(retain, nonatomic) EDPBInteractionEventAppLaunch *appLaunch; // @synthesize appLaunch=_appLaunch;
@property(retain, nonatomic) EDPBInteractionEventLinkClicked *linkClicked; // @synthesize linkClicked=_linkClicked;
@property(retain, nonatomic) EDPBInteractionEventMessageCopied *messageCopied; // @synthesize messageCopied=_messageCopied;
@property(retain, nonatomic) EDPBInteractionEventMessageMoved *messageMoved; // @synthesize messageMoved=_messageMoved;
@property(retain, nonatomic) EDPBInteractionEventMessageSent *messageSent; // @synthesize messageSent=_messageSent;
@property(retain, nonatomic) EDPBInteractionEventMessageFetched *messageFetched; // @synthesize messageFetched=_messageFetched;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a55d2
- (unsigned long long)hash;	// IMP=0x00000000000a5352
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a4e6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a4ae9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a47f9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a452a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a451c
- (id)dictionaryRepresentation;	// IMP=0x00000000000a312b
- (id)description;	// IMP=0x00000000000a305b
@property(readonly, nonatomic) _Bool hasCategoryInferred;
@property(readonly, nonatomic) _Bool hasCategoryMarked;
@property(readonly, nonatomic) _Bool hasMarkedMuteThread;
@property(readonly, nonatomic) _Bool hasForwardSent;
@property(readonly, nonatomic) _Bool hasReplySent;
@property(readonly, nonatomic) _Bool hasForwardDraftStarted;
@property(readonly, nonatomic) _Bool hasReplyDraftStarted;
@property(readonly, nonatomic) _Bool hasMessageViewEnd;
@property(readonly, nonatomic) _Bool hasMessageViewStart;
@property(readonly, nonatomic) _Bool hasReadChanged;
@property(readonly, nonatomic) _Bool hasFlagChanged;
@property(readonly, nonatomic) _Bool hasAppResume;
@property(readonly, nonatomic) _Bool hasAppBackground;
@property(readonly, nonatomic) _Bool hasAppLaunch;
@property(readonly, nonatomic) _Bool hasLinkClicked;
@property(readonly, nonatomic) _Bool hasMessageCopied;
@property(readonly, nonatomic) _Bool hasMessageMoved;
@property(readonly, nonatomic) _Bool hasMessageSent;
@property(readonly, nonatomic) _Bool hasMessageFetched;
- (int)StringAsEventName:(id)arg1;	// IMP=0x00000000000a2ba8
- (id)eventNameAsString:(int)arg1;	// IMP=0x00000000000a2a29
@property(nonatomic) _Bool hasEventName;
@property(nonatomic) int eventName; // @synthesize eventName=_eventName;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasSequenceNumber;
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000a1c70
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000a1b9c
- (id)ed_oneOfConcreteEvent;	// IMP=0x00000000000a19c0
- (int)messageFrameType;	// IMP=0x00000000000a19b5

@end
