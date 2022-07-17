//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocompleteUI/NSCopying-Protocol.h>
#import <ContactsAutocompleteUI/NSItemProviderReading-Protocol.h>
#import <ContactsAutocompleteUI/NSItemProviderWriting-Protocol.h>
#import <ContactsAutocompleteUI/NSSecureCoding-Protocol.h>

@class CNAutocompleteResult, CNComposeRecipientOriginContext, CNContact, NSArray, NSPersonNameComponents, NSSet, NSString;

@interface CNComposeRecipient : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding>
{
    _Bool _isMemberOfGroup;	// 8 = 0x8
    CNComposeRecipientOriginContext *_originContext;	// 16 = 0x10
    NSString *_address;	// 24 = 0x18
    unsigned long long _kind;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
    NSArray *_cachedCompleteMatches;	// 48 = 0x30
    NSArray *_cachedMatchedStrings;	// 56 = 0x38
    NSArray *_cachedSortedMembers;	// 64 = 0x40
    NSSet *_cachedHandles;	// 72 = 0x48
    NSString *_compositeName;	// 80 = 0x50
    NSString *_contactIdentifier;	// 88 = 0x58
    NSString *_valueIdentifier;	// 96 = 0x60
    NSString *_unlocalizedLabel;	// 104 = 0x68
    NSString *_inputAddress;	// 112 = 0x70
    CNContact *_contact;	// 120 = 0x78
    NSString *_label;	// 128 = 0x80
    NSString *_displayString;	// 136 = 0x88
    CNAutocompleteResult *_autocompleteResult;	// 144 = 0x90
    NSPersonNameComponents *_nameComponents;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e7af
+ (id)composeRecipientWithAutocompleteResult:(id)arg1;	// IMP=0x000000000001de38
+ (id)descriptorsForRequiredKeysForContact;	// IMP=0x000000000001dbc1
+ (id)os_log;	// IMP=0x000000000001db65
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0000000000050346
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000501f1
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x000000000005018a
- (void).cxx_destruct;	// IMP=0x0000000000021a74
@property(retain, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(retain, nonatomic) CNAutocompleteResult *autocompleteResult; // @synthesize autocompleteResult=_autocompleteResult;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool isMemberOfGroup; // @synthesize isMemberOfGroup=_isMemberOfGroup;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *inputAddress; // @synthesize inputAddress=_inputAddress;
@property(copy, nonatomic) NSString *unlocalizedLabel; // @synthesize unlocalizedLabel=_unlocalizedLabel;
@property(copy, nonatomic) NSString *valueIdentifier; // @synthesize valueIdentifier=_valueIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) NSString *compositeName; // @synthesize compositeName=_compositeName;
@property(retain, nonatomic) NSSet *cachedHandles; // @synthesize cachedHandles=_cachedHandles;
@property(retain, nonatomic) NSArray *cachedSortedMembers; // @synthesize cachedSortedMembers=_cachedSortedMembers;
@property(retain, nonatomic) NSArray *cachedMatchedStrings; // @synthesize cachedMatchedStrings=_cachedMatchedStrings;
@property(retain, nonatomic) NSArray *cachedCompleteMatches; // @synthesize cachedCompleteMatches=_cachedCompleteMatches;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) CNComposeRecipientOriginContext *originContext; // @synthesize originContext=_originContext;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002151b
- (_Bool)isEquivalentAddressToRecipient:(id)arg1;	// IMP=0x0000000000021352
- (id)labeledValueIdentifier;	// IMP=0x0000000000021086
- (id)_unformattedAddress;	// IMP=0x0000000000021032
@property(readonly, nonatomic) _Bool supportsPasteboardUnarchiving;
@property(readonly, copy, nonatomic) NSString *pasteboardString;
@property(readonly, nonatomic) NSString *stringForEqualityTesting;
@property(readonly, nonatomic) NSString *uncommentedAddress;
@property(readonly, nonatomic) NSString *placeholderName;
- (id)alternativeToDisplayString;	// IMP=0x000000000002088a
- (id)displayStringPreferringNickname:(_Bool)arg1;	// IMP=0x00000000000207af
@property(readonly, nonatomic) NSString *shortName;
@property(readonly, nonatomic) NSString *commentedAddress;
- (id)associatedHandles;	// IMP=0x000000000001ffcd
- (id)unifiedHandles;	// IMP=0x000000000001ff4f
@property(readonly, nonatomic) NSString *normalizedAddress;
- (id)preferredSendingAddress;	// IMP=0x000000000001fe5d
- (id)completelyMatchedAttributedStrings;	// IMP=0x000000000001f3ec
@property(readonly, nonatomic) _Bool isDirectoryServerResult;
@property(readonly, nonatomic) _Bool showsChevronButton;
@property(readonly, nonatomic) _Bool isSuggestedRecipient;
- (_Bool)wasCompleteMatch;	// IMP=0x000000000001ed6a
@property(readonly, nonatomic) _Bool showsAccessoryButton;
@property(readonly, nonatomic, getter=isRemovableFromSearchResults) _Bool removableFromSearchResults;
@property(readonly, nonatomic) _Bool isGroup;
- (id)childrenWithCompleteMatches;	// IMP=0x000000000001ecc3
- (id)sortedChildren;	// IMP=0x000000000001ecb6
- (id)children;	// IMP=0x000000000001eca9
- (id)rawDisplayString;	// IMP=0x000000000001ec98
@property(readonly, nonatomic) unsigned long long sourceType;
- (id)fetchContactWithKeys:(id)arg1;	// IMP=0x000000000001ea14
- (id)contactWithKeysToFetch:(id)arg1;	// IMP=0x000000000001e8d2
- (void)addRecipientToPasteboard:(id)arg1;	// IMP=0x000000000001e7b7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e6b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e6ad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e57d
- (id)initWithContact:(id)arg1 address:(id)arg2 displayString:(id)arg3 kind:(unsigned long long)arg4;	// IMP=0x000000000001dcaa
- (id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;	// IMP=0x000000000001dc92
- (id)init;	// IMP=0x000000000001dc76
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000503e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end
