//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteTextInput/NSCopying-Protocol.h>
#import <RemoteTextInput/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSIndexSet, NSString, TITextInputTraits;

@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_appId;	// 8 = 0x8
    NSString *_bundleId;	// 16 = 0x10
    NSString *_appName;	// 24 = 0x18
    NSString *_localizedAppName;	// 32 = 0x20
    NSArray *_associatedDomains;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_prompt;	// 56 = 0x38
    TITextInputTraits *_textInputTraits;	// 64 = 0x40
    NSIndexSet *_PINEntrySeparatorIndexes;	// 72 = 0x48
    unsigned long long _autofillMode;	// 80 = 0x50
    NSDictionary *_autofillContext;	// 88 = 0x58
    struct _NSRange _validTextRange;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b975
- (void).cxx_destruct;	// IMP=0x000000000000cfd2
@property(retain, nonatomic) NSDictionary *autofillContext; // @synthesize autofillContext=_autofillContext;
@property(nonatomic) unsigned long long autofillMode; // @synthesize autofillMode=_autofillMode;
@property(nonatomic) struct _NSRange validTextRange; // @synthesize validTextRange=_validTextRange;
@property(retain, nonatomic) NSIndexSet *PINEntrySeparatorIndexes; // @synthesize PINEntrySeparatorIndexes=_PINEntrySeparatorIndexes;
@property(retain, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property(copy, nonatomic) NSString *localizedAppName; // @synthesize localizedAppName=_localizedAppName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)copyContextualPropertiesFromDocumentTraits:(id)arg1;	// IMP=0x000000000000cdc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c760
- (id)description;	// IMP=0x000000000000c378
- (id)init;	// IMP=0x000000000000c30f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c191
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bcab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b97d

@end

