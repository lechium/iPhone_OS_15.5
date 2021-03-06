//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

@interface IMDCoreSpotlightChatParticipant : NSObject
{
    _Bool _isSender;	// 8 = 0x8
    NSString *_handleID;	// 16 = 0x10
    CNContact *_contact;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(readonly, retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;
- (void)dealloc;	// IMP=0x0000000000034b8d
- (id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(_Bool)arg3;	// IMP=0x0000000000034b17

@end

