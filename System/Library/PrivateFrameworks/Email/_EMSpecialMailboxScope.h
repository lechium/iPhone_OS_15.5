//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EFCacheable-Protocol.h>

@class NSString;

@interface _EMSpecialMailboxScope <EFCacheable>
{
    NSString *_identifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000035d10
- (void).cxx_destruct;	// IMP=0x000000000003639a
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2;	// IMP=0x000000000003632a
- (_Bool)scopeContainsMailbox:(id)arg1;	// IMP=0x00000000000362cb
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(_Bool *)arg2;	// IMP=0x0000000000036203
- (id)mailboxScopeByRemovingMailboxes:(id)arg1;	// IMP=0x0000000000036104
- (id)mailboxScopeByAddingMailboxes:(id)arg1;	// IMP=0x0000000000036008
- (_Bool)excludeMailboxes;	// IMP=0x0000000000036000
- (id)mailboxObjectIDs;	// IMP=0x0000000000035ff8
- (_Bool)excludeTypes;	// IMP=0x0000000000035ff0
- (id)mailboxTypes;	// IMP=0x0000000000035fe8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035ea8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035d18
- (id)ef_publicDescription;	// IMP=0x0000000000035c74
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000035b0c
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000035a34
- (id)cachedSelf;	// IMP=0x00000000000333f6

// Remaining properties
@property(readonly) Class superclass;

@end

