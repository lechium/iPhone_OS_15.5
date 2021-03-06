//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface _SFBrowserWindowStateData : NSObject
{
    _Bool _isActiveDocumentValid;	// 8 = 0x8
    _Bool _isTabStateSuccessfullyLoaded;	// 9 = 0x9
    _Bool _needsQuickUpdate;	// 10 = 0xa
    long long _databaseID;	// 16 = 0x10
    NSString *_UUIDString;	// 24 = 0x18
    NSString *_sceneID;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    long long _activeDocumentIndex;	// 48 = 0x30
    long long _activePrivateDocumentIndex;	// 56 = 0x38
    long long _legacyPlistFileVersion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001040b7
@property(nonatomic) _Bool needsQuickUpdate; // @synthesize needsQuickUpdate=_needsQuickUpdate;
@property(nonatomic) long long legacyPlistFileVersion; // @synthesize legacyPlistFileVersion=_legacyPlistFileVersion;
@property(nonatomic) _Bool isTabStateSuccessfullyLoaded; // @synthesize isTabStateSuccessfullyLoaded=_isTabStateSuccessfullyLoaded;
@property(nonatomic) _Bool isActiveDocumentValid; // @synthesize isActiveDocumentValid=_isActiveDocumentValid;
@property(nonatomic) long long activePrivateDocumentIndex; // @synthesize activePrivateDocumentIndex=_activePrivateDocumentIndex;
@property(nonatomic) long long activeDocumentIndex; // @synthesize activeDocumentIndex=_activeDocumentIndex;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(retain, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
@property(readonly, nonatomic) _Bool isInDatabase;
- (id)dictionaryPresentation;	// IMP=0x0000000000103e44
@property(retain, nonatomic) NSUUID *UUID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000103ca4
- (id)debugDescription;	// IMP=0x0000000000103c56
- (id)initWithUUIDString:(id)arg1 sceneID:(id)arg2;	// IMP=0x0000000000103b75
- (id)initWithSQLiteRow:(id)arg1;	// IMP=0x00000000001039c6
- (id)initWithDictionaryPresentation:(id)arg1;	// IMP=0x000000000010378a

@end

