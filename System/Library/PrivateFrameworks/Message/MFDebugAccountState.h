//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MailAccount, NSArray, NSString;

@interface MFDebugAccountState : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_lastKnownCapabilities;	// 16 = 0x10
    MailAccount *_mailAccount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000dea09
@property(retain, nonatomic) MailAccount *mailAccount; // @synthesize mailAccount=_mailAccount;
@property(retain, nonatomic) NSArray *lastKnownCapabilities; // @synthesize lastKnownCapabilities=_lastKnownCapabilities;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)dictionaryRepresentation;	// IMP=0x00000000000de7de
- (id)initWithStateEventDictionary:(id)arg1 identifier:(id)arg2 lastKnownCapabilities:(id)arg3;	// IMP=0x00000000000de703

@end

