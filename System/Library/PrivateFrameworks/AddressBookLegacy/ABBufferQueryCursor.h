//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABBufferQuery, CNManagedConfiguration, NSMutableData, NSMutableDictionary;

@interface ABBufferQueryCursor : NSObject
{
    _Bool _hasFoundAnyImageDataForCurrentContact;	// 8 = 0x8
    int _currentMultivalueIdentifier;	// 12 = 0xc
    int _currentPropertyID;	// 16 = 0x10
    int _currentRecordID;	// 20 = 0x14
    int _multivaluePropertyIDColumn;	// 24 = 0x18
    int _multivalueIdentifierColumn;	// 28 = 0x1c
    int _multivalueUUIDColumn;	// 32 = 0x20
    int _multivalueValueColumn;	// 36 = 0x24
    int _multivalueLabelColumn;	// 40 = 0x28
    int _multivalueEntryKeyColumn;	// 44 = 0x2c
    int _multivalueEntryValueColumn;	// 48 = 0x30
    int _contactLinkUUIDColumn;	// 52 = 0x34
    int _contactPreferredForImageColumn;	// 56 = 0x38
    int _personLinkColumn;	// 60 = 0x3c
    NSMutableData *_mutableData;	// 64 = 0x40
    NSMutableDictionary *_matchInfo;	// 72 = 0x48
    struct sqlite3_blob *_incompleteBlob;	// 80 = 0x50
    unsigned long long _blobBytesWritten;	// 88 = 0x58
    unsigned long long _blobLength;	// 96 = 0x60
    long long _currentMultivalue;	// 104 = 0x68
    long long _resumeToken;	// 112 = 0x70
    unsigned long long _maxBufferSize;	// 120 = 0x78
    unsigned long long _maxContactsPerBatch;	// 128 = 0x80
    unsigned long long _countOfContactsInBuffer;	// 136 = 0x88
    ABBufferQuery *_query;	// 144 = 0x90
    CNManagedConfiguration *_managedConfiguration;	// 152 = 0x98
}

@property(nonatomic) int personLinkColumn; // @synthesize personLinkColumn=_personLinkColumn;
@property(nonatomic) int contactPreferredForImageColumn; // @synthesize contactPreferredForImageColumn=_contactPreferredForImageColumn;
@property(nonatomic) int contactLinkUUIDColumn; // @synthesize contactLinkUUIDColumn=_contactLinkUUIDColumn;
@property(nonatomic) int multivalueEntryValueColumn; // @synthesize multivalueEntryValueColumn=_multivalueEntryValueColumn;
@property(nonatomic) int multivalueEntryKeyColumn; // @synthesize multivalueEntryKeyColumn=_multivalueEntryKeyColumn;
@property(nonatomic) int multivalueLabelColumn; // @synthesize multivalueLabelColumn=_multivalueLabelColumn;
@property(nonatomic) int multivalueValueColumn; // @synthesize multivalueValueColumn=_multivalueValueColumn;
@property(nonatomic) int multivalueUUIDColumn; // @synthesize multivalueUUIDColumn=_multivalueUUIDColumn;
@property(nonatomic) int multivalueIdentifierColumn; // @synthesize multivalueIdentifierColumn=_multivalueIdentifierColumn;
@property(nonatomic) int multivaluePropertyIDColumn; // @synthesize multivaluePropertyIDColumn=_multivaluePropertyIDColumn;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(readonly, nonatomic) ABBufferQuery *query; // @synthesize query=_query;
@property(nonatomic) unsigned long long countOfContactsInBuffer; // @synthesize countOfContactsInBuffer=_countOfContactsInBuffer;
@property(nonatomic) unsigned long long maxContactsPerBatch; // @synthesize maxContactsPerBatch=_maxContactsPerBatch;
@property(nonatomic) unsigned long long maxBufferSize; // @synthesize maxBufferSize=_maxBufferSize;
@property(nonatomic) int currentRecordID; // @synthesize currentRecordID=_currentRecordID;
@property(nonatomic) int currentPropertyID; // @synthesize currentPropertyID=_currentPropertyID;
@property(nonatomic) int currentMultivalueIdentifier; // @synthesize currentMultivalueIdentifier=_currentMultivalueIdentifier;
@property(nonatomic) long long resumeToken; // @synthesize resumeToken=_resumeToken;
@property(nonatomic) _Bool hasFoundAnyImageDataForCurrentContact; // @synthesize hasFoundAnyImageDataForCurrentContact=_hasFoundAnyImageDataForCurrentContact;
@property(nonatomic) long long currentMultivalue; // @synthesize currentMultivalue=_currentMultivalue;
@property(nonatomic) unsigned long long blobLength; // @synthesize blobLength=_blobLength;
@property(nonatomic) unsigned long long blobBytesWritten; // @synthesize blobBytesWritten=_blobBytesWritten;
@property(nonatomic) struct sqlite3_blob *incompleteBlob; // @synthesize incompleteBlob=_incompleteBlob;
@property(retain, nonatomic) NSMutableDictionary *matchInfo; // @synthesize matchInfo=_matchInfo;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
- (void)dealloc;	// IMP=0x00000000000664fa
- (void)fetchNextBatchWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000659cd
- (id)initWithQuery:(id)arg1 batchSize:(unsigned long long)arg2 managedConfiguration:(id)arg3;	// IMP=0x000000000006573c
- (id)initWithAddressBook:(void *)arg1 predicate:(id)arg2 propertyIdentifierSet:(struct __CFSet *)arg3 includeLinkedContacts:(_Bool)arg4 sortOrder:(unsigned int)arg5 suggestedContactsPerBatch:(unsigned long long)arg6 managedConfiguration:(id)arg7;	// IMP=0x000000000006569c

@end
