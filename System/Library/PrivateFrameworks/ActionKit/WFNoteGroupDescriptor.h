//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSString;

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding>
{
    INSpeakableString *_speakableString;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    unsigned long long _managedLevel;	// 24 = 0x18
}

+ (unsigned long long)managedLevelForNotesAccounts;	// IMP=0x000000000036cd14
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000036cd0c
- (void).cxx_destruct;	// IMP=0x000000000036cc96
@property(readonly, nonatomic) unsigned long long managedLevel; // @synthesize managedLevel=_managedLevel;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) INSpeakableString *speakableString; // @synthesize speakableString=_speakableString;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036ca61
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036c9c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000036c948
- (id)descriptorWithTargetAccountIdentifier:(id)arg1 targetManagedLevel:(unsigned long long)arg2;	// IMP=0x000000000036c8b4
- (id)initWithNoteGroupSpeakableString:(id)arg1;	// IMP=0x000000000036c7a4
- (id)initWithNoteGroupSpeakableString:(id)arg1 accountIdentifier:(id)arg2 managedLavel:(unsigned long long)arg3;	// IMP=0x000000000036c6de

@end

