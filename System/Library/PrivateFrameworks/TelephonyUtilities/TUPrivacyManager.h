//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TUPrivacyManager : NSObject
{
}

+ (id)sharedPrivacyManager;	// IMP=0x00000000000aac59
@property(readonly, copy, nonatomic) NSArray *privacyRules;
- (id)allBlacklistRules;	// IMP=0x00000000000ab4d1
- (_Bool)isIncomingCommunicationBlockedForHandle:(id)arg1;	// IMP=0x00000000000ab441
- (_Bool)isIncomingCommunicationBlockedForBusinessID:(id)arg1;	// IMP=0x00000000000ab3e4
- (_Bool)isIncomingCommunicationBlockedForEmailAddress:(id)arg1;	// IMP=0x00000000000ab387
- (_Bool)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1;	// IMP=0x00000000000ab31a
- (void)removeRule:(id)arg1;	// IMP=0x00000000000ab243
- (void)addRule:(id)arg1;	// IMP=0x00000000000ab169
- (void)setBlockIncomingCommunication:(_Bool)arg1 forBusinessID:(id)arg2;	// IMP=0x00000000000ab06a
- (void)setBlockIncomingCommunication:(_Bool)arg1 forEmailAddress:(id)arg2;	// IMP=0x00000000000aaf6b
- (void)setBlockIncomingCommunication:(_Bool)arg1 forPhoneNumber:(id)arg2;	// IMP=0x00000000000aae5c
- (void)_handleBlockListChanged:(id)arg1;	// IMP=0x00000000000aadb7
- (void)dealloc;	// IMP=0x00000000000aad42
- (id)init;	// IMP=0x00000000000aacae

@end
