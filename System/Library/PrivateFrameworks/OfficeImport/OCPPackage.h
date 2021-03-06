//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, OCPPackageProperties, OCPPackageRelationshipCollection;

__attribute__((visibility("hidden")))
@interface OCPPackage : NSObject
{
    OCPPackageRelationshipCollection *mRelationships;	// 8 = 0x8
    OCPPackageProperties *mProperties;	// 16 = 0x10
    NSMutableDictionary *mDefaultContentTypes;	// 24 = 0x18
    NSMutableDictionary *mContentTypeOverrides;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000376e63
- (id)properties;	// IMP=0x00000000001bafdb
- (id)mainDocumentPart;	// IMP=0x0000000000376dc5
- (id)partByRelationshipType:(id)arg1;	// IMP=0x0000000000376ce4
- (id)relationshipsByType:(id)arg1;	// IMP=0x0000000000376cbe
- (id)relationshipForIdentifier:(id)arg1;	// IMP=0x0000000000376c98
- (void)resetPartForLocation:(id)arg1;	// IMP=0x0000000000376c92
- (id)partForLocation:(id)arg1;	// IMP=0x0000000000376c8a
- (id)init;	// IMP=0x0000000000376c7c
- (id)contentTypeForPartLocation:(id)arg1;	// IMP=0x00000000001ac5c9
- (id)initWithRelationshipsXml:(struct _xmlDoc *)arg1 corePropertiesXml:(struct _xmlDoc *)arg2 appPropertiesXml:(struct _xmlDoc *)arg3 contentTypesXml:(struct _xmlDoc *)arg4;	// IMP=0x0000000000376ea1
- (void)readContentTypeOverrideFromElement:(struct _xmlNode *)arg1;	// IMP=0x0000000000376fff
- (void)readDefaultContentTypeFromElement:(struct _xmlNode *)arg1;	// IMP=0x0000000000193c70
- (void)readContentTypesXml:(struct _xmlDoc *)arg1;	// IMP=0x0000000000193a96

@end

