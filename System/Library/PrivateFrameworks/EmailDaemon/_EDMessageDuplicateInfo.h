//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDMailboxProvider, NSMutableArray, NSMutableSet;

@interface _EDMessageDuplicateInfo : NSObject
{
    EDMailboxProvider *_mailboxProvider;	// 8 = 0x8
    NSMutableSet *_mailboxes;	// 16 = 0x10
    NSMutableArray *_flags;	// 24 = 0x18
    NSMutableArray *_dates;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009df96
@property(retain, nonatomic) NSMutableArray *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) NSMutableArray *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSMutableSet *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(retain, nonatomic) EDMailboxProvider *mailboxProvider; // @synthesize mailboxProvider=_mailboxProvider;
- (id)combinedDate;	// IMP=0x000000000009deb8
- (id)combinedMessageFlags;	// IMP=0x000000000009dde9
- (id)combinedMailboxes;	// IMP=0x000000000009dd4c
- (void)addMessage:(id)arg1;	// IMP=0x000000000009da69
- (id)initWithMailboxProvider:(id)arg1;	// IMP=0x000000000009d909

@end

