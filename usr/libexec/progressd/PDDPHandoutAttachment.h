//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray, NSString, PDDPDate;

@interface PDDPHandoutAttachment : PBCodable
{
    NSString *_appBundleIdentifier;	// 8 = 0x8
    NSString *_appIdentifier;	// 16 = 0x10
    NSString *_appName;	// 24 = 0x18
    NSString *_appStoreIdentifier;	// 32 = 0x20
    NSMutableArray *_classIds;	// 40 = 0x28
    NSString *_contentStoreIdentifier;	// 48 = 0x30
    NSString *_contextCustomTypeName;	// 56 = 0x38
    NSMutableArray *_contextPaths;	// 64 = 0x40
    NSString *_contextSummary;	// 72 = 0x48
    int _contextType;	// 80 = 0x50
    PDDPDate *_dateCreated;	// 88 = 0x58
    PDDPDate *_dateLastModified;	// 96 = 0x60
    int _displayOrder;	// 104 = 0x68
    NSString *_objectId;	// 112 = 0x70
    NSString *_objectIdPath;	// 120 = 0x78
    NSString *_parentObjectId;	// 128 = 0x80
    int _permissionType;	// 136 = 0x88
    int _shareType;	// 140 = 0x8c
    NSString *_stableObjectIdPath;	// 144 = 0x90
    NSString *_title;	// 152 = 0x98
    int _type;	// 160 = 0xa0
    NSString *_url;	// 168 = 0xa8
    _Bool _contextSourceIsCatalog;	// 176 = 0xb0
    _Bool _isLocked;	// 177 = 0xb1
    struct {
        unsigned int contextType:1;
        unsigned int displayOrder:1;
        unsigned int permissionType:1;
        unsigned int shareType:1;
        unsigned int type:1;
        unsigned int contextSourceIsCatalog:1;
        unsigned int isLocked:1;
    } _has;	// 180 = 0xb4
}

+ (Class)classIdsType;	// IMP=0x002000000005d27a
+ (Class)contextPathType;	// IMP=0x001000000005c8df
- (void).cxx_destruct;	// IMP=0x00200000000602b5
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSMutableArray *classIds; // @synthesize classIds=_classIds;
@property(nonatomic) _Bool contextSourceIsCatalog; // @synthesize contextSourceIsCatalog=_contextSourceIsCatalog;
@property(retain, nonatomic) NSString *contextSummary; // @synthesize contextSummary=_contextSummary;
@property(retain, nonatomic) NSString *contextCustomTypeName; // @synthesize contextCustomTypeName=_contextCustomTypeName;
@property(retain, nonatomic) NSString *stableObjectIdPath; // @synthesize stableObjectIdPath=_stableObjectIdPath;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(retain, nonatomic) NSString *contentStoreIdentifier; // @synthesize contentStoreIdentifier=_contentStoreIdentifier;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) int displayOrder; // @synthesize displayOrder=_displayOrder;
@property(retain, nonatomic) NSString *objectIdPath; // @synthesize objectIdPath=_objectIdPath;
@property(retain, nonatomic) NSMutableArray *contextPaths; // @synthesize contextPaths=_contextPaths;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appStoreIdentifier; // @synthesize appStoreIdentifier=_appStoreIdentifier;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *parentObjectId; // @synthesize parentObjectId=_parentObjectId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000005facd
- (unsigned long long)hash;	// IMP=0x001000000005f7ad
- (MISSING_TYPE *)isEqual: /* Error: Ran out of types for this method. */;	// IMP=0x001000000005f273
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005ec22
- (void)copyTo:(id)arg1;	// IMP=0x001000000005e811
- (void)writeTo:(id)arg1;	// IMP=0x001000000005e35d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000005e350
- (id)dictionaryRepresentation;	// IMP=0x001000000005d34f
- (id)description;	// IMP=0x001000000005d2a0
@property(readonly, nonatomic) _Bool hasDateCreated;
- (id)classIdsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000005d25d
- (unsigned long long)classIdsCount;	// IMP=0x001000000005d240
- (void)addClassIds:(id)arg1;	// IMP=0x001000000005d1d6
- (void)clearClassIds;	// IMP=0x001000000005d1b9
@property(nonatomic) _Bool hasContextSourceIsCatalog;
@property(readonly, nonatomic) _Bool hasContextSummary;
@property(readonly, nonatomic) _Bool hasContextCustomTypeName;
@property(readonly, nonatomic) _Bool hasStableObjectIdPath;
@property(readonly, nonatomic) _Bool hasDateLastModified;
- (int)StringAsContextType:(id)arg1;	// IMP=0x001000000005ce74
- (id)contextTypeAsString:(int)arg1;	// IMP=0x001000000005cd25
@property(nonatomic) _Bool hasContextType;
@property(nonatomic) int contextType; // @synthesize contextType=_contextType;
- (int)StringAsPermissionType:(id)arg1;	// IMP=0x001000000005cc2c
- (id)permissionTypeAsString:(int)arg1;	// IMP=0x001000000005cbc6
@property(nonatomic) _Bool hasPermissionType;
@property(nonatomic) int permissionType; // @synthesize permissionType=_permissionType;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
- (int)StringAsShareType:(id)arg1;	// IMP=0x001000000005ca98
- (id)shareTypeAsString:(int)arg1;	// IMP=0x001000000005ca18
@property(nonatomic) _Bool hasShareType;
@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(readonly, nonatomic) _Bool hasContentStoreIdentifier;
@property(nonatomic) _Bool hasIsLocked;
@property(nonatomic) _Bool hasDisplayOrder;
@property(readonly, nonatomic) _Bool hasObjectIdPath;
- (id)contextPathAtIndex:(unsigned long long)arg1;	// IMP=0x001000000005c8c2
- (unsigned long long)contextPathsCount;	// IMP=0x001000000005c8a5
- (void)addContextPath:(id)arg1;	// IMP=0x001000000005c83b
- (void)clearContextPaths;	// IMP=0x001000000005c81e
@property(readonly, nonatomic) _Bool hasAppName;
@property(readonly, nonatomic) _Bool hasAppStoreIdentifier;
@property(readonly, nonatomic) _Bool hasAppBundleIdentifier;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasParentObjectId;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasObjectId;
- (int)StringAsType:(id)arg1;	// IMP=0x001000000005c674
- (id)typeAsString:(int)arg1;	// IMP=0x001000000005c5ce
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

