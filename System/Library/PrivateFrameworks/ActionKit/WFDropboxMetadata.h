//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>
#import <ActionKit/NSSecureCoding-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>
#import <ActionKit/WFRemoteFile-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface WFDropboxMetadata : MTLModel <WFRemoteFile, WFNaming, MTLJSONSerializing, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_revision;	// 32 = 0x20
    NSString *_contentHash;	// 40 = 0x28
    NSNumber *_fileSize;	// 48 = 0x30
    NSDate *_clientModifiedDate;	// 56 = 0x38
    NSDate *_serverModifiedDate;	// 64 = 0x40
    NSString *_itemKind;	// 72 = 0x48
}

+ (id)serverModifiedDateJSONTransformer;	// IMP=0x0000000000381a80
+ (id)clientModifiedDateJSONTransformer;	// IMP=0x00000000003819c7
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x000000000038189f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000381897
- (void).cxx_destruct;	// IMP=0x00000000003817ef
@property(retain, nonatomic) NSString *itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) NSDate *serverModifiedDate; // @synthesize serverModifiedDate=_serverModifiedDate;
@property(readonly, nonatomic) NSDate *clientModifiedDate; // @synthesize clientModifiedDate=_clientModifiedDate;
@property(readonly, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property(readonly, copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000381634
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isDirectory;
- (_Bool)wfIsEqualToFile:(id)arg1;	// IMP=0x000000000018e414
- (id)wfFileType;	// IMP=0x000000000018e374
- (id)wfLastModifiedDate;	// IMP=0x000000000018e32b
- (id)wfFileSize;	// IMP=0x000000000018e319
- (id)wfPath;	// IMP=0x000000000018e307
- (_Bool)wfIsDirectory;	// IMP=0x000000000018e2f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) Class superclass;

@end

