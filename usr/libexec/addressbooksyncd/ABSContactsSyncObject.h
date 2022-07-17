//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface ABSContactsSyncObject
{
    NSString *_guid;	// 8 = 0x8
    NSString *_accountID;	// 16 = 0x10
}

+ (void)clearMeCardSet;	// IMP=0x0040000000024b24
- (void).cxx_destruct;	// IMP=0x0020000000025f72
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)description;	// IMP=0x0010000000025eae
- (id)createProtobufWithOptions:(id)arg1;	// IMP=0x00100000000253d6
- (id)_pBcontainerAttributesForContainer:(id)arg1;	// IMP=0x0010000000025316
- (void)_attachContainerAttributesTo:(id)arg1 contact:(id)arg2 store:(id)arg3;	// IMP=0x001000000002512b
- (void)_attachMiscTo:(id)arg1 contact:(id)arg2;	// IMP=0x0010000000024e5c
- (void)_attachInnerContactDataTo:(id)arg1 contact:(id)arg2 options:(id)arg3;	// IMP=0x0010000000024c00
- (id)objectIdentifier;	// IMP=0x0010000000024b5e
- (id)initWithReality:(id)arg1 person:(id)arg2 isMe:(_Bool)arg3;	// IMP=0x0010000000024689
- (id)init;	// IMP=0x001000000002467b

@end
