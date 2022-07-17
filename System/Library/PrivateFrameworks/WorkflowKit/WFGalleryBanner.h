//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSMutableCopying-Protocol.h>
#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSArray, NSData, NSString, WFFileRepresentation;

@interface WFGalleryBanner : NSObject <WFCloudKitItem, NSMutableCopying>
{
    CKRecordID *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    CKRecordID *_detailPage;	// 24 = 0x18
    WFFileRepresentation *_iphone2xImageFile;	// 32 = 0x20
    WFFileRepresentation *_iphone3xImageFile;	// 40 = 0x28
    WFFileRepresentation *_ipad2xImageFile;	// 48 = 0x30
    NSString *_language;	// 56 = 0x38
    CKRecordID *_base;	// 64 = 0x40
    NSString *_persistentIdentifier;	// 72 = 0x48
    NSArray *_supportedIdioms;	// 80 = 0x50
}

+ (struct CGSize)pixelSizeForBannerSize:(long long)arg1;	// IMP=0x00000000001f898f
+ (struct CGSize)pointSizeForBannerSize:(long long)arg1;	// IMP=0x00000000001f896c
+ (double)scaleForBannerSize:(long long)arg1;	// IMP=0x00000000001f8951
+ (id)propertyForSize:(long long)arg1;	// IMP=0x00000000001f8926
+ (id)properties;	// IMP=0x00000000001f8594
+ (id)recordType;	// IMP=0x00000000001f8587
- (void).cxx_destruct;	// IMP=0x00000000001f838d
@property(readonly, nonatomic) NSArray *supportedIdioms; // @synthesize supportedIdioms=_supportedIdioms;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) WFFileRepresentation *ipad2xImageFile; // @synthesize ipad2xImageFile=_ipad2xImageFile;
@property(retain, nonatomic) WFFileRepresentation *iphone3xImageFile; // @synthesize iphone3xImageFile=_iphone3xImageFile;
@property(retain, nonatomic) WFFileRepresentation *iphone2xImageFile; // @synthesize iphone2xImageFile=_iphone2xImageFile;
@property(readonly, nonatomic) CKRecordID *detailPage; // @synthesize detailPage=_detailPage;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f7fa0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f7ce3
- (id)imageForSize:(long long)arg1;	// IMP=0x00000000001f7c49
- (id)imageFileForSize:(long long)arg1;	// IMP=0x00000000001f7c1a
- (unsigned long long)referenceActionForKey:(id)arg1;	// IMP=0x00000000001f7bfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *recordSystemFieldsData;
@property(readonly) Class superclass;

@end
