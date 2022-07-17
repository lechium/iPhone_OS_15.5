//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebBookmarks/NSCopying-Protocol.h>
#import <WebBookmarks/NSSecureCoding-Protocol.h>
#import <WebBookmarks/WBSerializable-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString, WebBookmark;

@interface WBTabGroup : NSObject <NSCopying, NSSecureCoding, WBSerializable>
{
    NSMutableArray *_tabs;	// 8 = 0x8
    NSArray *_overflowRemoteTabs;	// 16 = 0x10
    NSMutableArray *_deletedTabs;	// 24 = 0x18
    CDUnknownBlockType _displayTitleProvider;	// 32 = 0x20
    NSString *_lastSelectedTabUUID;	// 40 = 0x28
    long long _type;	// 48 = 0x30
    WebBookmark *_bookmark;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005acaa
+ (id)privateTabGroup;	// IMP=0x000000000005a686
+ (id)localTabGroup;	// IMP=0x000000000005a5d4
- (void).cxx_destruct;	// IMP=0x000000000005ce44
@property(readonly, copy, nonatomic) NSArray *deletedTabs; // @synthesize deletedTabs=_deletedTabs;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *lastSelectedTabUUID; // @synthesize lastSelectedTabUUID=_lastSelectedTabUUID;
@property(copy, nonatomic) CDUnknownBlockType displayTitleProvider; // @synthesize displayTitleProvider=_displayTitleProvider;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)detectDuplicatedTabs;	// IMP=0x000000000005ca2b
@property(readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property(readonly, copy) NSString *description;
- (void)clearDeletedTabs;	// IMP=0x000000000005c76a
- (void)updateTab:(id)arg1;	// IMP=0x000000000005c6dc
- (void)reorderTab:(id)arg1 afterTab:(id)arg2;	// IMP=0x000000000005c64b
- (void)removeTabs:(id)arg1;	// IMP=0x000000000005c4ec
- (void)removeTab:(id)arg1;	// IMP=0x000000000005c442
- (void)insertTabs:(id)arg1 afterTab:(id)arg2;	// IMP=0x000000000005c28e
- (void)insertTab:(id)arg1 afterTab:(id)arg2;	// IMP=0x000000000005c1c8
- (void)clearTabs;	// IMP=0x000000000005c194
- (void)appendTabs:(id)arg1;	// IMP=0x000000000005c11b
- (void)appendTab:(id)arg1;	// IMP=0x000000000005c049
- (id)tabWithUUID:(id)arg1;	// IMP=0x000000000005bf5d
- (_Bool)tabsAreIdentical:(id)arg1;	// IMP=0x000000000005bd7a
- (_Bool)isIdentical:(id)arg1;	// IMP=0x000000000005bcd7
@property(readonly, copy, nonatomic) NSString *uuid;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *tabs;
@property(readonly, nonatomic) NSArray *allTabs;
@property(nonatomic, getter=isSyncable) _Bool syncable;
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) _Bool isLocal;
@property(nonatomic) int identifier;
@property(readonly, nonatomic) NSSet *tabsUUIDSet;
@property(readonly, copy, nonatomic) NSString *htmlString;
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000000005b1b5
- (_Bool)isHidden;	// IMP=0x000000000005b19f
@property(readonly, copy, nonatomic) NSString *displayTitle;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000005ae42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005adbb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005acb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ac41
- (void)truncateToNumberOfTabs:(unsigned long long)arg1;	// IMP=0x000000000005ab5d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005aa60
- (id)initWithBookmark:(id)arg1 tabs:(id)arg2 lastSelectedTabUUID:(id)arg3 type:(long long)arg4;	// IMP=0x000000000005a930
- (id)initWithBookmark:(id)arg1 tabs:(id)arg2 lastSelectedTabUUID:(id)arg3;	// IMP=0x000000000005a918
- (id)initWithBookmark:(id)arg1;	// IMP=0x000000000005a8fc
- (id)initWithTitle:(id)arg1 uuid:(id)arg2;	// IMP=0x000000000005a83d
- (id)initWithTitle:(id)arg1;	// IMP=0x000000000005a79e
- (id)init;	// IMP=0x000000000005a73b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
