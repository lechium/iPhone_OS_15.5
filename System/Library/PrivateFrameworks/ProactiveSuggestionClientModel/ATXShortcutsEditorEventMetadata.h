//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/ATXProtoBufWrapper-Protocol.h>
#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class ATXPBShortcutsEditorEventMetadata;

@interface ATXShortcutsEditorEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>
{
    ATXPBShortcutsEditorEventMetadata *_proto;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005d13f
- (void).cxx_destruct;	// IMP=0x000000000005d2fb
- (id)jsonDict;	// IMP=0x000000000005d2e5
- (_Bool)isEqualToATXShortcutsEditorEventMetadata:(id)arg1;	// IMP=0x000000000005d2cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d263
- (unsigned long long)hash;	// IMP=0x000000000005d24d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005d1c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005d147
- (id)proto;	// IMP=0x000000000005d131
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000005d095
- (id)initWithProto:(id)arg1;	// IMP=0x000000000005d062
- (id)encodeAsProto;	// IMP=0x000000000005d04c
@property(nonatomic) unsigned long long numStepsInShortcut;
- (id)initWithNumStepsInShortcut:(unsigned long long)arg1;	// IMP=0x000000000005cfac
- (id)init;	// IMP=0x000000000005cfa6

@end

