//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHPrefixQueryItem, NSString;

@interface PKMentionQueryItem
{
    NSString *_mentionResult;	// 8 = 0x8
    CHPrefixQueryItem *_coreHandwritingPrefixQueryItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a0fd5
@property(retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem; // @synthesize coreHandwritingPrefixQueryItem=_coreHandwritingPrefixQueryItem;
@property(copy, nonatomic) NSString *mentionResult; // @synthesize mentionResult=_mentionResult;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a0ef7
- (id)baselinePath;	// IMP=0x00000000000a0eb7
- (id)strokeIdentifiers;	// IMP=0x00000000000a0e9a
- (id)initWithCoreHandwritingPrefixQueryItem:(id)arg1;	// IMP=0x00000000000a0df5

@end

