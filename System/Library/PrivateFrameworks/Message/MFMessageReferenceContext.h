//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ECSubject, EFMutableInt64Set, MFMailMessage, NSArray, NSMutableDictionary, NSSet;
@protocol ECEmailAddressConvertible;

@interface MFMessageReferenceContext : NSObject
{
    id <ECEmailAddressConvertible> _sender;	// 8 = 0x8
    NSArray *_senderList;	// 16 = 0x10
    id <ECEmailAddressConvertible> _to;	// 24 = 0x18
    NSArray *_toList;	// 32 = 0x20
    id <ECEmailAddressConvertible> _cc;	// 40 = 0x28
    NSArray *_ccList;	// 48 = 0x30
    id <ECEmailAddressConvertible> _bcc;	// 56 = 0x38
    NSArray *_bccList;	// 64 = 0x40
    MFMailMessage *_message;	// 72 = 0x48
    long long _libraryID;	// 80 = 0x50
    long long _messageIDHash;	// 88 = 0x58
    ECSubject *_subject;	// 96 = 0x60
    EFMutableInt64Set *_references;	// 104 = 0x68
    NSMutableDictionary *_messageIDsBySubject;	// 112 = 0x70
    long long _mailboxID;	// 120 = 0x78
    long long _conversationIDHash;	// 128 = 0x80
    unsigned long long *_conversationFlagsRef;	// 136 = 0x88
    double _dateSentInterval;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000013787c
@property(nonatomic) double dateSentInterval; // @synthesize dateSentInterval=_dateSentInterval;
@property(nonatomic) unsigned long long *conversationFlagsRef; // @synthesize conversationFlagsRef=_conversationFlagsRef;
@property(nonatomic) long long conversationIDHash; // @synthesize conversationIDHash=_conversationIDHash;
@property(nonatomic) long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property(retain, nonatomic) NSMutableDictionary *messageIDsBySubject; // @synthesize messageIDsBySubject=_messageIDsBySubject;
@property(retain, nonatomic) EFMutableInt64Set *references; // @synthesize references=_references;
@property(copy, nonatomic) ECSubject *subject; // @synthesize subject=_subject;
@property(nonatomic) long long messageIDHash; // @synthesize messageIDHash=_messageIDHash;
@property(nonatomic) long long libraryID; // @synthesize libraryID=_libraryID;
@property(retain, nonatomic) MFMailMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSSet *participants;
@property(copy, nonatomic) NSArray *bccList; // @synthesize bccList=_bccList;
@property(copy, nonatomic) id <ECEmailAddressConvertible> bcc; // @synthesize bcc=_bcc;
@property(copy, nonatomic) NSArray *ccList; // @synthesize ccList=_ccList;
@property(copy, nonatomic) id <ECEmailAddressConvertible> cc; // @synthesize cc=_cc;
@property(copy, nonatomic) NSArray *toList; // @synthesize toList=_toList;
@property(copy, nonatomic) id <ECEmailAddressConvertible> to; // @synthesize to=_to;
@property(copy, nonatomic) NSArray *senderList; // @synthesize senderList=_senderList;
@property(copy, nonatomic) id <ECEmailAddressConvertible> sender; // @synthesize sender=_sender;

@end

