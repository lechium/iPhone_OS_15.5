//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSData, NSDate, NSString, WFFileRepresentation, WFWorkflowRecord;

@interface WFCloudKitWorkflow : NSObject <WFCloudKitItem>
{
    CKRecordID *_identifier;	// 8 = 0x8
    NSData *_recordSystemFieldsData;	// 16 = 0x10
    NSDate *_createdAt;	// 24 = 0x18
    NSDate *_modifiedAt;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_workflowSubtitle;	// 48 = 0x30
    NSString *_associatedAppBundleIdentifier;	// 56 = 0x38
    NSString *_source;	// 64 = 0x40
    NSString *_galleryIdentifier;	// 72 = 0x48
    WFFileRepresentation *_serializedDataFile;	// 80 = 0x50
    long long _cachedSyncHash;	// 88 = 0x58
    NSData *_serializedQuarantineData;	// 96 = 0x60
    NSData *_serializedAccessResourcePerWorkflowStateData;	// 104 = 0x68
    NSString *_lastSavedOnDeviceName;	// 112 = 0x70
    NSData *_serializedSmartPromptsPerWorkflowStateData;	// 120 = 0x78
    WFWorkflowRecord *_cachedRecord;	// 128 = 0x80
}

+ (id)recordIDWithZoneID:(id)arg1 workflowID:(id)arg2;	// IMP=0x00000000001c4d4a
+ (id)properties;	// IMP=0x00000000001c4a01
+ (id)recordType;	// IMP=0x00000000001c49f4
- (void).cxx_destruct;	// IMP=0x00000000001c5ac2
@property(retain, nonatomic) WFWorkflowRecord *cachedRecord; // @synthesize cachedRecord=_cachedRecord;
@property(copy, nonatomic) NSData *serializedSmartPromptsPerWorkflowStateData; // @synthesize serializedSmartPromptsPerWorkflowStateData=_serializedSmartPromptsPerWorkflowStateData;
@property(copy, nonatomic) NSString *lastSavedOnDeviceName; // @synthesize lastSavedOnDeviceName=_lastSavedOnDeviceName;
@property(copy, nonatomic) NSData *serializedAccessResourcePerWorkflowStateData; // @synthesize serializedAccessResourcePerWorkflowStateData=_serializedAccessResourcePerWorkflowStateData;
@property(copy, nonatomic) NSData *serializedQuarantineData; // @synthesize serializedQuarantineData=_serializedQuarantineData;
@property(nonatomic) long long cachedSyncHash; // @synthesize cachedSyncHash=_cachedSyncHash;
@property(retain, nonatomic) WFFileRepresentation *serializedDataFile; // @synthesize serializedDataFile=_serializedDataFile;
@property(copy, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(copy, nonatomic) NSString *workflowSubtitle; // @synthesize workflowSubtitle=_workflowSubtitle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDate *modifiedAt; // @synthesize modifiedAt=_modifiedAt;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSData *recordSystemFieldsData; // @synthesize recordSystemFieldsData=_recordSystemFieldsData;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (_Bool)isValidForSyncing;	// IMP=0x00000000001c58ef
- (id)recordRepresentationWithError:(id *)arg1;	// IMP=0x00000000001c5277
- (id)initWithRecord:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000001c4e26
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;	// IMP=0x00000000001c4dba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

